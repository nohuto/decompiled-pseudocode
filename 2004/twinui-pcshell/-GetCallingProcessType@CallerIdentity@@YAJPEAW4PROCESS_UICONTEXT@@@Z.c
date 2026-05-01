/*
 * XREFs of ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x18046A354
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801596C0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x18015CB20 (-AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18046A70C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessType(CallerIdentity *this, enum PROCESS_UICONTEXT *a2)
{
  int CallingProcessHandle; // eax
  int v4; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, 0LL, &hObject);
  v4 = 0;
  if ( CallingProcessHandle < 0 )
    v4 = CallingProcessHandle;
  if ( v4 == -2147417833 )
  {
    CurrentProcess = GetCurrentProcess();
    hObject = CurrentProcess;
    v4 = 0;
  }
  else
  {
    CurrentProcess = hObject;
  }
  if ( v4 >= 0 )
  {
    if ( (unsigned int)GetProcessUIContextInformation(CurrentProcess, &v8) )
    {
      v4 = 0;
      *(_DWORD *)this = v8;
    }
    else
    {
      v4 = -2147024890;
    }
    CloseHandle(hObject);
  }
  return (unsigned int)v4;
}
