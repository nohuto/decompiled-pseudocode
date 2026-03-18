/*
 * XREFs of MiReleaseArbitraryPage @ 0x1402233C0
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCombinePte @ 0x1405B5BA0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  v4 = *(unsigned __int64 **)(a1 + 56);
  v5 = ZeroPte;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !(unsigned int)MiPteInShadowRange(v4) )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v7, v6) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v5 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_4:
    *v4 = v5;
    goto LABEL_5;
  }
  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
    v5 = ZeroPte | 0x8000000000000000uLL;
  *v4 = v5;
  MiWritePteShadow(v4, v5);
LABEL_5:
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
