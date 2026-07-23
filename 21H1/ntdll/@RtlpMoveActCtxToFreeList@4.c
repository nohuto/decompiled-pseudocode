/*
 * XREFs of @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930
 * Callers:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 * Callees:
 *     _RtlpFreeActivationContext@4 @ 0x4B2A926F (_RtlpFreeActivationContext@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     @RtlpEnsureLiveDeadListsInitialized@0 @ 0x4B33D8B7 (@RtlpEnsureLiveDeadListsInitialized@0.c)
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 */

NTSTATUS __thiscall RtlpMoveActCtxToFreeList(_DWORD *this)
{
  int v2; // edx
  _DWORD *v3; // ecx
  unsigned int i; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = this[2];
  v3 = (_DWORD *)this[3];
  if ( *(_DWORD **)(v2 + 4) != this + 2 || (_DWORD *)*v3 != this + 2 )
    goto LABEL_14;
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v5 = g_SxsFreeActivationContexts;
    v6 = *(_DWORD *)g_SxsFreeActivationContexts;
    if ( *(int **)(g_SxsFreeActivationContexts + 4) != &g_SxsFreeActivationContexts
      || *(_DWORD *)(v6 + 4) != g_SxsFreeActivationContexts )
    {
      goto LABEL_14;
    }
    g_SxsFreeActivationContexts = *(_DWORD *)g_SxsFreeActivationContexts;
    *(_DWORD *)(v6 + 4) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v5 - 8);
  }
  if ( !g_SxsMaxDeadActivationContexts )
  {
    RtlpFreeActivationContext((int)this);
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  v7 = this + 2;
  v8 = (_DWORD *)dword_4B3A6A08;
  if ( *(int **)dword_4B3A6A08 != &g_SxsFreeActivationContexts )
LABEL_14:
    __fastfail(3u);
  *v7 = &g_SxsFreeActivationContexts;
  this[3] = v8;
  *v8 = v7;
  dword_4B3A6A08 = (int)(this + 2);
  g_SxsCurrentDeadActivationContexts = i + 1;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
