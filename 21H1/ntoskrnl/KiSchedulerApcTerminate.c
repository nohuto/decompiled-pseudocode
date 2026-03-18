/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406D28E0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x14030D700 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x1406D2918LL);
}
