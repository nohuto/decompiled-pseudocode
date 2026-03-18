/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x140699F58
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140501F04 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x1406CD700 (NtCancelIoFileEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x1402E4E9C (IopCancelApcRequired.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x1406CD8A8 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread(Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired(NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
