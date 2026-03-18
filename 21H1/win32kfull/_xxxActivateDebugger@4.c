/*
 * XREFs of _xxxActivateDebugger@4 @ 0x1A606B
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall xxxActivateDebugger(char a1)
{
  int v2; // ebx
  PETHREAD *v3; // eax
  int ProcessDebugPort; // esi
  PVOID Object; // [esp+Ch] [ebp-1F4h] BYREF
  _DWORD v7[123]; // [esp+10h] [ebp-1F0h] BYREF

  memset(v7, 0, 0x1E8u);
  Object = 0;
  if ( (a1 & 2) != 0 )
    return 0;
  v2 = a1 & 4;
  if ( v2 )
  {
    if ( !PsGetProcessDebugPort(_gpepCSRSS) )
      return 0;
    v7[10] = PsGetProcessId((PEPROCESS)_gpepCSRSS);
  }
  else
  {
    if ( !_gpqForeground )
      return 0;
    v3 = *(PETHREAD **)(_gpqForeground + 52);
    if ( !v3 )
      return 0;
    v7[10] = PsGetThreadProcessId(*v3);
    v7[11] = PsGetThreadId(**(PETHREAD **)(_gpqForeground + 52));
    if ( LockProcessByClientId((HANDLE)v7[10], (PEPROCESS *)&Object) < 0 )
      return 0;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0;
  }
  if ( _CsrApiPort )
  {
    v7[0] = 3407896;
    v7[1] = 0;
    v7[6] = 0;
    v7[7] = 197635;
    if ( _gdwInAtomicOperation )
    {
      if ( (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    }
    UserSessionSwitchLeaveCrit();
    LpcRequestPort(_CsrApiPort, v7);
    EnterCrit(0, 1);
  }
  return v2 != 0;
}
