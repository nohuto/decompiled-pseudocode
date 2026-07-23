/*
 * XREFs of MiCapturePfnVm @ 0x1403682B0
 * Callers:
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     MiReferenceOwningSession @ 0x140215E5C (MiReferenceOwningSession.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiHashIsCommon @ 0x140369EDC (MiHashIsCommon.c)
 *     MiGetCombineDomain @ 0x14036A01C (MiGetCombineDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VmCheckPageCombine @ 0x14092E988 (VmCheckPageCombine.c)
 */

char *__fastcall MiCapturePfnVm(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 *a8)
{
  unsigned __int64 *v10; // rdi
  int *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // r13
  unsigned int v18; // r14d
  int v19; // ecx
  __int64 TopLevelPfn; // rsi
  unsigned __int64 v21; // rdi
  char *AnyMultiplexedVm; // rbp
  unsigned int v23; // eax
  __int64 CombineDomain; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  int v36; // [rsp+70h] [rbp+28h]

  v10 = a6;
  v12 = a7;
  v13 = *a1;
  *a5 = 0LL;
  *v10 = 0LL;
  *v12 = 24;
  if ( (unsigned int)MiHashIsCommon(a1, a4, 0LL) )
  {
    v36 = 1;
    *a8 = qword_140C4E590;
  }
  else
  {
    v36 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v14 = (-1LL << (CurrentIrql + 1)) & 4;
    v15 = (unsigned int)v14 | SchedulerAssist[5];
    SchedulerAssist[5] = v15;
  }
  LODWORD(a6) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6, v14, v15, (__int64)SchedulerAssist);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v18 = MiCombineCandidate(v13, a3, a2);
  if ( v18 )
  {
    v19 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *v10 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *v12 = v19;
    if ( v18 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2);
      v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (char *)(v21 + 1664);
      if ( (unsigned int)MiIsStoreProcess(v21) )
        AnyMultiplexedVm = 0LL;
      if ( (*(_DWORD *)(v21 + 2516) & 0x1000) != 0 && !v36 )
        AnyMultiplexedVm = 0LL;
      if ( ObReferenceObjectSafeWithTag(v21) )
        *a5 = v21;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_14;
    }
    if ( !v36 )
      goto LABEL_25;
    if ( v18 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      goto LABEL_14;
    }
    v26 = MiReferenceOwningSession(a2);
    if ( v26 )
    {
      AnyMultiplexedVm = (char *)(*(_QWORD *)(v26 + 1368) + 256LL);
      *a5 = v26;
    }
    else
    {
LABEL_25:
      AnyMultiplexedVm = 0LL;
    }
LABEL_14:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( AnyMultiplexedVm )
    {
      v23 = v36;
      if ( !v36 )
      {
        CombineDomain = MiGetCombineDomain(v18, AnyMultiplexedVm);
        *a8 = CombineDomain;
        v23 = 0;
      }
      if ( v18 == 1 && *(_QWORD *)(*a5 + 2288LL) && !(unsigned int)VmCheckPageCombine(*a5, v23) )
        return 0LL;
    }
    return AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
