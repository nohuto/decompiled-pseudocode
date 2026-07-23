/*
 * XREFs of MiLockTransitionLeafPage @ 0x140224B74
 * Callers:
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140224A84 (MiSetProtectionOnTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiAccessCheck @ 0x14023F6C8 (MiAccessCheck.c)
 *     MiUpdatePrefetchPriority @ 0x14025C700 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiCheckPteForWriteCluster @ 0x140387944 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B34C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x14052CE30 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x14055FCB0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  signed __int8 v9; // al
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v6 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(v4, v5) )
      {
        v7 = v6;
        if ( qword_140C4DF80 )
        {
          if ( (v6 & 0x10) != 0 )
            v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v7 = v6 & ~qword_140C4DF80;
        }
        if ( (*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v8 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned __int64)a2 <= 1 )
    {
      v9 = _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v9 )
          return 0LL;
      }
      else
      {
        v17 = 0;
        if ( v9 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v17);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
        }
      }
    }
    else
    {
      *a2 = MiLockPageInline(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v6 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v11 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v8 + 40) & 0x1000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v6, *(_QWORD *)(v8 + 8));
  }
  return v8;
}
