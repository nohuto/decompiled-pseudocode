/*
 * XREFs of MiCapturePfnVm @ 0x140365E70
 * Callers:
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x1402D5600 (MiGetTopLevelPfn.c)
 *     MiReferenceOwningSession @ 0x1403205AC (MiReferenceOwningSession.c)
 *     MiCombineCandidate @ 0x140367510 (MiCombineCandidate.c)
 *     MiHashIsCommon @ 0x140367A9C (MiHashIsCommon.c)
 *     MiGetCombineDomain @ 0x140367BDC (MiGetCombineDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     VmCheckPageCombine @ 0x14092B228 (VmCheckPageCombine.c)
 */

char *__fastcall MiCapturePfnVm(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
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
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  int v21; // ecx
  __int64 TopLevelPfn; // rsi
  unsigned __int64 v23; // rdi
  char *AnyMultiplexedVm; // rbp
  unsigned int v25; // eax
  __int64 CombineDomain; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  int v38; // [rsp+70h] [rbp+28h]

  v10 = a6;
  v12 = a7;
  v13 = *a1;
  *a5 = 0LL;
  *v10 = 0LL;
  *v12 = 24;
  if ( (unsigned int)MiHashIsCommon(a1, a4, 0LL) )
  {
    v38 = 1;
    *a8 = qword_140C4E350;
  }
  else
  {
    v38 = 0;
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
  v20 = MiCombineCandidate(v13, a3, a2);
  if ( v20 )
  {
    v21 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *v10 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *v12 = v21;
    if ( v20 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2, 0x8000000000000000uLL, v18, v19);
      v23 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (char *)(v23 + 1664);
      if ( (unsigned int)MiIsStoreProcess(v23) )
        AnyMultiplexedVm = 0LL;
      if ( (*(_DWORD *)(v23 + 2516) & 0x1000) != 0 && !v38 )
        AnyMultiplexedVm = 0LL;
      if ( ObReferenceObjectSafeWithTag(v23) )
        *a5 = v23;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_14;
    }
    if ( !v38 )
      goto LABEL_25;
    if ( v20 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      goto LABEL_14;
    }
    v28 = MiReferenceOwningSession(a2, 0x8000000000000000uLL, v18, v19);
    if ( v28 )
    {
      AnyMultiplexedVm = (char *)(v28[171] + 256LL);
      *a5 = (unsigned __int64)v28;
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
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( AnyMultiplexedVm )
    {
      v25 = v38;
      if ( !v38 )
      {
        CombineDomain = MiGetCombineDomain(v20, AnyMultiplexedVm);
        *a8 = CombineDomain;
        v25 = 0;
      }
      if ( v20 == 1 && *(_QWORD *)(*a5 + 2288) && !(unsigned int)VmCheckPageCombine(*a5, v25) )
        return 0LL;
    }
    return AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v33 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
