/*
 * XREFs of MiLockTransitionLeafPage @ 0x140253D18
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x140253830 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140253C28 (MiSetProtectionOnTransitionPte.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiAccessCheck @ 0x14026E080 (MiAccessCheck.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x1402F0360 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiCheckPteForWriteCluster @ 0x140384EF0 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x140527720 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541D84 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x14055A5D0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
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
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( MiInvalidPteConforms(v4) )
      {
        v6 = v5;
        if ( qword_140C4DD40 )
        {
          if ( (v5 & 0x10) != 0 )
            v6 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v6 = v5 & ~qword_140C4DD40;
        }
        v7 = 0x4000000000000LL;
        if ( (*(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v8 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
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
              KeYieldProcessorEx(&v17, v7);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
        }
      }
    }
    else
    {
      *a2 = MiLockPageInline(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
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
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v8 + 8));
  }
  return v8;
}
