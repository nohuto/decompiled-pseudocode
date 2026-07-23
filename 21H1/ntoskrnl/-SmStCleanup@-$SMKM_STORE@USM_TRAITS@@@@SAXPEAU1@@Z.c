/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1402D1580 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140654FB0 (SmProcessCreateRequest.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14023EC48 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     SmAcquireReleaseCharges @ 0x1402C3C54 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402C8FD8 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperCleanup @ 0x1402D1D64 (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x1402D1DB4 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D1E0C (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x1409269D0 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  _DWORD *v3; // r9
  char v4; // al
  _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r15
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  _DWORD *v23; // r9
  char v24; // al
  char v25; // cl
  void *v26; // rdi
  void *v27; // rcx
  __int64 result; // rax
  PVOID *v29; // rdi
  int v30; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v31[3]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v31, 0, sizeof(v31));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1);
  v4 = *(_BYTE *)(a1 + 6021);
  if ( (v4 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
      v4 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 = *(_KPROCESS **)(a1 + 6584);
      if ( v5 )
      {
        KiStackAttachProcess(v5, 0LL, (__int64)v31, v3);
        v4 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v4 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v29 = *(PVOID **)(a1 + 6568);
        if ( *v29 )
          SC_ENV::Free(*v29);
        ExFreePoolWithTag(v29, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 6024);
    v30 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount;
    v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      if ( v14 )
        break;
      v16 = (__int64)&v10->LockEntries[v15];
      v13 &= ~(1 << v15);
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v16 + 40) == SessionId )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
        {
          if ( v16 )
          {
            *(_BYTE *)(v16 + 32) |= 2u;
            if ( *(__int64 *)(v16 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16);
            v30 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
            *(_DWORD *)(v16 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v16 + 25) &= ~1u;
            *(_QWORD *)(v16 + 32) = 0LL;
            v17 = (signed __int64)(v16 - (unsigned __int64)v10->LockEntries) / 96;
            if ( v12 == 1 )
              v10->AbEntrySummary |= 1 << v17;
            else
              _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v17);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v10, a1 + 6024, &v30);
    v14 = v10->SpecialApcDisable++ == -1;
    if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v19);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v18, v20, v21);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  v24 = *(_BYTE *)(a1 + 6021);
  if ( (v24 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess((__int64)v31, 0LL, v22, v23);
    v24 = *(_BYTE *)(a1 + 6021);
  }
  v25 = *(_BYTE *)(a1 + 6020);
  if ( v25 )
  {
    if ( v25 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v26 = *(void **)(a1 + 6216);
    if ( (v24 & 4) != 0 )
    {
      v27 = *(void **)(a1 + 6224);
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
