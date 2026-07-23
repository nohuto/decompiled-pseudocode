/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140330A80 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     IoSetThreadHardErrorMode @ 0x14023DB40 (IoSetThreadHardErrorMode.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140256770 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140257AB8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140257CC8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140257D60 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14025DA54 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14032E09C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x14032F7F8 (MmSetHardFaultBehavior.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     SmSetThreadPagePriority @ 0x1403592A0 (SmSetThreadPagePriority.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059B530 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  int v4; // edi
  struct _KTHREAD *v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *v8; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v10; // r12
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _SLIST_ENTRY *v20; // r15
  NTSTATUS v21; // eax
  NTSTATUS v22; // ecx
  __int64 v23; // rax
  struct _KTHREAD *v24; // rdi
  unsigned int v25; // edx
  unsigned __int8 v26; // r15
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v37; // rdi
  unsigned int v38; // edx
  unsigned __int8 v39; // r15
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 result; // rax
  _DWORD v49[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v53; // [rsp+C0h] [rbp+48h] BYREF
  int v54; // [rsp+C8h] [rbp+50h] BYREF
  int v55; // [rsp+D0h] [rbp+58h] BYREF
  int v56; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v49[0] = 0;
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
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
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
    v6 = v1 + 6600;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v6 & -(__int64)(*(_QWORD *)v6 != 0LL)),
                0LL);
        v53 = v21;
        v22 = v21;
        if ( v21 >= 2 )
          break;
LABEL_35:
        if ( v22 )
        {
          if ( v22 == 1 )
            goto LABEL_86;
LABEL_33:
          v6 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v23 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v49);
          v6 = v1 + 6600;
          v20 = (_SLIST_ENTRY *)v23;
          if ( v23 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v7) = *(_BYTE *)(v1 + 6021);
              if ( (v7 & 1) == 0 || v49[0] )
              {
                if ( (v7 & 2) != 0 && ((__int64)v20->Next & 7) == 0 )
                {
                  v53 = -1073741058;
LABEL_10:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                    v55 = 0;
                    v8 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
                    else
                      SessionId = -1;
                    --v8->SpecialApcDisable;
                    v10 = ++v8->AbAllocationRegionCount;
                    v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
                      v49[2] = v13;
                      if ( v12 )
                        break;
                      v14 = (__int64)&v8->LockEntries[v13];
                      v11 &= ~(1 << v13);
                      if ( (*(_BYTE *)(v14 + 26) & 1) != 0
                        && (*(_DWORD *)(v14 + 32) & 1) == 0
                        && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v14 + 40) == SessionId )
                      {
                        *(_BYTE *)(v14 + 26) &= ~1u;
                        if ( *(_QWORD *)(v14 + 32) )
                        {
                          if ( v14 )
                          {
                            *(_BYTE *)(v14 + 32) |= 2u;
                            if ( *(__int64 *)(v14 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
                            v55 = 0;
                            v55 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
                            *(_DWORD *)(v14 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v14 + 25) &= ~1u;
                            *(_QWORD *)(v14 + 32) = 0LL;
                            v15 = (signed __int64)(v14 - (unsigned __int64)v8->LockEntries) / 96;
                            if ( v10 == 1 )
                              v8->AbEntrySummary |= 1 << v15;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v15);
                            goto LABEL_27;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v1 + 6024, SessionId, 0LL);
LABEL_27:
                    --v8->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v8, v1 + 6024, &v55);
                    v12 = v8->SpecialApcDisable++ == -1;
                    if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
                      KiCheckForKernelApcDelivery(v17, v16, v18, v19);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v7, v1, v20, (unsigned int *)&v53);
                  goto LABEL_32;
                }
                v53 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v20);
                if ( v53 != 259 )
                  goto LABEL_10;
              }
              else
              {
                v53 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v20);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                v56 = 0;
                v24 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v25 = MmGetSessionIdEx((__int64)v24->ApcState.Process);
                else
                  v25 = -1;
                --v24->SpecialApcDisable;
                v26 = ++v24->AbAllocationRegionCount;
                v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v12 = !_BitScanReverse((unsigned int *)&v28, v27);
                  v49[3] = v28;
                  if ( v12 )
                    break;
                  v29 = (__int64)&v24->LockEntries[v28];
                  v27 &= ~(1 << v28);
                  if ( (*(_BYTE *)(v29 + 26) & 1) != 0
                    && (*(_DWORD *)(v29 + 32) & 1) == 0
                    && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v29 + 40) == v25 )
                  {
                    *(_BYTE *)(v29 + 26) &= ~1u;
                    if ( *(_QWORD *)(v29 + 32) )
                    {
                      if ( v29 )
                      {
                        *(_BYTE *)(v29 + 32) |= 2u;
                        if ( *(__int64 *)(v29 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
                        v56 = 0;
                        v56 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
                        *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v29 + 25) &= ~1u;
                        *(_QWORD *)(v29 + 32) = 0LL;
                        v30 = (signed __int64)(v29 - (unsigned __int64)v24->LockEntries) / 96;
                        if ( v26 == 1 )
                          v24->AbEntrySummary |= 1 << v30;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
                        goto LABEL_57;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v24, v1 + 6024, v25, 0LL);
LABEL_57:
                --v24->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v24, v1 + 6024, &v56);
                v12 = v24->SpecialApcDisable++ == -1;
                if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
                  KiCheckForKernelApcDelivery(v32, v31, v33, v34);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
LABEL_32:
              v20 = (_SLIST_ENTRY *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v49);
              if ( !v20 )
                goto LABEL_33;
            }
          }
        }
      }
      v6 = v1 + 6600;
      if ( v21 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        LOBYTE(v35) = 1;
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v35);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          v54 = 0;
          v37 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v38 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
          else
            v38 = -1;
          --v37->SpecialApcDisable;
          v39 = ++v37->AbAllocationRegionCount;
          v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v12 = !_BitScanReverse((unsigned int *)&v41, v40);
            v49[1] = v41;
            if ( v12 )
              break;
            v42 = (__int64)&v37->LockEntries[v41];
            v40 &= ~(1 << v41);
            if ( (*(_BYTE *)(v42 + 26) & 1) != 0
              && (*(_DWORD *)(v42 + 32) & 1) == 0
              && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v42 + 40) == v38 )
            {
              *(_BYTE *)(v42 + 26) &= ~1u;
              if ( *(_QWORD *)(v42 + 32) )
              {
                if ( v42 )
                {
                  *(_BYTE *)(v42 + 32) |= 2u;
                  if ( *(__int64 *)(v42 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v42);
                  v54 = 0;
                  v54 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
                  *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v42 + 25) &= ~1u;
                  *(_QWORD *)(v42 + 32) = 0LL;
                  v43 = (signed __int64)(v42 - (unsigned __int64)v37->LockEntries) / 96;
                  if ( v39 == 1 )
                    v37->AbEntrySummary |= 1 << v43;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v43);
                  goto LABEL_80;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v37, v1 + 6024, v38, 0LL);
LABEL_80:
          --v37->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v37, v1 + 6024, &v54);
          v12 = v37->SpecialApcDisable++ == -1;
          if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
            KiCheckForKernelApcDelivery(v45, v44, v46, v47);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        v22 = 0;
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
