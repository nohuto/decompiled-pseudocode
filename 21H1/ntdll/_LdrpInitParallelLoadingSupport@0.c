/*
 * XREFs of _LdrpInitParallelLoadingSupport@0 @ 0x4B2DFB52
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 */

int __stdcall LdrpInitParallelLoadingSupport()
{
  dword_4B3A5D04 = (int)&LdrpWorkQueue;
  LdrpWorkQueue = (int)&LdrpWorkQueue;
  dword_4B3A5CC4 = (int)&LdrpRetryQueue;
  LdrpRetryQueue = (int)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
