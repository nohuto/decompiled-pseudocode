/*
 * XREFs of _LockThreadByClientId@8 @ 0x1A8D2
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YGJKKKK@Z @ 0x1A838 (-xxxUserNotifyProcessCreate@@YGJKKKK@Z.c)
 *     ?GetConsoleHostProcess@@YGJKPAPAX@Z @ 0x154885 (-GetConsoleHostProcess@@YGJKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LockThreadByClientId(HANDLE ThreadId, PETHREAD *Thread)
{
  NTSTATUS v3; // edi

  v3 = PsLookupThreadByThreadId(ThreadId, Thread);
  if ( v3 < 0 || PsGetThreadSessionId(*Thread) == _gSessionId )
    return v3;
  ObfDereferenceObject(*Thread);
  return -1073741823;
}
