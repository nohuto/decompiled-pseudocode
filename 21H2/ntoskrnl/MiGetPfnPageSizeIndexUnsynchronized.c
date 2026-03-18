/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x140235D34
 * Callers:
 *     MiLegitimatePageForDriversToMap @ 0x14021378C (MiLegitimatePageForDriversToMap.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x14031C5D0 (MiSetProbePagesAhead.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1405AF1CC (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x1405B2968 (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140235E40 (MiGetBaseResidentPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3)
{
  unsigned int PfnPageSizeIndex; // r15d
  int v5; // r14d
  int v6; // esi
  unsigned __int64 v9; // rbp
  __int64 BaseResidentPage; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  PfnPageSizeIndex = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
  {
    v9 = (unsigned __int8)MiLockPageInline(a1);
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v6 = *(unsigned __int8 *)(BaseResidentPage + 34) >> 6;
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  result = PfnPageSizeIndex;
  *a3 = v6;
  *a2 = v5;
  return result;
}
