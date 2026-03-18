/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1402FBF40
 * Callers:
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x14051E754 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x1409932D0 (ExpSetSwappingKernelApc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return v2;
}
