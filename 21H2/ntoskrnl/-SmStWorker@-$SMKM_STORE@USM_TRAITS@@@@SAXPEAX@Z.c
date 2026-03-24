/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D2BF0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     IoSetThreadHardErrorMode @ 0x140250300 (IoSetThreadHardErrorMode.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1402CFEEC (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x1402D1848 (MmSetHardFaultBehavior.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x1402D8F20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402DA268 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402DA478 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402DA510 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmSetThreadPagePriority @ 0x1402E1280 (SmSetThreadPagePriority.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035B378 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059CF60 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // rax
  int v5; // edx
  int v6; // edi
  struct _KTHREAD *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r12
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 *v23; // r15
  NTSTATUS v24; // eax
  NTSTATUS v25; // ecx
  __int64 v26; // rax
  struct _KTHREAD *v27; // rdi
  unsigned int v28; // edx
  unsigned __int8 v29; // r15
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 UnbiasedInterruptTime; // rax
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
  int v50; // [rsp+C8h] [rbp+50h]
  int v51; // [rsp+D0h] [rbp+58h]
  int v52; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)a1;
  v45[0] = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(_DWORD *)(v1 + 6728);
  else
    v5 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v4);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL, v8) )
    {
      --v7->SpecialApcDisable;
      LOBYTE(v7[1].Queue) |= 4u;
      v3 = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *(_DWORD *)(a1 + 32) = v6;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v6 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v11 = v1 + 6600;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v11 & -(__int64)(*(_QWORD *)v11 != 0LL)),
                0LL);
        v49 = v24;
        v25 = v24;
        if ( v24 >= 2 )
          break;
LABEL_37:
        if ( v25 )
        {
          if ( v25 == 1 )
            goto LABEL_89;
LABEL_35:
          v11 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v26 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
          v11 = v1 + 6600;
          v23 = (__int128 *)v26;
          if ( v26 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v13) = *(_BYTE *)(v1 + 6021);
              if ( (v13 & 1) == 0 || v45[0] )
              {
                if ( (v13 & 2) != 0 && (*(_DWORD *)v23 & 7) == 0 )
                {
                  v49 = -1073741058;
LABEL_12:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 6024);
                    v51 = 0;
                    v14 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v14->ApcState.Process);
                    else
                      SessionId = -1;
                    --v14->SpecialApcDisable;
                    v16 = ++v14->AbAllocationRegionCount;
                    v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v18 = !_BitScanReverse((unsigned int *)&v19, v17);
                      v45[2] = v19;
                      if ( v18 )
                        break;
                      v20 = (__int64)&v14->LockEntries[v19];
                      v17 &= ~(1 << v19);
                      if ( (*(_BYTE *)(v20 + 26) & 1) != 0
                        && (*(_DWORD *)(v20 + 32) & 1) == 0
                        && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v20 + 40) == SessionId )
                      {
                        *(_BYTE *)(v20 + 26) &= ~1u;
                        if ( *(_QWORD *)(v20 + 32) )
                        {
                          if ( v20 )
                          {
                            *(_BYTE *)(v20 + 32) |= 2u;
                            if ( *(__int64 *)(v20 + 32) < 0 )
                              KiAbEntryRemoveFromTree(v20);
                            v51 = 0;
                            v51 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
                            *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v20 + 25) &= ~1u;
                            *(_QWORD *)(v20 + 32) = 0LL;
                            v21 = (signed __int64)(v20 - (unsigned __int64)v14->LockEntries) / 96;
                            if ( v16 == 1 )
                              v14->AbEntrySummary |= 1 << v21;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
                            goto LABEL_29;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v1 + 6024, SessionId, 0LL);
LABEL_29:
                    --v14->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v14);
                    v18 = v14->SpecialApcDisable++ == -1;
                    if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
                      KiCheckForKernelApcDelivery(v22);
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v13, v1, v23, (unsigned int *)&v49);
                  goto LABEL_34;
                }
                v49 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v23, v12);
                if ( v49 != 259 )
                  goto LABEL_12;
              }
              else
              {
                v49 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v23);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6024);
                v52 = 0;
                v27 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v28 = MmGetSessionIdEx(v27->ApcState.Process);
                else
                  v28 = -1;
                --v27->SpecialApcDisable;
                v29 = ++v27->AbAllocationRegionCount;
                v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v18 = !_BitScanReverse((unsigned int *)&v31, v30);
                  v45[3] = v31;
                  if ( v18 )
                    break;
                  v32 = (__int64)&v27->LockEntries[v31];
                  v30 &= ~(1 << v31);
                  if ( (*(_BYTE *)(v32 + 26) & 1) != 0
                    && (*(_DWORD *)(v32 + 32) & 1) == 0
                    && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v32 + 40) == v28 )
                  {
                    *(_BYTE *)(v32 + 26) &= ~1u;
                    if ( *(_QWORD *)(v32 + 32) )
                    {
                      if ( v32 )
                      {
                        *(_BYTE *)(v32 + 32) |= 2u;
                        if ( *(__int64 *)(v32 + 32) < 0 )
                          KiAbEntryRemoveFromTree(v32);
                        v52 = 0;
                        v52 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
                        *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v32 + 25) &= ~1u;
                        *(_QWORD *)(v32 + 32) = 0LL;
                        v33 = (signed __int64)(v32 - (unsigned __int64)v27->LockEntries) / 96;
                        if ( v29 == 1 )
                          v27->AbEntrySummary |= 1 << v33;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v33);
                        goto LABEL_59;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v27, v1 + 6024, v28, 0LL);
LABEL_59:
                --v27->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v27);
                v18 = v27->SpecialApcDisable++ == -1;
                if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
                  KiCheckForKernelApcDelivery(v34);
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_34:
              v23 = (__int128 *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v45);
              if ( !v23 )
                goto LABEL_35;
            }
          }
        }
      }
      v11 = v1 + 6600;
      if ( v24 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 6024);
          v50 = 0;
          v36 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v37 = MmGetSessionIdEx(v36->ApcState.Process);
          else
            v37 = -1;
          --v36->SpecialApcDisable;
          v38 = ++v36->AbAllocationRegionCount;
          v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v18 = !_BitScanReverse((unsigned int *)&v40, v39);
            v45[1] = v40;
            if ( v18 )
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
                    KiAbEntryRemoveFromTree(v41);
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
          KiAbThreadRemoveBoosts((ULONG_PTR)v36);
          v18 = v36->SpecialApcDisable++ == -1;
          if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
            KiCheckForKernelApcDelivery(v43);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v25 = 0;
        goto LABEL_37;
      }
    }
  }
LABEL_89:
  if ( v3 )
    MmSetHardFaultBehavior((__int64)KeGetCurrentThread(), 0, v9, v10);
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
