/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01D4920 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C01D7ED0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0019B80 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C01D62B8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01D6784 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01D698C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  DXGSESSIONDATA *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  struct _UNICODE_STRING *UserRegistryPath; // rax
  const WCHAR *v24; // rdx
  int v25; // eax
  HANDLE v26; // r8
  int v27; // eax
  const struct _UNICODE_STRING *v28; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  HANDLE v32; // r8
  int v33; // eax
  HANDLE v34; // rdx
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int *v39; // [rsp+20h] [rbp-B9h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE v41; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING v43; // [rsp+70h] [rbp-69h] BYREF
  struct _UNICODE_STRING v44; // [rsp+80h] [rbp-59h] BYREF
  __int64 v45; // [rsp+90h] [rbp-49h] BYREF
  int v46; // [rsp+98h] [rbp-41h]
  const WCHAR *v47; // [rsp+A0h] [rbp-39h]
  struct _UNICODE_STRING *v48; // [rsp+A8h] [rbp-31h]
  int v49; // [rsp+B0h] [rbp-29h]
  int *v50; // [rsp+B8h] [rbp-21h]
  int v51; // [rsp+C0h] [rbp-19h]
  __int64 v52; // [rsp+C8h] [rbp-11h]
  int v53; // [rsp+D0h] [rbp-9h]
  __int128 v54; // [rsp+D8h] [rbp-1h]
  __int128 v55; // [rsp+E8h] [rbp+Fh]
  __int64 v56; // [rsp+F8h] [rbp+1Fh]
  int v57; // [rsp+150h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+7Fh] BYREF

  v57 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v44 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  LODWORD(v7) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v44, a4);
  if ( (int)v7 < 0 )
    goto LABEL_12;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v11 )
  {
    v5 = 0LL;
    goto LABEL_38;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
  v16 = SessionDataForSpecifiedSession;
  v5 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
LABEL_38:
    v36 = PsGetCurrentProcessSessionId(v10);
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v36, -1073741811LL);
    v38 = PsGetCurrentProcessSessionId(v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  if ( DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0, v14, v15)->Buffer )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = 863LL;
    UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(v5, 0, v21, v22);
    v24 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
    v43 = *UserRegistryPath;
  }
  else
  {
    if ( DXGSESSIONDATA::GetUserRegistryPath(v16, 0, v19, v20)->Length )
    {
      WdLogSingleEntry1(1LL, 854LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgSessionData->GetUserRegistryPath()->Length == 0",
        854LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30) + 24) = 855LL;
    RtlInitUnicodeString(&v43, L"\\Registry\\Machine\\System");
    v24 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
  }
  RtlInitUnicodeString(&DestinationString, v24);
  v25 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v43, 0LL);
  v7 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry1(2LL, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to open HKey root handle (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v26 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 883LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 883LL, 0LL, 0LL, 0LL, 0LL);
      v26 = Handle;
    }
    v27 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v26, &DestinationString, 0LL);
    v7 = v27;
    if ( v27 >= 0 )
    {
      v32 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry1(1LL, 899LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 899LL, 0LL, 0LL, 0LL, 0LL);
        v32 = KeyHandle;
      }
      v33 = OpenRegistrySubkey(&v41, 0xF003Fu, v32, &v44, 0LL);
      v7 = v33;
      if ( v33 >= 0 )
      {
        v34 = v41;
        if ( !v41 )
        {
          WdLogSingleEntry1(1LL, 915LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 915LL, 0LL, 0LL, 0LL, 0LL);
          v34 = v41;
        }
        v45 = 0LL;
        v46 = 288;
        v47 = L"DpiValue";
        v48 = a4;
        v50 = &v57;
        v49 = 67108868;
        v56 = 0LL;
        v51 = 4;
        v52 = 0LL;
        v53 = 0;
        v54 = 0LL;
        v55 = 0LL;
        v35 = RtlQueryRegistryValuesEx(0x40000000LL, v34, &v45, 0LL, 0LL);
        v7 = v35;
        v5 = v16;
        if ( v35 < 0 )
        {
          WdLogSingleEntry1(2LL, v35);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to read registry values. (Status = 0x%I64x, SubKeyHandle2 = 0x%I64x, QueryTable = 0x%I64x)",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_12;
      }
    }
    WdLogSingleEntry1(4LL, v7);
  }
  v5 = v16;
LABEL_12:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)&a4->Length = v57;
  }
LABEL_14:
  if ( a3 && (int)v7 >= 0 && v5 && DXGSESSIONDATA::GetUserRegistryPath(v5, 0, v8, v9)->Buffer )
  {
    RtlInitUnicodeString(&v43, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v39) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v43, &DestinationString, &v44, v28, (const unsigned __int16 *)v39);
  }
  operator delete[](v44.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v41 )
    ZwClose(v41);
  return (unsigned int)v7;
}
