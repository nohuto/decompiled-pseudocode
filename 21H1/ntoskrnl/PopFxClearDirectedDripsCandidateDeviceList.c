/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x140564558
 * Callers:
 *     PopDirectedDripsEngage @ 0x140562DB4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x1408DEFE0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rbx
  unsigned int v3; // esi
  unsigned int SessionId; // edx
  unsigned __int8 v5; // r14
  unsigned int v6; // r8d
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // r9
  int v30; // [rsp+78h] [rbp+48h] BYREF
  int v31; // [rsp+80h] [rbp+50h]
  int v32; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v30 = 0;
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  --v2->SpecialApcDisable;
  v5 = ++v2->AbAllocationRegionCount;
  v6 = ((char)v2->AbEntrySummary | (char)v2->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v6);
    if ( v8 )
      goto LABEL_16;
    v7 = (__int64)&v2->LockEntries[v9];
    v6 &= ~(1 << v9);
    if ( (*(_BYTE *)(v7 + 26) & 1) != 0
      && (*(_DWORD *)(v7 + 32) & 1) == 0
      && (*(_QWORD *)(v7 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v7 + 40) == SessionId )
    {
      *(_BYTE *)(v7 + 26) &= ~1u;
      if ( *(_QWORD *)(v7 + 32) )
        break;
    }
  }
  if ( !v7 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_23;
  }
  *(_BYTE *)(v7 + 32) |= 2u;
  if ( *(__int64 *)(v7 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v7);
  v10 = *(_DWORD *)(v7 + 88) & 0x1FFFF;
  v11 = *(_DWORD *)(v7 + 88) & 0xFFFE0000;
  *(_BYTE *)(v7 + 25) &= ~1u;
  v30 = v10;
  *(_DWORD *)(v7 + 88) = v11;
  *(_QWORD *)(v7 + 32) = 0LL;
  v12 = (signed __int64)(v7 - (unsigned __int64)v2->LockEntries) / 96;
  if ( v5 == 1 )
    v2->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v12);
LABEL_23:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, &v30);
  v8 = v2->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxBlockingDeviceListLock);
  v32 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxBlockingDeviceListLock) == 1 )
    v3 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v21, v19);
    v31 = v21;
    if ( v8 )
      goto LABEL_38;
    v20 = (__int64)&v17->LockEntries[v21];
    v19 &= ~(1 << v21);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v3 )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v20 + 32) |= 2u;
  if ( *(__int64 *)(v20 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
  v22 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
  v23 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
  *(_BYTE *)(v20 + 25) &= ~1u;
  v32 = v22;
  *(_DWORD *)(v20 + 88) = v23;
  *(_QWORD *)(v20 + 32) = 0LL;
  v24 = (signed __int64)(v20 - (unsigned __int64)v17->LockEntries) / 96;
  if ( v18 == 1 )
    v17->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
LABEL_45:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, (__int64)&PopFxBlockingDeviceListLock, &v32);
  v8 = v17->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v26, v25, v27, v28);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v27, (__int64)v28);
}
