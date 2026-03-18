/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x14038E608
 * Callers:
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListLock @ 0x140338D00 (MiReleasePageListLock.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiLockStandbyLookasidePage @ 0x14038E94C (MiLockStandbyLookasidePage.c)
 *     MiUnlinkStandbyPage @ 0x14038EB20 (MiUnlinkStandbyPage.c)
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiRepointPteAtExtendedStandby @ 0x1405B3EB4 (MiRepointPteAtExtendedStandby.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v10; // r11
  __int64 v11; // r11
  __int64 v12; // rdx
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // al
  char v17; // al
  int v18; // r8d
  _DWORD *SchedulerAssist; // r9
  char v21; // al
  ULONG_PTR v22; // rcx
  __int64 v23; // r11
  signed __int32 v24; // eax
  __int64 v25; // r11
  __int64 Page; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int16 v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // edx
  bool v34; // zf
  BOOL v37; // [rsp+40h] [rbp-81h]
  int v38; // [rsp+44h] [rbp-7Dh] BYREF
  __int64 v39; // [rsp+48h] [rbp-79h] BYREF
  __int64 v40; // [rsp+50h] [rbp-71h]
  __int64 v41; // [rsp+58h] [rbp-69h]
  __int64 v42; // [rsp+60h] [rbp-61h]
  __int128 v43; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v44[112]; // [rsp+78h] [rbp-49h] BYREF

  v3 = 0;
  v38 = 0;
  memset(v44, 0, 0x68uLL);
  v5 = a2;
  v39 = 0LL;
  v6 = -1LL;
  v40 = -1LL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = -1LL;
  v37 = 0;
  CurrentIrql = 17;
  v42 = -1LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v41 = 88LL * v3 + a1 + 2880;
      if ( *(_QWORD *)(v41 + 16) == 0x3FFFFFFFFFLL )
        goto LABEL_3;
      memset(v44, 0, 0x68uLL);
      if ( CurrentIrql == 17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v6 = v40;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
        }
      }
      v10 = (_QWORD *)v39;
      if ( v39 )
        goto LABEL_34;
      if ( (*(_DWORD *)(a1 + 4) & 0x100) == 0 )
      {
        v11 = *(_QWORD *)(a1 + 16640);
        if ( v11 != a1 + 16640 )
        {
          v10 = *(_QWORD **)(v11 - 8);
          if ( v10 )
            break;
        }
      }
      v39 = 1LL;
LABEL_11:
      v8 = MiLockStandbyLookasidePage(a1, v44, v3);
      if ( v8 != -1 || (v8 = MiLockStandbyOldestPage(a1, v12, v3, &v38), v8 != -1) )
      {
        v7 = 48 * v8 - 0x220000000000LL;
        if ( !MiIsPfnFromSlabAllocation(v7) )
        {
          v5 = a2;
          goto LABEL_14;
        }
        MiReleasePageListLock(v41, (__int64)v44);
        v21 = MiUnlinkPageFromListEx(48 * v8 - 0x220000000000LL, 0);
        v22 = 48 * v8 - 0x220000000000LL;
        if ( (v21 & 3) != 0 )
        {
          MiDiscardTransitionPteEx(v22, 0LL);
        }
        else
        {
          *(_BYTE *)(v7 + 35) &= 0xF8u;
          MiInsertPageInList(v22, 0x800u);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = v40;
LABEL_38:
        --v3;
        goto LABEL_3;
      }
      if ( v38 )
        goto LABEL_38;
LABEL_3:
      v5 = a2;
      if ( ++v3 >= a2 )
        goto LABEL_14;
    }
    v39 = (__int64)v10;
LABEL_34:
    if ( (unsigned __int64)v10 > 1
      && v6 == -1
      && (a3 & 0x2000) == 0
      && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v10, 0) >= 0x100 || *(_QWORD *)(v23 + 16896) >= 0x4000uLL) )
    {
      v43 = 0LL;
      MiInitializePageColorBase(0LL, 0, (__int64)&v43);
      v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 1u);
      Page = MiGetPage(v25, DWORD2(v43) & (unsigned int)v24 | HIDWORD(v43), 0);
      v27 = v39;
      v6 = Page;
      v40 = Page;
      if ( Page == -1 )
        v27 = 1LL;
      v39 = v27;
    }
    goto LABEL_11;
  }
LABEL_14:
  if ( v3 != v5 )
  {
    if ( v6 == -1
      || (*(_BYTE *)(v7 + 34) & 0xC0) != 0x40
      || (unsigned int)MiGetPagePrivilege(v7, 1, 0LL)
      || (v13 = (unsigned __int64 *)(v7 + 16), v28 = *(_QWORD *)(v7 + 16), (v28 & 0x400) == 0)
      && ((v28 & 4) == 0
       || (unsigned int)MiIsPteInStore(a1, *(_QWORD *)(v7 + 16))
       || _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 8LL * (v29 >> 12) + 16736) + 204LL), 0xBu)) )
    {
      MiUnlinkStandbyPage(a1, (unsigned int)v44, v41, v8, a3);
      v13 = (unsigned __int64 *)(v7 + 16);
      v14 = *(_QWORD *)(v7 + 16);
      if ( (v14 & 0x400) != 0 )
        v15 = v14 >> 11;
      else
        v15 = v14 >> 3;
      v37 = (v15 & 1) != 0;
    }
    else
    {
      MiRepointPteAtExtendedStandby(v7, (__int64)&v39);
    }
    v16 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)(v7 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v7 + 34) = v16 & 0xC7;
    *(_BYTE *)(v7 + 35) &= ~0x20u;
    v17 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)v7 = 0LL;
    *(_BYTE *)(v7 + 34) = v17 & 0xF8 | 5;
    *v13 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v13);
    if ( v37 )
      *v13 = MiUpdatePageFileHighInPte(*v13, 4294967293LL);
    if ( v18 )
      v42 = v8;
    else
      MiReturnFreeZeroPage(v7, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = v40;
  }
  if ( v6 != -1 )
    MiReleaseFreshPage(48 * v6 - 0x220000000000LL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v42;
}
