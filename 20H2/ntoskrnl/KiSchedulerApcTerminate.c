/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406C8540
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x14031BBA0 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x1406C8578LL);
}
