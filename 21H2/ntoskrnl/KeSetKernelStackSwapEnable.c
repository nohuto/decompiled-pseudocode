/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1402D0A10
 * Callers:
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x140524494 (KiEpfStart.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140998C60 (ExpSetSwappingKernelApc.c)
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
