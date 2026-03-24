/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AA5C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14035A690 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140710D34 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402DA478 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x1402DE9C0 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402E02A0 (SmKmStoreHelperCheckWaitCommand.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     SmKmStoreHelperCleanup @ 0x14035AE74 (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x14035AEC4 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AF1C (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406B7B50 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x14092B278 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  _DWORD *v3; // r9
  char v4; // al
  _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  _DWORD *v10; // r9
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  char v18; // cl
  void *v19; // rdi
  void *v20; // rcx
  __int64 result; // rax
  PVOID *v22; // rdi
  int v23; // [rsp+34h] [rbp-64h] BYREF
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
        KiStackAttachProcess(v5, 0LL, (__int64)v24, v3);
        v4 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v4 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v22 = *(PVOID **)(a1 + 6568);
        if ( *v22 )
          SC_ENV::Free(*v22);
        ExFreePoolWithTag(v22, 0);
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
    v23 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = (_DWORD *)((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL);
    v11 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
      if ( v12 )
        break;
      v14 = (__int64)&v7->LockEntries[v13];
      v11 &= ~(1 << v13);
      if ( (*(_BYTE *)(v14 + 26) & 1) != 0
        && (*(_DWORD *)(v14 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v10
        && *(_DWORD *)(v14 + 40) == SessionId )
      {
        *(_BYTE *)(v14 + 26) &= ~1u;
        if ( *(_QWORD *)(v14 + 32) )
        {
          if ( v14 )
          {
            *(_BYTE *)(v14 + 32) |= 2u;
            if ( *(__int64 *)(v14 + 32) < 0 )
              KiAbEntryRemoveFromTree(v14);
            v23 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
            *(_DWORD *)(v14 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v14 + 25) &= ~1u;
            *(_QWORD *)(v14 + 32) = 0LL;
            v15 = (signed __int64)(v14 - (unsigned __int64)v7->LockEntries) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v15;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v7->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 6024, (__int64)&v23, v10);
    v12 = v7->SpecialApcDisable++ == -1;
    if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery(v16);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v17 = *(_BYTE *)(a1 + 6021);
  if ( (v17 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess((__int64)v24, 0);
    v17 = *(_BYTE *)(a1 + 6021);
  }
  v18 = *(_BYTE *)(a1 + 6020);
  if ( v18 )
  {
    if ( v18 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v19 = *(void **)(a1 + 6216);
    if ( (v17 & 4) != 0 )
    {
      v20 = *(void **)(a1 + 6224);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
