/*
 * XREFs of MiReleaseArbitraryPage @ 0x140369D50
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiCombinePte @ 0x14055CB40 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15, a2, a3, (__int64)SchedulerAssist);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v7 = *(unsigned __int64 **)(a1 + 56);
  v8 = ZeroPte;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !MiPteInShadowRange((unsigned __int64)v7) )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v8 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_4:
    *v7 = v8;
    goto LABEL_5;
  }
  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
    v8 = ZeroPte | 0x8000000000000000uLL;
  *v7 = v8;
  MiWritePteShadow((__int64)v7, v8);
LABEL_5:
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
