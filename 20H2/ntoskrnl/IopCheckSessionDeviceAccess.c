/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x140504BDC
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 *     IopGetSessionIdFromPDO @ 0x14073B300 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // eax
  int v3; // ebx
  __int64 ThreadServerSilo; // rax
  _DWORD **v5; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v5 = (_DWORD **)&PspHostSiloGlobals;
  }
  else
  {
    v5 = *(_DWORD ***)(ThreadServerSilo + 1272);
  }
  result = 1;
  if ( v3 != *v5[141] || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && v3 != SessionIdFromPDO )
      return 0;
  }
  return result;
}
