/*
 * XREFs of _CreatePseudoDigitizerDevice@12 @ 0x14AF9F
 * Callers:
 *     __InitializeTouchInjectionWorker@12 @ 0x149F23 (__InitializeTouchInjectionWorker@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?_UpdateReportDescriptor@@YGXUtagRECT@@KK@Z @ 0x14AEB2 (-_UpdateReportDescriptor@@YGXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, int a3)
{
  struct DEVICEINFO *DeviceInfo; // ebx
  int v4; // ebx
  unsigned int v5; // eax
  int CurrentProcessWin32Process; // eax
  int v7; // eax
  int v8; // esi
  unsigned int v10; // [esp+0h] [ebp-CCh]
  unsigned int v11; // [esp+4h] [ebp-C8h]
  struct tagRECT v12; // [esp+20h] [ebp-ACh]
  __int64 v13; // [esp+28h] [ebp-A4h]
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-9Ch] BYREF
  int v15; // [esp+38h] [ebp-94h]
  int v16; // [esp+3Ch] [ebp-90h]
  int v17; // [esp+40h] [ebp-8Ch]
  int v18; // [esp+44h] [ebp-88h]
  _DWORD v19[31]; // [esp+48h] [ebp-84h] BYREF

  DeviceInfo = 0;
  v16 = a2;
  v17 = a1;
  v15 = a3;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  if ( (int)CHidInput::GetKernelHandleToRimObj(_gpHidInput, (void **)(a3 + 80)) >= 0 )
  {
    v13 = *(_QWORD *)(RIMGetVirtualDesktopPhysicalSize() + 8);
    v18 = (int)v13 / 1000;
    v4 = SHIDWORD(v13) / 1000;
    v5 = 3937 * (SHIDWORD(v13) / 1000);
    v12 = *(struct tagRECT *)(*_gpDispInfo + 12);
    _UpdateReportDescriptor(v5 / 0x64, 3937 * v18 / 0x64u, v12, v10, v11);
    memset(v19, 0, 0x74u);
    v19[15] = 0;
    v19[0] = &unk_26C168;
    v19[1] = 498;
    *(struct tagRECT *)&v19[17] = v12;
    v19[16] = v17;
    v19[21] = v18;
    v19[22] = v4;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v19[23] = *(_DWORD *)(CurrentProcessWin32Process + 496);
    v19[24] = *(_DWORD *)(CurrentProcessWin32Process + 500);
    v7 = PsGetCurrentProcessWin32Process();
    v8 = v15;
    v19[25] = *(_DWORD *)(v7 + 8) & 0x80000000;
    v19[26] = v16;
    DeviceInfo = 0;
    if ( (int)RIMAddInjectionDeviceOfType(*(_DWORD *)(v15 + 80), &DestinationString, 2, v19, 0, v15 + 84) < 0 )
    {
      ZwClose(*(HANDLE *)(v8 + 80));
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 84) = 0;
    }
    else
    {
      DeviceInfo = CBaseInput::FindDeviceInfo(_gpHidInput, *(void **)(v8 + 84), 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
