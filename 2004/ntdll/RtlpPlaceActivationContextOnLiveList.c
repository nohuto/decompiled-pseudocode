/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x1800DF994
 * Callers:
 *     RtlCreateActivationContext @ 0x180072D60 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DF7D0 (RtlpEnsureLiveDeadListsInitialized.c)
 */

__int64 __fastcall RtlpPlaceActivationContextOnLiveList(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  v3 = (_QWORD *)(a1 + 8);
  v4 = g_SxsLiveActivationContexts;
  if ( *(__int64 **)(g_SxsLiveActivationContexts + 8) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *v3 = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 16) = &g_SxsLiveActivationContexts;
  *(_QWORD *)(v4 + 8) = v3;
  g_SxsLiveActivationContexts = a1 + 8;
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, (__int64)&g_SxsLiveActivationContexts, v2);
}
