/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140338F70
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     KiEpfStart @ 0x14051EDA4 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140994910 (ExpSetSwappingKernelApc.c)
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
