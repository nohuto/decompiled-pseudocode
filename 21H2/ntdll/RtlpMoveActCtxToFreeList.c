/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800DF9B8
 * Callers:
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpFreeActivationContext @ 0x180082E80 (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DF920 (RtlpEnsureLiveDeadListsInitialized.c)
 */

__int64 __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  unsigned int i; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
    goto LABEL_14;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v6 = g_SxsFreeActivationContexts;
    v7 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v7 + 8) != g_SxsFreeActivationContexts )
    {
      goto LABEL_14;
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v7 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v6 - 8);
  }
  if ( !g_SxsMaxDeadActivationContexts )
  {
    RtlpFreeActivationContext(a1);
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, (__int64)v9, v2);
  }
  v8 = (_QWORD *)(a1 + 8);
  v9 = (_QWORD *)qword_18016D820;
  if ( *(__int64 **)qword_18016D820 != &g_SxsFreeActivationContexts )
LABEL_14:
    __fastfail(3u);
  *v8 = &g_SxsFreeActivationContexts;
  *(_QWORD *)(a1 + 16) = v9;
  *v9 = v8;
  qword_18016D820 = a1 + 8;
  g_SxsCurrentDeadActivationContexts = i + 1;
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, (__int64)v9, v2);
}
