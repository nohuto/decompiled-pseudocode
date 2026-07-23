/*
 * XREFs of PopPepPlatformStateRegistered @ 0x140573AAC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140568F90 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14039CEC4 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x14057338C (PopPepInitializeVetoMasks.c)
 */

_QWORD *__fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  struct _KTHREAD *v3; // rbx
  unsigned int v4; // r12d
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rbx
  unsigned __int8 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *v25; // rbx
  unsigned int v26; // r12d
  unsigned int v27; // edx
  unsigned __int8 v28; // r14
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rsi
  int v32; // eax
  unsigned int v33; // ecx
  unsigned __int8 v34; // al
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rsi
  KIRQL v39; // al
  int v40; // r15d
  unsigned __int64 v41; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  struct _KTHREAD *v46; // rbx
  unsigned __int8 v47; // r14
  unsigned int v48; // edx
  __int64 v49; // rsi
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // [rsp+30h] [rbp-20h] BYREF
  int v56; // [rsp+34h] [rbp-1Ch]
  _DWORD v57[2]; // [rsp+38h] [rbp-18h] BYREF
  int v58[4]; // [rsp+40h] [rbp-10h] BYREF
  int v60; // [rsp+A0h] [rbp+50h] BYREF
  int v61; // [rsp+A8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    v3 = KeGetCurrentThread();
    v60 = 0;
    v4 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    --v3->SpecialApcDisable;
    v6 = ++v3->AbAllocationRegionCount;
    v7 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_14;
    while ( 1 )
    {
      v10 = (__int64)&v3->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        goto LABEL_14;
    }
    if ( !v10 )
    {
LABEL_14:
      if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v10 + 32) |= 2u;
      if ( *(__int64 *)(v10 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
      v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
      v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
      *(_BYTE *)(v10 + 25) &= ~1u;
      v60 = v11;
      *(_DWORD *)(v10 + 88) = v12;
      *(_QWORD *)(v10 + 32) = 0LL;
      v13 = (signed __int64)(v10 - (unsigned __int64)v3->LockEntries) / 96;
      if ( v6 == 1 )
        v3->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v13);
    }
    --v3->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, &v60);
    v8 = v3->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
      KiCheckForKernelApcDelivery(v14);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    v55 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v4 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    --v15->SpecialApcDisable;
    v16 = ++v15->AbAllocationRegionCount;
    v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v19, v17);
      v61 = v19;
      if ( v8 )
        goto LABEL_36;
      v18 = (__int64)&v15->LockEntries[v19];
      v17 &= ~(1 << v19);
      if ( (*(_BYTE *)(v18 + 26) & 1) != 0
        && (*(_DWORD *)(v18 + 32) & 1) == 0
        && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v18 + 40) == v4 )
      {
        *(_BYTE *)(v18 + 26) &= ~1u;
        if ( *(_QWORD *)(v18 + 32) )
          break;
      }
    }
    if ( !v18 )
    {
LABEL_36:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&PopPepVetoMaskReadyLock, v4, 0LL);
      goto LABEL_43;
    }
    *(_BYTE *)(v18 + 32) |= 2u;
    if ( *(__int64 *)(v18 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
    v20 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
    v21 = *(_DWORD *)(v18 + 88) & 0xFFFE0000;
    *(_BYTE *)(v18 + 25) &= ~1u;
    v55 = v20;
    *(_DWORD *)(v18 + 88) = v21;
    *(_QWORD *)(v18 + 32) = 0LL;
    v22 = (signed __int64)(v18 - (unsigned __int64)v15->LockEntries) / 96;
    if ( v16 == 1 )
      v15->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
LABEL_43:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&PopPepVetoMaskReadyLock, &v55);
    v8 = v15->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v23);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    v25 = KeGetCurrentThread();
    v57[0] = 0;
    v26 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      v27 = MmGetSessionIdEx((__int64)v25->ApcState.Process);
    else
      v27 = -1;
    --v25->SpecialApcDisable;
    v28 = ++v25->AbAllocationRegionCount;
    v29 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v30, v29);
    v56 = v30;
    if ( v8 )
      goto LABEL_60;
    while ( 1 )
    {
      v31 = (__int64)&v25->LockEntries[v30];
      v29 &= ~(1 << v30);
      if ( (*(_BYTE *)(v31 + 26) & 1) != 0
        && (*(_DWORD *)(v31 + 32) & 1) == 0
        && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v31 + 40) == v27 )
      {
        *(_BYTE *)(v31 + 26) &= ~1u;
        if ( *(_QWORD *)(v31 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v30, v29);
      v56 = v30;
      if ( v8 )
        goto LABEL_60;
    }
    if ( !v31 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, (ULONG_PTR)&PopPepDeviceListLock, v27, 0LL);
    }
    else
    {
      *(_BYTE *)(v31 + 32) |= 2u;
      if ( *(__int64 *)(v31 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
      v32 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
      v33 = *(_DWORD *)(v31 + 88) & 0xFFFE0000;
      *(_BYTE *)(v31 + 25) &= ~1u;
      v57[0] = v32;
      *(_DWORD *)(v31 + 88) = v33;
      *(_QWORD *)(v31 + 32) = 0LL;
      v34 = 1 << ((signed __int64)(v31 - (unsigned __int64)v25->LockEntries) / 96);
      if ( v28 == 1 )
        v25->AbEntrySummary |= v34;
      else
        _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, v34);
    }
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25, (__int64)&PopPepDeviceListLock, v57);
    v8 = v25->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery(v35);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v36 = 0LL;
      v37 = v2;
      do
      {
        v36 += 384LL;
        *(_DWORD *)(v36 + PopPepPlatformState - 64) = 1073741825;
        --v37;
      }
      while ( v37 );
    }
    v38 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v38 + 64));
        v40 = *(_DWORD *)(v38 + 172);
        v41 = v39;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v38 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
              v8 = (v45 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v45;
              if ( v8 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v41);
        if ( v40 == 1 )
          PopPepInitializeVetoMasks(v38, a1);
        v38 = *(_QWORD *)v38;
      }
      while ( (__int64 *)v38 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v26 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    v58[0] = 0;
    v46 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v26 = MmGetSessionIdEx((__int64)v46->ApcState.Process);
    --v46->SpecialApcDisable;
    v47 = ++v46->AbAllocationRegionCount;
    v48 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v50, v48);
      v57[1] = v50;
      if ( v8 )
        goto LABEL_99;
      v49 = (__int64)&v46->LockEntries[v50];
      v48 &= ~(1 << v50);
      if ( (*(_BYTE *)(v49 + 26) & 1) != 0
        && (*(_DWORD *)(v49 + 32) & 1) == 0
        && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v49 + 40) == v26 )
      {
        *(_BYTE *)(v49 + 26) &= ~1u;
        if ( *(_QWORD *)(v49 + 32) )
          break;
      }
    }
    if ( !v49 )
    {
LABEL_99:
      if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v46, (ULONG_PTR)&PopPepVetoMaskReadyLock, v26, 0LL);
      goto LABEL_106;
    }
    *(_BYTE *)(v49 + 32) |= 2u;
    if ( *(__int64 *)(v49 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
    v51 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
    v52 = *(_DWORD *)(v49 + 88) & 0xFFFE0000;
    *(_BYTE *)(v49 + 25) &= ~1u;
    v58[0] = v51;
    *(_DWORD *)(v49 + 88) = v52;
    *(_QWORD *)(v49 + 32) = 0LL;
    v53 = (signed __int64)(v49 - (unsigned __int64)v46->LockEntries) / 96;
    if ( v47 == 1 )
      v46->AbEntrySummary |= 1 << v53;
    else
      _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v53);
LABEL_106:
    --v46->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v46, (__int64)&PopPepVetoMaskReadyLock, v58);
    v8 = v46->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery(v54);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (_QWORD *)PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
