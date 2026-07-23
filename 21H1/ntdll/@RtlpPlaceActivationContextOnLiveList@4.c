/*
 * XREFs of @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A
 * Callers:
 *     _RtlCreateActivationContext@24 @ 0x4B2E3290 (_RtlCreateActivationContext@24.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     @RtlpEnsureLiveDeadListsInitialized@0 @ 0x4B33D8B7 (@RtlpEnsureLiveDeadListsInitialized@0.c)
 *     @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A (@RtlpPlaceActivationContextOnLiveList@4.c)
 */

NTSTATUS __thiscall RtlpPlaceActivationContextOnLiveList(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // ecx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = this + 2;
  v3 = g_SxsLiveActivationContexts;
  if ( *(int **)(g_SxsLiveActivationContexts + 4) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *v2 = g_SxsLiveActivationContexts;
  this[3] = &g_SxsLiveActivationContexts;
  *(_DWORD *)(v3 + 4) = v2;
  g_SxsLiveActivationContexts = (int)(this + 2);
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
