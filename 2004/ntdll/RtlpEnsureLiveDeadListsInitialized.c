/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800DF7D0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800DF868 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DF994 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_18016B7F0 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_18016B7E0 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v0, v1);
  }
  return result;
}
