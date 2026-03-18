/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x14050130C
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     IopGetSessionIdFromPDO @ 0x14072C884 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v4; // ebx
  __int64 ThreadServerSilo; // rax
  _DWORD **v6; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( SessionId != -1 )
    v4 = SessionId;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  if ( ThreadServerSilo )
    v6 = *(_DWORD ***)(ThreadServerSilo + 1272);
  else
    v6 = (_DWORD **)&PspHostSiloGlobals;
  result = 1;
  if ( v4 != *v6[140] || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && v4 != SessionIdFromPDO )
      return 0;
  }
  return result;
}
