/*
 * XREFs of WinMain @ 0x1400018F0
 * Callers:
 *     __scrt_common_main_seh @ 0x140002FE0 (__scrt_common_main_seh.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400017F0 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister_EtwEventRegister @ 0x140001B8C (McGenEventRegister_EtwEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001BB8 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002958 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002A48 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     _Init_thread_footer @ 0x1400037D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003838 (_Init_thread_header.c)
 *     IsImmDisableIMEPresent @ 0x1400047FC (IsImmDisableIMEPresent.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int v8; // ebx
  signed int v9; // eax
  HRESULT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  CDwmAppHost *v13; // rcx
  CDwmAppHost *v14; // rcx
  CDwmAppHost *v15; // rcx
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_140015BC8 > *(_DWORD *)(*ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140015BC8, *ThreadLocalStoragePointer, lpCmdLine, nShowCmd);
    if ( dword_140015BC8 == -1 )
    {
      dword_1400152F0 = -2147024348;
      Init_thread_footer(&dword_140015BC8);
    }
  }
  ProcessInformation[0] = 1;
  ModifyTokenPrivileges();
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v18 = 145;
      if ( v8 >= 0 )
        v8 = -2003304445;
      goto LABEL_32;
    }
  }
  SetErrorMode(0xC001u);
  v8 = WerSetFlags(0x20u);
  if ( v8 == -2147467263 )
    v8 = 0;
  if ( v8 < 0 )
  {
    v18 = 161;
    goto LABEL_32;
  }
  v8 = WerSetMaxProcessHoldMilliseconds(5000LL);
  if ( v8 == -2147467263 )
    v8 = 0;
  if ( v8 < 0 )
  {
    v18 = 165;
LABEL_32:
    v16 = v8;
    goto LABEL_33;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v9 = GetLastError();
    v8 = v9;
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0x80070000;
    v18 = 175;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_32;
  }
  v10 = DXGIDeclareAdapterRemovalSupport();
  v8 = v10;
  if ( v10 < 0 )
  {
    v18 = 178;
    goto LABEL_26;
  }
  McGenEventRegister_EtwEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v11,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context);
  McGenEventRegister_EtwEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v12,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context);
  v10 = CheckForDwmGroupSid();
  v8 = v10;
  if ( v10 < 0 )
  {
    v18 = 184;
    goto LABEL_26;
  }
  v10 = CDwmAppHost::Initialize(v13, hInstance);
  v8 = v10;
  if ( v10 < 0 )
  {
    v18 = 186;
    goto LABEL_26;
  }
  v10 = CDwmAppHost::Run(v14);
  v8 = v10;
  if ( v10 < 0 )
  {
    v18 = 188;
LABEL_26:
    v16 = v10;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400152E0, 5LL, v16, v18);
  }
  CDwmAppHost::Shutdown(v15, v8);
  return v8;
}
