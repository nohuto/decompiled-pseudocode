/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x14050675C
 * Callers:
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 *     IopGetSessionIdFromPDO @ 0x14073E25C (IopGetSessionIdFromPDO.c)
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
