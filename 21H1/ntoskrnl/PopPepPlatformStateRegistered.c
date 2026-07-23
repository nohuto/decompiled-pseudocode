/*
 * XREFs of PopPepPlatformStateRegistered @ 0x14056FA2C
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140564F40 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14039D344 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // r9
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // r9
  struct _KTHREAD *v31; // rbx
  unsigned int v32; // r12d
  unsigned int v33; // edx
  unsigned __int8 v34; // r14
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rsi
  int v38; // eax
  unsigned int v39; // ecx
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _DWORD *v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rsi
  KIRQL v48; // al
  int v49; // r15d
  unsigned __int64 v50; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  struct _KTHREAD *v55; // rbx
  unsigned __int8 v56; // r14
  unsigned int v57; // edx
  __int64 v58; // rsi
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  _DWORD *v66; // r9
  int v67; // [rsp+30h] [rbp-20h] BYREF
  int v68; // [rsp+34h] [rbp-1Ch]
  _DWORD v69[2]; // [rsp+38h] [rbp-18h] BYREF
  int v70[4]; // [rsp+40h] [rbp-10h] BYREF
  int v72; // [rsp+A0h] [rbp+50h] BYREF
  int v73; // [rsp+A8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v3 = KeGetCurrentThread();
    v72 = 0;
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
      v72 = v11;
      *(_DWORD *)(v10 + 88) = v12;
      *(_QWORD *)(v10 + 32) = 0LL;
      v13 = (signed __int64)(v10 - (unsigned __int64)v3->LockEntries) / 96;
      if ( v6 == 1 )
        v3->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v13);
    }
    --v3->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, &v72);
    v8 = v3->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
      KiCheckForKernelApcDelivery(v15, v14, v16, v17);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v67 = 0;
    v18 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v4 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    --v18->SpecialApcDisable;
    v19 = ++v18->AbAllocationRegionCount;
    v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v22, v20);
      v73 = v22;
      if ( v8 )
        goto LABEL_36;
      v21 = (__int64)&v18->LockEntries[v22];
      v20 &= ~(1 << v22);
      if ( (*(_BYTE *)(v21 + 26) & 1) != 0
        && (*(_DWORD *)(v21 + 32) & 1) == 0
        && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v21 + 40) == v4 )
      {
        *(_BYTE *)(v21 + 26) &= ~1u;
        if ( *(_QWORD *)(v21 + 32) )
          break;
      }
    }
    if ( !v21 )
    {
LABEL_36:
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&PopPepVetoMaskReadyLock, v4, 0LL);
      goto LABEL_43;
    }
    *(_BYTE *)(v21 + 32) |= 2u;
    if ( *(__int64 *)(v21 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
    v23 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
    v24 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
    *(_BYTE *)(v21 + 25) &= ~1u;
    v67 = v23;
    *(_DWORD *)(v21 + 88) = v24;
    *(_QWORD *)(v21 + 32) = 0LL;
    v25 = (signed __int64)(v21 - (unsigned __int64)v18->LockEntries) / 96;
    if ( v19 == 1 )
      v18->AbEntrySummary |= 1 << v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
LABEL_43:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&PopPepVetoMaskReadyLock, &v67);
    v8 = v18->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v27, v26, v28, v29);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v28, (__int64)v29);
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepDeviceListLock);
    v31 = KeGetCurrentThread();
    v69[0] = 0;
    v32 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
      v33 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      v33 = -1;
    --v31->SpecialApcDisable;
    v34 = ++v31->AbAllocationRegionCount;
    v35 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v36, v35);
    v68 = v36;
    if ( v8 )
      goto LABEL_60;
    while ( 1 )
    {
      v37 = (__int64)&v31->LockEntries[v36];
      v35 &= ~(1 << v36);
      if ( (*(_BYTE *)(v37 + 26) & 1) != 0
        && (*(_DWORD *)(v37 + 32) & 1) == 0
        && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v37 + 40) == v33 )
      {
        *(_BYTE *)(v37 + 26) &= ~1u;
        if ( *(_QWORD *)(v37 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v36, v35);
      v68 = v36;
      if ( v8 )
        goto LABEL_60;
    }
    if ( !v37 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&PopPepDeviceListLock, v33, 0LL);
    }
    else
    {
      *(_BYTE *)(v37 + 32) |= 2u;
      if ( *(__int64 *)(v37 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
      v38 = *(_DWORD *)(v37 + 88) & 0x1FFFF;
      v39 = *(_DWORD *)(v37 + 88) & 0xFFFE0000;
      *(_BYTE *)(v37 + 25) &= ~1u;
      v69[0] = v38;
      *(_DWORD *)(v37 + 88) = v39;
      *(_QWORD *)(v37 + 32) = 0LL;
      v40 = 1 << ((signed __int64)(v37 - (unsigned __int64)v31->LockEntries) / 96);
      if ( v34 == 1 )
        v31->AbEntrySummary |= v40;
      else
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v40);
    }
    --v31->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, (__int64)&PopPepDeviceListLock, v69);
    v8 = v31->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(v42, v41, v43, v44);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v45 = 0LL;
      v46 = v2;
      do
      {
        v45 += 384LL;
        *(_DWORD *)(v45 + PopPepPlatformState - 64) = 1073741825;
        --v46;
      }
      while ( v46 );
    }
    v47 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v48 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v47 + 64));
        v49 = *(_DWORD *)(v47 + 172);
        v50 = v48;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v47 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v50 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
              v8 = (v54 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v54;
              if ( v8 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v50);
        if ( v49 == 1 )
          PopPepInitializeVetoMasks(v47, a1);
        v47 = *(_QWORD *)v47;
      }
      while ( (__int64 *)v47 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v32 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopPepVetoMaskReadyLock);
    v70[0] = 0;
    v55 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
      v32 = MmGetSessionIdEx((__int64)v55->ApcState.Process);
    --v55->SpecialApcDisable;
    v56 = ++v55->AbAllocationRegionCount;
    v57 = ((char)v55->AbEntrySummary | (char)v55->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v59, v57);
      v69[1] = v59;
      if ( v8 )
        goto LABEL_99;
      v58 = (__int64)&v55->LockEntries[v59];
      v57 &= ~(1 << v59);
      if ( (*(_BYTE *)(v58 + 26) & 1) != 0
        && (*(_DWORD *)(v58 + 32) & 1) == 0
        && (*(_QWORD *)(v58 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v58 + 40) == v32 )
      {
        *(_BYTE *)(v58 + 26) &= ~1u;
        if ( *(_QWORD *)(v58 + 32) )
          break;
      }
    }
    if ( !v58 )
    {
LABEL_99:
      if ( (*((_DWORD *)&v55->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v55, (ULONG_PTR)&PopPepVetoMaskReadyLock, v32, 0LL);
      goto LABEL_106;
    }
    *(_BYTE *)(v58 + 32) |= 2u;
    if ( *(__int64 *)(v58 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v58);
    v60 = *(_DWORD *)(v58 + 88) & 0x1FFFF;
    v61 = *(_DWORD *)(v58 + 88) & 0xFFFE0000;
    *(_BYTE *)(v58 + 25) &= ~1u;
    v70[0] = v60;
    *(_DWORD *)(v58 + 88) = v61;
    *(_QWORD *)(v58 + 32) = 0LL;
    v62 = (signed __int64)(v58 - (unsigned __int64)v55->LockEntries) / 96;
    if ( v56 == 1 )
      v55->AbEntrySummary |= 1 << v62;
    else
      _InterlockedOr8((volatile signed __int8 *)&v55->AbOrphanedEntrySummary, 1 << v62);
LABEL_106:
    --v55->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v55, (__int64)&PopPepVetoMaskReadyLock, v70);
    v8 = v55->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
      KiCheckForKernelApcDelivery(v64, v63, v65, v66);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v63, v65, (__int64)v66);
    return (_QWORD *)PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
