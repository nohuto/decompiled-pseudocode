/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1402F8AA0
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     KiEpfStart @ 0x14057B194 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140A516C0 (ExpSetSwappingKernelApc.c)
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
