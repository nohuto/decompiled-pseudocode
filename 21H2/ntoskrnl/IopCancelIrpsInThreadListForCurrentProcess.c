/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x1407E65A0
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140559124 (IopRevokeFileObjectForProcess.c)
 *     IopCancelIoFile @ 0x1406CF67C (IopCancelIoFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x1403689A4 (IopCancelApcRequired.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x1406A4C58 (IopCancelIrpsInThreadList.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
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
      v4 |= IopCancelIrpsInThreadList(v8, (__int64)v10);
  }
  return v4;
}
