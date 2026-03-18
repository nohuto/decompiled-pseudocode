/*
 * XREFs of MiFinishLastForkPageTable @ 0x140554BB0
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140554648 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x140554E44 (MiFreeForkMaps.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  BOOL v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // r9
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rbx
  int v15; // r14d
  bool v16; // zf
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
    v11 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v10)
                             + 8 * ((v7 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v11) & 1) != 0 )
      goto LABEL_16;
    ValidPte = MiMakeValidPte(v7, a2, 2147483652LL, v13);
    v15 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v16 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v16 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v16 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v11 = ValidPte;
    if ( v15 )
      MiWritePteShadow((__int64)v11, ValidPte);
LABEL_16:
    LOBYTE(v12) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v11, v12, 0x80000000);
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
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
