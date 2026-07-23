/*
 * XREFs of @RtlpEnsureLiveDeadListsInitialized@0 @ 0x4B33D8B7
 * Callers:
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 *     @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A (@RtlpPlaceActivationContextOnLiveList@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     @RtlpEnsureLiveDeadListsInitialized@0 @ 0x4B33D8B7 (@RtlpEnsureLiveDeadListsInitialized@0.c)
 */

NTSTATUS __cdecl RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      dword_4B3A6A10 = (int)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (int)&g_SxsLiveActivationContexts;
      dword_4B3A6A08 = (int)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (int)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
