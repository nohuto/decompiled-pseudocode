/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x1800DFD34
 * Callers:
 *     RtlCreateActivationContext @ 0x180072E60 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DFB70 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpPlaceActivationContextOnLiveList(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = (_QWORD *)(a1 + 8);
  v3 = g_SxsLiveActivationContexts;
  if ( *(__int64 **)(g_SxsLiveActivationContexts + 8) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *v2 = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 16) = &g_SxsLiveActivationContexts;
  *(_QWORD *)(v3 + 8) = v2;
  g_SxsLiveActivationContexts = a1 + 8;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
