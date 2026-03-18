/*
 * XREFs of MiLockTransitionLeafPage @ 0x1402ACD48
 * Callers:
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x1402AC860 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402ACC58 (MiSetProtectionOnTransitionPte.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiAccessCheck @ 0x140311478 (MiAccessCheck.c)
 *     MiUpdatePrefetchPriority @ 0x1403354A0 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiCheckPteForWriteCluster @ 0x140383F84 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1405270D0 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x140559F80 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  signed __int8 v11; // al
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v19; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( MiInvalidPteConforms(v4) )
      {
        v8 = v5;
        if ( qword_140C4DE80 )
        {
          if ( (v5 & 0x10) != 0 )
            v8 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v8 = v5 & ~qword_140C4DE80;
        }
        v9 = 0x4000000000000LL;
        if ( (*(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned __int64)a2 <= 1 )
    {
      v11 = _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v11 )
          return 0LL;
      }
      else
      {
        v19 = 0;
        if ( v11 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v19, v9, v6, v7);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
        }
      }
    }
    else
    {
      *a2 = MiLockPageInline(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0x4000000000000LL, v6);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v13 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v10 + 40) & 0x1000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v10 + 8));
  }
  return v10;
}
