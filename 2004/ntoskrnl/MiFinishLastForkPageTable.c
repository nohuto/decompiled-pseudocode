/*
 * XREFs of MiFinishLastForkPageTable @ 0x140555200
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140554C98 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x140555494 (MiFreeForkMaps.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  BOOL v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned __int64 *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rbx
  int v17; // r14d
  __int64 v18; // r8
  bool v19; // zf
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
  MiRemoveLockedPageChargeAndDecRef(v6, v10, v11, v12);
  if ( v5 )
  {
    if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v6);
      goto LABEL_18;
    }
    v14 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v13)
                             + 8 * ((v7 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v14) & 1) != 0 )
      goto LABEL_16;
    ValidPte = MiMakeValidPte(v7, a2, 2147483652LL, v15);
    v17 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v19 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v19 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v14 = ValidPte;
    if ( v17 )
      MiWritePteShadow((__int64)v14, ValidPte, v18);
LABEL_16:
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v14, 0x11u, 0x80000000);
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
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
