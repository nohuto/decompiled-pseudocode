/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x1405666CC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PopFxActivateDevicesForSx @ 0x140389918 (PopFxActivateDevicesForSx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

_QWORD *PopFxPrepareDevicesForShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v3; // si
  unsigned int v4; // r8d
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  PopFxEnableShutdownActiveBias = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v13 = 0;
  v1 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
  else
    SessionId = -1;
  --v1->SpecialApcDisable;
  v3 = ++v1->AbAllocationRegionCount;
  v4 = ((char)v1->AbEntrySummary | (char)v1->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v4);
    if ( v6 )
      goto LABEL_13;
    v5 = (__int64)&v1->LockEntries[v7];
    v4 &= ~(1 << v7);
    if ( (*(_BYTE *)(v5 + 26) & 1) != 0
      && (*(_DWORD *)(v5 + 32) & 1) == 0
      && (*(_QWORD *)(v5 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v5 + 40) == SessionId )
    {
      *(_BYTE *)(v5 + 26) &= ~1u;
      if ( *(_QWORD *)(v5 + 32) )
        break;
    }
  }
  if ( !v5 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v1->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v1, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 32) |= 2u;
  if ( *(__int64 *)(v5 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v5);
  v8 = *(_DWORD *)(v5 + 88) & 0x1FFFF;
  v9 = *(_DWORD *)(v5 + 88) & 0xFFFE0000;
  *(_BYTE *)(v5 + 25) &= ~1u;
  v13 = v8;
  *(_DWORD *)(v5 + 88) = v9;
  *(_QWORD *)(v5 + 32) = 0LL;
  v10 = (signed __int64)(v5 - (unsigned __int64)v1->LockEntries) / 96;
  if ( v3 == 1 )
    v1->AbEntrySummary |= 1 << v10;
  else
    _InterlockedOr8((volatile signed __int8 *)&v1->AbOrphanedEntrySummary, 1 << v10);
LABEL_20:
  --v1->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v1, (__int64)&PopFxDeviceListLock, &v13);
  v6 = v1->SpecialApcDisable++ == -1;
  if ( v6 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v1->ApcState.ApcListHead[0].Flink != &v1->152 )
    KiCheckForKernelApcDelivery(v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxActivateDevicesForSx(4u);
}
