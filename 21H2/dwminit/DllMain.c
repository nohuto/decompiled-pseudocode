/*
 * XREFs of DllMain @ 0x180008510
 * Callers:
 *     dllmain_dispatch @ 0x18000D830 (dllmain_dispatch.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001658 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x180008114 (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  __int128 v8; // xmm0
  REGHANDLE v9; // rcx
  int dwOptionsa; // [rsp+20h] [rbp-E0h]
  DWORD dwOptions[2]; // [rsp+20h] [rbp-E0h]
  int samDesired; // [rsp+28h] [rbp-D8h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  int phkResult; // [rsp+38h] [rbp-C8h]
  int lpdwDisposition; // [rsp+40h] [rbp-C0h]
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h]
  DWORD pSessionId; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v23; // [rsp+74h] [rbp-8Ch] BYREF
  HKEY hKey[3]; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Data[2]; // [rsp+90h] [rbp-70h] BYREF
  GUID *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  GUID *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  DWORD *p_pSessionId; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  WCHAR ValueName[40]; // [rsp+F0h] [rbp-10h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      v21 = gDwmInitTelemetryActivityId.Data4[7];
      v20 = gDwmInitTelemetryActivityId.Data4[6];
      v19 = gDwmInitTelemetryActivityId.Data4[5];
      v18 = gDwmInitTelemetryActivityId.Data4[4];
      v17 = gDwmInitTelemetryActivityId.Data4[3];
      lpdwDisposition = gDwmInitTelemetryActivityId.Data4[2];
      phkResult = gDwmInitTelemetryActivityId.Data4[1];
      lpSecurityAttributes = gDwmInitTelemetryActivityId.Data4[0];
      samDesired = gDwmInitTelemetryActivityId.Data3;
      dwOptionsa = gDwmInitTelemetryActivityId.Data2;
      if ( (int)StringCchPrintfW(
                  (wchar_t *)Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  dwOptionsa,
                  samDesired,
                  lpSecurityAttributes,
                  phkResult,
                  lpdwDisposition,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21) >= 0 )
      {
        hKey[0] = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\DWM",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                hKey,
                0LL) )
        {
          pSessionId = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = pSessionId;
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(hKey[0], 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(hKey[0]);
        }
      }
      v8 = *((_OWORD *)off_180014008 - 1);
      xmmword_180014028 = 0LL;
      *(_OWORD *)hKey = v8;
      if ( !EventRegister((LPCGUID)hKey, (PENABLECALLBACK)tlgEnableCallback, &dword_180014000, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_180014008, *(unsigned __int16 *)off_180014008);
      if ( (unsigned int)dword_180014000 > 5
        && (qword_180014010 & 0x400000000000LL) != 0
        && (qword_180014018 & 0x400000000000LL) == qword_180014018 )
      {
        v37 = 0;
        v34 = 0;
        v31 = 0;
        v28 = 0;
        v23 = gSessionId;
        LOWORD(pSessionId) = gBootId;
        v35 = &v23;
        p_pSessionId = &pSessionId;
        v29 = &gDwmInitTargetAppSessionGuid;
        v30 = 16;
        v27 = 16;
        v36 = 2;
        v33 = 2;
        v26 = &gDwmInitTelemetryActivityId;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_180014000,
          (unsigned __int8 *)dword_180010DC5,
          0LL,
          0LL,
          6u,
          Data);
      }
    }
  }
  else
  {
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_180014000 = 0;
    EventUnregister(v9);
  }
  return 1;
}
