/*
 * XREFs of MiFinishLastForkPageTable @ 0x14055A8E0
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x14055A378 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x14055AB74 (MiFreeForkMaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  BOOL v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // rsi
  unsigned __int64 ValidPte; // rbx
  int v12; // r14d
  bool v13; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v5 = 1;
  v6 = 48 * a2 - 0x58000000000LL;
  v7 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
  v8 = (__int64)(v7 << 25) >> 16 << 25 >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL )
    v5 = v8 > 0xFFFFF6FFFFFFFFFFuLL;
  v9 = (unsigned __int8)MiLockPageInline(v6, 0xFFFFF68000000000uLL, a3, a4);
  MiRemoveLockedPageChargeAndDecRef(v6);
  if ( v5 )
  {
    if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v6);
      goto LABEL_18;
    }
    v10 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                             + 8 * ((v7 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) & 1) != 0 )
      goto LABEL_16;
    ValidPte = MiMakeValidPte(v7, a2, -2147483644);
    v12 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v10) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v12 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v13 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v13 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v13 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v10 = ValidPte;
    if ( v12 )
      MiWritePteShadow((__int64)v10, ValidPte);
LABEL_16:
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v10, 0x11u, 0x80000000);
  }
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
