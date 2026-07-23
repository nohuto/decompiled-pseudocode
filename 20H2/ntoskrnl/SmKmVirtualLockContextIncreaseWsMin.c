/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x14059CB4C
 * Callers:
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

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r15
  unsigned int v16; // r8d
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h] BYREF
  char v29; // [rsp+A0h] [rbp+40h] BYREF
  int v30; // [rsp+B0h] [rbp+50h]
  int v31; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  v25 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v28 = 0LL;
      v27 = 0LL;
      v23 = 0;
      v26 = 0LL;
      v7 = MmQueryWorkingSetInformation(&v28, &v27, &v26, &v24, &v25, &v23);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v24;
      if ( v8 + v24 <= v24 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v25;
      v24 += v8;
      if ( v9 > v25 )
        v10 = v9;
      v29 = 0;
      v25 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v29);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v12 + v8 > v12 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v12 + v8;
        v7 = 0;
        break;
      }
    }
    while ( v11 == -1073741748 );
  }
  else
  {
    v7 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v31 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v16);
    v30 = v19;
    if ( v18 )
      goto LABEL_26;
    v17 = (__int64)&v13->LockEntries[v19];
    v16 &= ~(1 << v19);
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0
      && (*(_DWORD *)(v17 + 32) & 1) == 0
      && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v17 + 40) == SessionId )
    {
      *(_BYTE *)(v17 + 26) &= ~1u;
      if ( *(_QWORD *)(v17 + 32) )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_33;
  }
  *(_BYTE *)(v17 + 32) |= 2u;
  if ( *(__int64 *)(v17 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
  v31 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
  *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v17 + 25) &= ~1u;
  *(_QWORD *)(v17 + 32) = 0LL;
  v20 = (signed __int64)(v17 - (unsigned __int64)v13->LockEntries) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
LABEL_33:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, &v31);
  v18 = v13->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v21);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
