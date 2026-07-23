/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140251170 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14024E26C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x14024FC68 (MmSetHardFaultBehavior.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14028A270 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14028B5B8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028B7C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmSetThreadPagePriority @ 0x1402925D0 (SmSetThreadPagePriority.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A0118 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059D190 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edi
  struct _KTHREAD *v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r12
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
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
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v39; // rdi
  unsigned int v40; // edx
  unsigned __int8 v41; // r15
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 result; // rax
  _DWORD v51[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v55; // [rsp+C0h] [rbp+48h] BYREF
  int v56; // [rsp+C8h] [rbp+50h]
  int v57; // [rsp+D0h] [rbp+58h]
  int v58; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)a1;
  v51[0] = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6728);
  else
    v5 = *((unsigned int *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v4);
  KeSetActualBasePriorityThread(CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL) )
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
    v8 = v1 + 6600;
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
                (PLARGE_INTEGER)(v8 & -(__int64)(*(_QWORD *)v8 != 0LL)),
                0LL);
        v55 = v24;
        v25 = v24;
        if ( v24 >= 2 )
          break;
LABEL_37:
        if ( v25 )
        {
          if ( v25 == 1 )
            goto LABEL_89;
LABEL_35:
          v8 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v26 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v51);
          v8 = v1 + 6600;
          v23 = (__int128 *)v26;
          if ( v26 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v10) = *(_BYTE *)(v1 + 6021);
              if ( (v10 & 1) == 0 || v51[0] )
              {
                if ( (v10 & 2) != 0 && (*(_DWORD *)v23 & 7) == 0 )
                {
                  v55 = -1073741058;
LABEL_12:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 6024);
                    v57 = 0;
                    v11 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v11->ApcState.Process);
                    else
                      SessionId = -1;
                    --v11->SpecialApcDisable;
                    v13 = ++v11->AbAllocationRegionCount;
                    v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v15 = !_BitScanReverse((unsigned int *)&v16, v14);
                      v51[2] = v16;
                      if ( v15 )
                        break;
                      v17 = (__int64)&v11->LockEntries[v16];
                      v14 &= ~(1 << v16);
                      if ( (*(_BYTE *)(v17 + 26) & 1) != 0
                        && (*(_DWORD *)(v17 + 32) & 1) == 0
                        && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v17 + 40) == SessionId )
                      {
                        *(_BYTE *)(v17 + 26) &= ~1u;
                        if ( *(_QWORD *)(v17 + 32) )
                        {
                          if ( v17 )
                          {
                            *(_BYTE *)(v17 + 32) |= 2u;
                            if ( *(__int64 *)(v17 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
                            v57 = 0;
                            v57 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
                            *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v17 + 25) &= ~1u;
                            *(_QWORD *)(v17 + 32) = 0LL;
                            v18 = (signed __int64)(v17 - (unsigned __int64)v11->LockEntries) / 96;
                            if ( v13 == 1 )
                              v11->AbEntrySummary |= 1 << v18;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v18);
                            goto LABEL_29;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v11, v1 + 6024, SessionId, 0LL);
LABEL_29:
                    --v11->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v11);
                    v15 = v11->SpecialApcDisable++ == -1;
                    if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
                      KiCheckForKernelApcDelivery(v20, v19, v21, v22);
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v10, v1, v23, (unsigned int *)&v55);
                  goto LABEL_34;
                }
                v55 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v23, v9);
                if ( v55 != 259 )
                  goto LABEL_12;
              }
              else
              {
                v55 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v23);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6024);
                v58 = 0;
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
                  v15 = !_BitScanReverse((unsigned int *)&v31, v30);
                  v51[3] = v31;
                  if ( v15 )
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
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
                        v58 = 0;
                        v58 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
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
                v15 = v27->SpecialApcDisable++ == -1;
                if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
                  KiCheckForKernelApcDelivery(v35, v34, v36, v37);
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_34:
              v23 = (__int128 *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v51);
              if ( !v23 )
                goto LABEL_35;
            }
          }
        }
      }
      v8 = v1 + 6600;
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
          v56 = 0;
          v39 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v40 = MmGetSessionIdEx(v39->ApcState.Process);
          else
            v40 = -1;
          --v39->SpecialApcDisable;
          v41 = ++v39->AbAllocationRegionCount;
          v42 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v43, v42);
            v51[1] = v43;
            if ( v15 )
              break;
            v44 = (__int64)&v39->LockEntries[v43];
            v42 &= ~(1 << v43);
            if ( (*(_BYTE *)(v44 + 26) & 1) != 0
              && (*(_DWORD *)(v44 + 32) & 1) == 0
              && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v44 + 40) == v40 )
            {
              *(_BYTE *)(v44 + 26) &= ~1u;
              if ( *(_QWORD *)(v44 + 32) )
              {
                if ( v44 )
                {
                  *(_BYTE *)(v44 + 32) |= 2u;
                  if ( *(__int64 *)(v44 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
                  v56 = 0;
                  v56 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
                  *(_DWORD *)(v44 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v44 + 25) &= ~1u;
                  *(_QWORD *)(v44 + 32) = 0LL;
                  v45 = (signed __int64)(v44 - (unsigned __int64)v39->LockEntries) / 96;
                  if ( v41 == 1 )
                    v39->AbEntrySummary |= 1 << v45;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v45);
                  goto LABEL_83;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v39, v1 + 6024, v40, 0LL);
LABEL_83:
          --v39->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v39);
          v15 = v39->SpecialApcDisable++ == -1;
          if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
            KiCheckForKernelApcDelivery(v47, v46, v48, v49);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v25 = 0;
        goto LABEL_37;
      }
    }
  }
LABEL_89:
  if ( v3 )
    MmSetHardFaultBehavior((__int64)KeGetCurrentThread(), 0);
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
