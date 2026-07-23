/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140301F80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1406CF610 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D1A78 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030234C (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140302824 (SmFpCleanup.c)
 *     SmKmStoreHelperCleanup @ 0x140302C94 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x140304B84 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmAcquireReleaseCharges @ 0x140305F04 (SmAcquireReleaseCharges.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x140927C80 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
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
  __int64 v14; // rcx
  char v15; // al
  char v16; // cl
  void *v17; // rdi
  void *v18; // rcx
  PVOID *v19; // rdi
  int v20; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v21[3]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v21, 0, sizeof(v21));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
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
        KiStackAttachProcess(v4, 0LL, (__int64)v21);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v19 = *(PVOID **)(a1 + 6568);
        if ( *v19 )
          SC_ENV::Free(*v19);
        ExFreePoolWithTag(v19, 0);
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
    v20 = 0;
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
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
            v20 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v6, a1 + 6024, &v20);
    v10 = v6->SpecialApcDisable++ == -1;
    if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery(v14);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v15 = *(_BYTE *)(a1 + 6021);
  if ( (v15 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess((__int64)v21, 0LL);
    v15 = *(_BYTE *)(a1 + 6021);
  }
  v16 = *(_BYTE *)(a1 + 6020);
  if ( v16 )
  {
    if ( v16 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v17 = *(void **)(a1 + 6216);
    if ( (v15 & 4) != 0 )
    {
      v18 = *(void **)(a1 + 6224);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 1LL);
}
