/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x1405829C4
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CCE78 (MiHotPatchImageTreeCompare.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbp
  bool v11; // zf
  unsigned __int64 *v12; // rdi
  bool v13; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = a2;
    *((_DWORD *)PoolWithTag + 8) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = a1 + 112;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v11 = a3 == 0;
  v12 = *(unsigned __int64 **)(a1 + 104);
  if ( v11 )
  {
    while ( v12 )
    {
      v15 = MiHotPatchImageTreeCompare(a2, v12);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          break;
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        v12 = (unsigned __int64 *)*v12;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v12);
    goto LABEL_20;
  }
  v13 = 0;
  if ( !v12 )
    goto LABEL_19;
  while ( (int)MiHotPatchImageTreeCompare(a2, v12) >= 0 )
  {
    v14 = v12[1];
    if ( !v14 )
    {
      v13 = 1;
      goto LABEL_19;
    }
LABEL_17:
    v12 = (unsigned __int64 *)v14;
  }
  v14 = *v12;
  if ( *v12 )
    goto LABEL_17;
  v13 = 0;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v12, v13, v3);
  v12 = 0LL;
LABEL_20:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  v24 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = -1;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v21, v19);
    if ( v11 )
      goto LABEL_32;
    v20 = (__int64)&v16->LockEntries[v21];
    v19 &= ~(1 << v21);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == SessionId )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v10, SessionId, 0LL);
    goto LABEL_39;
  }
  *(_BYTE *)(v20 + 32) |= 2u;
  if ( *(__int64 *)(v20 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
  v24 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
  *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v20 + 25) &= ~1u;
  *(_QWORD *)(v20 + 32) = 0LL;
  v22 = (signed __int64)(v20 - (unsigned __int64)v16->LockEntries) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v22);
LABEL_39:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v10, &v24);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v23);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
