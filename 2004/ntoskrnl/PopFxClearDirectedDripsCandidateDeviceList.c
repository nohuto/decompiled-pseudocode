/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x140564BA8
 * Callers:
 *     PopDirectedDripsEngage @ 0x140563404 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x1408E0240 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rbx
  unsigned __int8 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // [rsp+78h] [rbp+48h] BYREF
  int v25; // [rsp+80h] [rbp+50h]
  int v26; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v24 = 0;
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
  v24 = v10;
  *(_DWORD *)(v7 + 88) = v11;
  *(_QWORD *)(v7 + 32) = 0LL;
  v12 = (signed __int64)(v7 - (unsigned __int64)v2->LockEntries) / 96;
  if ( v5 == 1 )
    v2->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v12);
LABEL_23:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, &v24);
  v8 = v2->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock);
  v26 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxBlockingDeviceListLock) == 1 )
    v3 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  --v14->SpecialApcDisable;
  v15 = ++v14->AbAllocationRegionCount;
  v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v18, v16);
    v25 = v18;
    if ( v8 )
      goto LABEL_38;
    v17 = (__int64)&v14->LockEntries[v18];
    v16 &= ~(1 << v18);
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0
      && (*(_DWORD *)(v17 + 32) & 1) == 0
      && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v17 + 40) == v3 )
    {
      *(_BYTE *)(v17 + 26) &= ~1u;
      if ( *(_QWORD *)(v17 + 32) )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    goto LABEL_45;
  }
  *(_BYTE *)(v17 + 32) |= 2u;
  if ( *(__int64 *)(v17 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
  v19 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
  v20 = *(_DWORD *)(v17 + 88) & 0xFFFE0000;
  *(_BYTE *)(v17 + 25) &= ~1u;
  v26 = v19;
  *(_DWORD *)(v17 + 88) = v20;
  *(_QWORD *)(v17 + 32) = 0LL;
  v21 = (signed __int64)(v17 - (unsigned __int64)v14->LockEntries) / 96;
  if ( v15 == 1 )
    v14->AbEntrySummary |= 1 << v21;
  else
    _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
LABEL_45:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&PopFxBlockingDeviceListLock, &v26);
  v8 = v14->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v22);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
