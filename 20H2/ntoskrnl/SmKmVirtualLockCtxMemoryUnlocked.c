/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x14059CF50
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140358420 (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059CE30 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     MmQueryWorkingSetInformation @ 0x14023ED3C (MmQueryWorkingSetInformation.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  char v24; // [rsp+A0h] [rbp+40h] BYREF
  int v25; // [rsp+A8h] [rbp+48h]
  int v26; // [rsp+B0h] [rbp+50h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 16) - v6;
    if ( v7 >= 0x800000 || !v6 && *(_QWORD *)(BugCheckParameter2 + 16) )
    {
      v23 = 0LL;
      v22 = 0LL;
      v27 = 0;
      v21 = 0LL;
      if ( (int)MmQueryWorkingSetInformation(&v23, &v22, &v21, &v19, &v20, &v27) >= 0 )
      {
        v8 = v19;
        v9 = v7 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
        if ( v8 >= v9 )
        {
          v19 = v8 - v9;
          v24 = 0;
          MmAdjustWorkingSetSizeEx(v8 - v9, v20, 0, 0, 0, &v24);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    v26 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount;
    v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v15 = !_BitScanReverse((unsigned int *)&v16, v13);
      v25 = v16;
      if ( v15 )
        goto LABEL_22;
      v14 = (__int64)&v10->LockEntries[v16];
      v13 &= ~(1 << v16);
      if ( (*(_BYTE *)(v14 + 26) & 1) != 0
        && (*(_DWORD *)(v14 + 32) & 1) == 0
        && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v14 + 40) == SessionId )
      {
        *(_BYTE *)(v14 + 26) &= ~1u;
        if ( *(_QWORD *)(v14 + 32) )
          break;
      }
    }
    if ( !v14 )
    {
LABEL_22:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, BugCheckParameter2, SessionId, 0LL);
      goto LABEL_29;
    }
    *(_BYTE *)(v14 + 32) |= 2u;
    if ( *(__int64 *)(v14 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
    v26 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
    *(_DWORD *)(v14 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v14 + 25) &= ~1u;
    *(_QWORD *)(v14 + 32) = 0LL;
    v17 = (signed __int64)(v14 - (unsigned __int64)v10->LockEntries) / 96;
    if ( v12 == 1 )
      v10->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v17);
LABEL_29:
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v10, BugCheckParameter2, &v26);
    v15 = v10->SpecialApcDisable++ == -1;
    if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v18);
    KeLeaveCriticalRegion();
  }
}
