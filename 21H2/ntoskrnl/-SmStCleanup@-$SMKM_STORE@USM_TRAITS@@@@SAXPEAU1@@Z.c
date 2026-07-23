/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14029F430 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1406BF384 (SmProcessCreateRequest.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028B7C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402915F0 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperCleanup @ 0x14029FC14 (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x14029FC64 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029FCBC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  char v3; // al
  _KPROCESS *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v8; // r15
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  char v19; // cl
  void *v20; // rdi
  void *v21; // rcx
  __int64 result; // rax
  PVOID *v23; // rdi
  _OWORD v24[3]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v24, 0, sizeof(v24));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1);
  v3 = *(_BYTE *)(a1 + 6021);
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
      v3 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v3 & 4) != 0 )
    {
      v4 = *(_KPROCESS **)(a1 + 6584);
      if ( v4 )
      {
        KiStackAttachProcess(v4, 0, (__int64)v24);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v23 = *(PVOID **)(a1 + 6568);
        if ( *v23 )
          SC_ENV::Free(*v23);
        ExFreePoolWithTag(v23, 0);
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
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx(v6->ApcState.Process);
    else
      SessionId = -1;
    --v6->SpecialApcDisable;
    v8 = ++v6->AbAllocationRegionCount;
    v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v11, v9);
      if ( v10 )
        break;
      v12 = (__int64)&v6->LockEntries[v11];
      v9 &= ~(1 << v11);
      if ( (*(_BYTE *)(v12 + 26) & 1) != 0
        && (*(_DWORD *)(v12 + 32) & 1) == 0
        && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v12 + 40) == SessionId )
      {
        *(_BYTE *)(v12 + 26) &= ~1u;
        if ( *(_QWORD *)(v12 + 32) )
        {
          if ( v12 )
          {
            *(_BYTE *)(v12 + 32) |= 2u;
            if ( *(__int64 *)(v12 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
            *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v12 + 25) &= ~1u;
            *(_QWORD *)(v12 + 32) = 0LL;
            v13 = (signed __int64)(v12 - (unsigned __int64)v6->LockEntries) / 96;
            if ( v8 == 1 )
              v6->AbEntrySummary |= 1 << v13;
            else
              _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v13);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v6->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v6);
    v10 = v6->SpecialApcDisable++ == -1;
    if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery(v15, v14, v16, v17);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v18 = *(_BYTE *)(a1 + 6021);
  if ( (v18 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess(v24, 0LL);
    v18 = *(_BYTE *)(a1 + 6021);
  }
  v19 = *(_BYTE *)(a1 + 6020);
  if ( v19 )
  {
    if ( v19 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v20 = *(void **)(a1 + 6216);
    if ( (v18 & 4) != 0 )
    {
      v21 = *(void **)(a1 + 6224);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
