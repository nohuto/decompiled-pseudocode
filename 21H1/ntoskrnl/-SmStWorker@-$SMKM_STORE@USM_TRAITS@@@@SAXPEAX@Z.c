/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403223E0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140203230 (IoSetThreadHardErrorMode.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14023D6E8 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14023EA30 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14023EC48 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14023ECE0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D2268 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x14030A170 (SmSetThreadPagePriority.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14031FB9C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x140321048 (MmSetHardFaultBehavior.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405973A0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  int v4; // edi
  struct _KTHREAD *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r12
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 *v21; // r15
  NTSTATUS v22; // eax
  NTSTATUS v23; // ecx
  __int64 v24; // rax
  struct _KTHREAD *v25; // rdi
  unsigned int v26; // edx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v38; // rdi
  unsigned int v39; // edx
  unsigned __int8 v40; // r15
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 result; // rax
  _DWORD v50[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v54; // [rsp+C0h] [rbp+48h] BYREF
  int v55; // [rsp+C8h] [rbp+50h]
  int v56; // [rsp+D0h] [rbp+58h]
  int v57; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)a1;
  v50[0] = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread(CurrentThread);
  v4 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL, v6) )
    {
      --v5->SpecialApcDisable;
      LOBYTE(v5[1].Queue) |= 4u;
      v3 = 1;
      v4 = 0;
    }
    else
    {
      v4 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *(_DWORD *)(a1 + 32) = v4;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v4 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v7 = v1 + 6600;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v7 & -(__int64)(*(_QWORD *)v7 != 0LL)),
                0LL);
        v54 = v22;
        v23 = v22;
        if ( v22 >= 2 )
          break;
LABEL_35:
        if ( v23 )
        {
          if ( v23 == 1 )
            goto LABEL_86;
LABEL_33:
          v7 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v24 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v50);
          v7 = v1 + 6600;
          v21 = (__int128 *)v24;
          if ( v24 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v7);
              LOBYTE(v8) = *(_BYTE *)(v1 + 6021);
              if ( (v8 & 1) == 0 || v50[0] )
              {
                if ( (v8 & 2) != 0 && (*(_DWORD *)v21 & 7) == 0 )
                {
                  v54 = -1073741058;
LABEL_10:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 6024);
                    v56 = 0;
                    v9 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
                    else
                      SessionId = -1;
                    --v9->SpecialApcDisable;
                    v11 = ++v9->AbAllocationRegionCount;
                    v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
                      v50[2] = v14;
                      if ( v13 )
                        break;
                      v15 = (__int64)&v9->LockEntries[v14];
                      v12 &= ~(1 << v14);
                      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
                        && (*(_DWORD *)(v15 + 32) & 1) == 0
                        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v15 + 40) == SessionId )
                      {
                        *(_BYTE *)(v15 + 26) &= ~1u;
                        if ( *(_QWORD *)(v15 + 32) )
                        {
                          if ( v15 )
                          {
                            *(_BYTE *)(v15 + 32) |= 2u;
                            if ( *(__int64 *)(v15 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
                            v56 = 0;
                            v56 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
                            *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v15 + 25) &= ~1u;
                            *(_QWORD *)(v15 + 32) = 0LL;
                            v16 = (signed __int64)(v15 - (unsigned __int64)v9->LockEntries) / 96;
                            if ( v11 == 1 )
                              v9->AbEntrySummary |= 1 << v16;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
                            goto LABEL_27;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v9, v1 + 6024, SessionId, 0LL);
LABEL_27:
                    --v9->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v9);
                    v13 = v9->SpecialApcDisable++ == -1;
                    if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
                      KiCheckForKernelApcDelivery(v18, v17, v19, v20);
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v8, v1, v21, (unsigned int *)&v54);
                  goto LABEL_32;
                }
                v54 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v21);
                if ( v54 != 259 )
                  goto LABEL_10;
              }
              else
              {
                v54 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v21);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6024);
                v57 = 0;
                v25 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v26 = MmGetSessionIdEx(v25->ApcState.Process);
                else
                  v26 = -1;
                --v25->SpecialApcDisable;
                v27 = ++v25->AbAllocationRegionCount;
                v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v13 = !_BitScanReverse((unsigned int *)&v29, v28);
                  v50[3] = v29;
                  if ( v13 )
                    break;
                  v30 = (__int64)&v25->LockEntries[v29];
                  v28 &= ~(1 << v29);
                  if ( (*(_BYTE *)(v30 + 26) & 1) != 0
                    && (*(_DWORD *)(v30 + 32) & 1) == 0
                    && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v30 + 40) == v26 )
                  {
                    *(_BYTE *)(v30 + 26) &= ~1u;
                    if ( *(_QWORD *)(v30 + 32) )
                    {
                      if ( v30 )
                      {
                        *(_BYTE *)(v30 + 32) |= 2u;
                        if ( *(__int64 *)(v30 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
                        v57 = 0;
                        v57 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
                        *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v30 + 25) &= ~1u;
                        *(_QWORD *)(v30 + 32) = 0LL;
                        v31 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
                        if ( v27 == 1 )
                          v25->AbEntrySummary |= 1 << v31;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
                        goto LABEL_57;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v25, v1 + 6024, v26, 0LL);
LABEL_57:
                --v25->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v25);
                v13 = v25->SpecialApcDisable++ == -1;
                if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
                  KiCheckForKernelApcDelivery(v33, v32, v34, v35);
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_32:
              v21 = (__int128 *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v50);
              if ( !v21 )
                goto LABEL_33;
            }
          }
        }
      }
      v7 = v1 + 6600;
      if ( v22 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v7);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        LOBYTE(v36) = 1;
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v36);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 6024);
          v55 = 0;
          v38 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v39 = MmGetSessionIdEx(v38->ApcState.Process);
          else
            v39 = -1;
          --v38->SpecialApcDisable;
          v40 = ++v38->AbAllocationRegionCount;
          v41 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v13 = !_BitScanReverse((unsigned int *)&v42, v41);
            v50[1] = v42;
            if ( v13 )
              break;
            v43 = (__int64)&v38->LockEntries[v42];
            v41 &= ~(1 << v42);
            if ( (*(_BYTE *)(v43 + 26) & 1) != 0
              && (*(_DWORD *)(v43 + 32) & 1) == 0
              && (*(_QWORD *)(v43 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v43 + 40) == v39 )
            {
              *(_BYTE *)(v43 + 26) &= ~1u;
              if ( *(_QWORD *)(v43 + 32) )
              {
                if ( v43 )
                {
                  *(_BYTE *)(v43 + 32) |= 2u;
                  if ( *(__int64 *)(v43 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v43);
                  v55 = 0;
                  v55 = *(_DWORD *)(v43 + 88) & 0x1FFFF;
                  *(_DWORD *)(v43 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v43 + 25) &= ~1u;
                  *(_QWORD *)(v43 + 32) = 0LL;
                  v44 = (signed __int64)(v43 - (unsigned __int64)v38->LockEntries) / 96;
                  if ( v40 == 1 )
                    v38->AbEntrySummary |= 1 << v44;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v44);
                  goto LABEL_80;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v38, v1 + 6024, v39, 0LL);
LABEL_80:
          --v38->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v38);
          v13 = v38->SpecialApcDisable++ == -1;
          if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
            KiCheckForKernelApcDelivery(v46, v45, v47, v48);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v23 = 0;
        goto LABEL_35;
      }
    }
  }
LABEL_86:
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
