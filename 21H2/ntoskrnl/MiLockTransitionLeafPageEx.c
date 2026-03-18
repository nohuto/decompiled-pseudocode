/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x140315D60
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiAccessCheck @ 0x14023EE78 (MiAccessCheck.c)
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiSetProtectionOnTransitionPte @ 0x14032E970 (MiSetProtectionOnTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiCheckPteForWriteCluster @ 0x14045BFE4 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140581640 (MiWalkResetCommitPte.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiMakeTransitionHeatBatch @ 0x1405B7B38 (MiMakeTransitionHeatBatch.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, _BYTE *a2, char a3)
{
  unsigned int v3; // r15d
  ULONG_PTR v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  signed __int8 v14; // al
  unsigned __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      if ( (unsigned __int64)a2 > 1 && ((v7 & 1) != 0 || (v7 & 0x400) != 0) || (v7 & 0x800) == 0 )
        return 0LL;
      if ( (v7 & 1) == 0 && (!v7 || !qword_140C50780 || (qword_140C50780 & v7) != 0) )
      {
        v10 = v7;
        if ( qword_140C50780 )
        {
          if ( (v7 & 0x10) != 0 )
            v10 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v10 = v7 & ~qword_140C50780;
        }
        v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C50840 )
        {
          v12 = 6 * v11;
          if ( _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v13 = 48 * v11 - 0x220000000000LL;
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(v13);
    }
    else
    {
      v14 = _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v14 )
          return 0LL;
      }
      else
      {
        v28 = 0;
        if ( v14 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v28, v12, v8, v9);
            while ( *(__int64 *)(v13 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        }
      }
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v7 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v16 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    LOBYTE(v3) = a2 == (_BYTE *)1;
    v22 = v3 | 2;
    if ( (a3 & 1) == 0 )
      v22 = v3;
    v13 = MiLockSpecialPurposeMemoryCachedPage(v13, v22);
    if ( !v13 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v23 = (unsigned __int8)*a2;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
              v27 = v25->SchedulerAssist;
              v21 = (v26 & v27[5]) == 0;
              v27[5] &= v26;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
        }
        __writecr8(v23);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v7, *(_QWORD *)(v13 + 8));
  }
  return v13;
}
