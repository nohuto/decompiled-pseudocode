/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14035FCF0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x1402D0518 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402D1860 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D1A78 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402D1B10 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403027A8 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x140304620 (SmSetThreadPagePriority.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14035D64C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x14035EB08 (MmSetHardFaultBehavior.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140597A90 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // edi
  struct _KTHREAD *v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r12
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 *v22; // r15
  NTSTATUS v23; // eax
  NTSTATUS v24; // ecx
  __int64 v25; // rax
  struct _KTHREAD *v26; // rdi
  unsigned int v27; // edx
  unsigned __int8 v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v36; // rdi
  unsigned int v37; // edx
  unsigned __int8 v38; // r15
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 result; // rax
  _DWORD v45[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v49; // [rsp+C0h] [rbp+48h] BYREF
  int v50; // [rsp+C8h] [rbp+50h] BYREF
  int v51; // [rsp+D0h] [rbp+58h] BYREF
  int v52; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v45[0] = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v6 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v6 == 4 )
    v7 = *(unsigned int *)(v1 + 6728);
  else
    v7 = *((unsigned int *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v6);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v7, v4, v5);
  v8 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v9 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL, v10) )
    {
      --v9->SpecialApcDisable;
      LOBYTE(v9[1].Queue) |= 4u;
      v3 = 1;
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *(_DWORD *)(a1 + 32) = v8;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v8 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v11 = v1 + 6600;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v11 & -(__int64)(*(_QWORD *)v11 != 0LL)),
                0LL);
        v49 = v23;
        v24 = v23;
        if ( v23 >= 2 )
          break;
LABEL_37:
        if ( v24 )
        {
          if ( v24 == 1 )
            goto LABEL_89;
LABEL_35:
          v11 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v25 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
          v11 = v1 + 6600;
          v22 = (__int128 *)v25;
          if ( v25 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v11);
              LOBYTE(v12) = *(_BYTE *)(v1 + 6021);
              if ( (v12 & 1) == 0 || v45[0] )
              {
                if ( (v12 & 2) != 0 && (*(_DWORD *)v22 & 7) == 0 )
                {
                  v49 = -1073741058;
LABEL_12:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                    v51 = 0;
                    v13 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
                    else
                      SessionId = -1;
                    --v13->SpecialApcDisable;
                    v15 = ++v13->AbAllocationRegionCount;
                    v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v17 = !_BitScanReverse((unsigned int *)&v18, v16);
                      v45[2] = v18;
                      if ( v17 )
                        break;
                      v19 = (__int64)&v13->LockEntries[v18];
                      v16 &= ~(1 << v18);
                      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
                        && (*(_DWORD *)(v19 + 32) & 1) == 0
                        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v19 + 40) == SessionId )
                      {
                        *(_BYTE *)(v19 + 26) &= ~1u;
                        if ( *(_QWORD *)(v19 + 32) )
                        {
                          if ( v19 )
                          {
                            *(_BYTE *)(v19 + 32) |= 2u;
                            if ( *(__int64 *)(v19 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
                            v51 = 0;
                            v51 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
                            *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v19 + 25) &= ~1u;
                            *(_QWORD *)(v19 + 32) = 0LL;
                            v20 = (signed __int64)(v19 - (unsigned __int64)v13->LockEntries) / 96;
                            if ( v15 == 1 )
                              v13->AbEntrySummary |= 1 << v20;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
                            goto LABEL_29;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v13, v1 + 6024, SessionId, 0LL);
LABEL_29:
                    --v13->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v13, v1 + 6024, &v51);
                    v17 = v13->SpecialApcDisable++ == -1;
                    if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
                      KiCheckForKernelApcDelivery(v21);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v12, v1, v22, (unsigned int *)&v49);
                  goto LABEL_34;
                }
                v49 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v22);
                if ( v49 != 259 )
                  goto LABEL_12;
              }
              else
              {
                v49 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v22);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                v52 = 0;
                v26 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v27 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
                else
                  v27 = -1;
                --v26->SpecialApcDisable;
                v28 = ++v26->AbAllocationRegionCount;
                v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v17 = !_BitScanReverse((unsigned int *)&v30, v29);
                  v45[3] = v30;
                  if ( v17 )
                    break;
                  v31 = (__int64)&v26->LockEntries[v30];
                  v29 &= ~(1 << v30);
                  if ( (*(_BYTE *)(v31 + 26) & 1) != 0
                    && (*(_DWORD *)(v31 + 32) & 1) == 0
                    && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v31 + 40) == v27 )
                  {
                    *(_BYTE *)(v31 + 26) &= ~1u;
                    if ( *(_QWORD *)(v31 + 32) )
                    {
                      if ( v31 )
                      {
                        *(_BYTE *)(v31 + 32) |= 2u;
                        if ( *(__int64 *)(v31 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
                        v52 = 0;
                        v52 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
                        *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v31 + 25) &= ~1u;
                        *(_QWORD *)(v31 + 32) = 0LL;
                        v32 = (signed __int64)(v31 - (unsigned __int64)v26->LockEntries) / 96;
                        if ( v28 == 1 )
                          v26->AbEntrySummary |= 1 << v32;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
                        goto LABEL_59;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v26, v1 + 6024, v27, 0LL);
LABEL_59:
                --v26->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v26, v1 + 6024, &v52);
                v17 = v26->SpecialApcDisable++ == -1;
                if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
                  KiCheckForKernelApcDelivery(v33);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
LABEL_34:
              v22 = (__int128 *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
              if ( !v22 )
                goto LABEL_35;
            }
          }
        }
      }
      v11 = v1 + 6600;
      if ( v23 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v11);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        LOBYTE(v34) = 1;
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v34);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          v50 = 0;
          v36 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v37 = MmGetSessionIdEx((__int64)v36->ApcState.Process);
          else
            v37 = -1;
          --v36->SpecialApcDisable;
          v38 = ++v36->AbAllocationRegionCount;
          v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v17 = !_BitScanReverse((unsigned int *)&v40, v39);
            v45[1] = v40;
            if ( v17 )
              break;
            v41 = (__int64)&v36->LockEntries[v40];
            v39 &= ~(1 << v40);
            if ( (*(_BYTE *)(v41 + 26) & 1) != 0
              && (*(_DWORD *)(v41 + 32) & 1) == 0
              && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v41 + 40) == v37 )
            {
              *(_BYTE *)(v41 + 26) &= ~1u;
              if ( *(_QWORD *)(v41 + 32) )
              {
                if ( v41 )
                {
                  *(_BYTE *)(v41 + 32) |= 2u;
                  if ( *(__int64 *)(v41 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41);
                  v50 = 0;
                  v50 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
                  *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v41 + 25) &= ~1u;
                  *(_QWORD *)(v41 + 32) = 0LL;
                  v42 = (signed __int64)(v41 - (unsigned __int64)v36->LockEntries) / 96;
                  if ( v38 == 1 )
                    v36->AbEntrySummary |= 1 << v42;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v42);
                  goto LABEL_83;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v36, v1 + 6024, v37, 0LL);
LABEL_83:
          --v36->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v36, v1 + 6024, &v50);
          v17 = v36->SpecialApcDisable++ == -1;
          if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
            KiCheckForKernelApcDelivery(v43);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        v24 = 0;
        goto LABEL_37;
      }
    }
  }
LABEL_89:
  if ( v3 )
    MmSetHardFaultBehavior(KeGetCurrentThread(), 0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6732);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
