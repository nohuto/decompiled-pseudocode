/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406F54B0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x14034ABE0 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x1406F54E8LL);
}
