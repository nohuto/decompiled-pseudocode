/*
 * XREFs of KiSchedulerApcTerminate @ 0x140603230
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x14023C3E0 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x140603268LL);
}
