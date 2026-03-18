/*
 * XREFs of xxxActivateDebugger @ 0x1C02492D8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  PETHREAD *v5; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v9[120]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v9, 0, 0x3B8uLL);
  Object = 0LL;
  if ( (a1 & 2) != 0 )
    return 0LL;
  v2 = a1 & 4;
  if ( v2 )
  {
    if ( !PsGetProcessDebugPort(gpepCSRSS) )
      return 0LL;
    v9[8] = PsGetProcessId(gpepCSRSS);
  }
  else
  {
    if ( !gpqForeground )
      return 0LL;
    v5 = *(PETHREAD **)(gpqForeground + 96LL);
    if ( !v5 )
      return 0LL;
    v9[8] = PsGetThreadProcessId(*v5);
    v9[9] = PsGetThreadId(**(PETHREAD **)(gpqForeground + 96LL));
    if ( (int)LockProcessByClientId((void *)v9[8], (PEPROCESS *)&Object) < 0 )
      return 0LL;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( CsrApiPort )
  {
    v9[5] = 0LL;
    v9[0] = 5242920LL;
    LODWORD(v9[6]) = 197635;
    if ( gdwInAtomicOperation )
    {
      v3 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation, v4);
    LpcRequestPort(CsrApiPort, v9);
    EnterCrit(0LL, 1LL);
  }
  return v2 != 0;
}
