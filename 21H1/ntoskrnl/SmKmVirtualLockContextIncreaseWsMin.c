/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x1405989BC
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140598CA0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     MmQueryWorkingSetInformation @ 0x1402041E4 (MmQueryWorkingSetInformation.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // r9
  int v26; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h] BYREF
  char v32; // [rsp+A0h] [rbp+40h] BYREF
  int v33; // [rsp+B0h] [rbp+50h]
  int v34; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v27 = 0LL;
  v28 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v31 = 0LL;
      v30 = 0LL;
      v26 = 0;
      v29 = 0LL;
      v7 = MmQueryWorkingSetInformation(&v31, &v30, &v29, &v27, &v28, &v26);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v27;
      if ( v8 + v27 <= v27 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v28;
      v27 += v8;
      if ( v9 > v28 )
        v10 = v9;
      v32 = 0;
      v28 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v32);
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
    ExfTryToWakePushLock(BugCheckParameter2);
  v34 = 0;
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
    v33 = v19;
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
  v34 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, &v34);
  v18 = v13->SpecialApcDisable++ == -1;
  if ( v18 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v22, v21, v23, v24);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
