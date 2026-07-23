/*
 * XREFs of CcChangeBackingFileObject @ 0x1404E39C8
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140392560 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r15
  unsigned int v13; // r8d
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KTHREAD *v27; // rdi
  unsigned int v28; // edx
  unsigned __int8 v29; // r15
  unsigned int v30; // r8d
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  struct _KTHREAD *v42; // rdi
  unsigned int v43; // edx
  unsigned __int8 v44; // r15
  unsigned int v45; // r8d
  __int64 v46; // rsi
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  volatile __int64 *v52; // rcx
  _QWORD *v53; // r15
  unsigned __int64 v54; // rdi
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned int v59; // edx
  unsigned __int8 v60; // r15
  unsigned int v61; // r8d
  __int64 v62; // rsi
  __int64 v63; // rcx
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  unsigned __int64 v67; // rdi
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  struct _KTHREAD *v72; // rdi
  unsigned int v73; // edx
  unsigned __int8 v74; // r12
  unsigned int v75; // r8d
  __int64 v76; // rsi
  __int64 v77; // rcx
  int v78; // eax
  unsigned int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rcx
  _DWORD v82[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v83[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v84[2]; // [rsp+40h] [rbp-30h] BYREF
  int v85; // [rsp+48h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v87; // [rsp+C0h] [rbp+50h] BYREF
  int v88; // [rsp+C8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    CurrentThread = KeGetCurrentThread();
    v87 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v12 = ++CurrentThread->AbAllocationRegionCount;
    v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v15, v13);
      if ( v9 )
        goto LABEL_22;
      v14 = (__int64)&CurrentThread->LockEntries[v15];
      v13 &= ~(1 << v15);
      if ( (*(_BYTE *)(v14 + 26) & 1) != 0
        && (*(_DWORD *)(v14 + 32) & 1) == 0
        && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
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
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, SessionId, 0LL);
      goto LABEL_29;
    }
    *(_BYTE *)(v14 + 32) |= 2u;
    if ( *(__int64 *)(v14 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
    v16 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
    v17 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
    *(_BYTE *)(v14 + 25) &= ~1u;
    v87 = v16;
    *(_DWORD *)(v14 + 88) = v17;
    *(_QWORD *)(v14 + 32) = 0LL;
    v18 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v12 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_29:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&CcChangeSharedCacheMapFileLock, &v87);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19);
    return 3221225712LL;
  }
  v21 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v21 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v22 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
    }
    __writecr8(v22);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v27 = KeGetCurrentThread();
    v82[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v28 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v28 = -1;
    --v27->SpecialApcDisable;
    v29 = ++v27->AbAllocationRegionCount;
    v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v32, v30);
      v88 = v32;
      if ( v9 )
        goto LABEL_54;
      v31 = (__int64)&v27->LockEntries[v32];
      v30 &= ~(1 << v32);
      if ( (*(_BYTE *)(v31 + 26) & 1) != 0
        && (*(_DWORD *)(v31 + 32) & 1) == 0
        && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v31 + 40) == v28 )
      {
        *(_BYTE *)(v31 + 26) &= ~1u;
        if ( *(_QWORD *)(v31 + 32) )
          break;
      }
    }
    if ( !v31 )
    {
LABEL_54:
      if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v28, 0LL);
      goto LABEL_61;
    }
    *(_BYTE *)(v31 + 32) |= 2u;
    if ( *(__int64 *)(v31 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
    v33 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
    v34 = *(_DWORD *)(v31 + 88) & 0xFFFE0000;
    *(_BYTE *)(v31 + 25) &= ~1u;
    v82[0] = v33;
    *(_DWORD *)(v31 + 88) = v34;
    *(_QWORD *)(v31 + 32) = 0LL;
    v35 = (signed __int64)(v31 - (unsigned __int64)v27->LockEntries) / 96;
    if ( v29 == 1 )
      v27->AbEntrySummary |= 1 << v35;
    else
      _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v35);
LABEL_61:
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)&CcChangeSharedCacheMapFileLock, v82);
    v9 = v27->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
    goto LABEL_125;
  }
  if ( (*(_DWORD *)(v21 + 152) & 0x100000) == 0 )
  {
    v52 = (volatile __int64 *)(v21 + 96);
    v53 = (_QWORD *)(*v52 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v53 == a1 )
    {
      ObFastReplaceObject(v52, (ULONG_PTR)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v67 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v69);
          }
        }
      }
      __writecr8(v67);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      v72 = KeGetCurrentThread();
      v85 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
        v73 = MmGetSessionIdEx((__int64)v72->ApcState.Process);
      else
        v73 = -1;
      --v72->SpecialApcDisable;
      v74 = ++v72->AbAllocationRegionCount;
      v75 = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v77, v75);
        v84[1] = v77;
        if ( v9 )
          goto LABEL_147;
        v76 = (__int64)&v72->LockEntries[v77];
        v75 &= ~(1 << v77);
        if ( (*(_BYTE *)(v76 + 26) & 1) != 0
          && (*(_DWORD *)(v76 + 32) & 1) == 0
          && (*(_QWORD *)(v76 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v76 + 40) == v73 )
        {
          *(_BYTE *)(v76 + 26) &= ~1u;
          if ( *(_QWORD *)(v76 + 32) )
            break;
        }
      }
      if ( !v76 )
      {
LABEL_147:
        if ( (*((_DWORD *)&v72->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v73, 0LL);
        goto LABEL_154;
      }
      *(_BYTE *)(v76 + 32) |= 2u;
      if ( *(__int64 *)(v76 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v76);
      v78 = *(_DWORD *)(v76 + 88) & 0x1FFFF;
      v79 = *(_DWORD *)(v76 + 88) & 0xFFFE0000;
      *(_BYTE *)(v76 + 25) &= ~1u;
      v85 = v78;
      *(_DWORD *)(v76 + 88) = v79;
      *(_QWORD *)(v76 + 32) = 0LL;
      v80 = (signed __int64)(v76 - (unsigned __int64)v72->LockEntries) / 96;
      if ( v74 == 1 )
        v72->AbEntrySummary |= 1 << v80;
      else
        _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v80);
LABEL_154:
      --v72->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v72, (__int64)&CcChangeSharedCacheMapFileLock, &v85);
      v9 = v72->SpecialApcDisable++ == -1;
      if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
        KiCheckForKernelApcDelivery(v81);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v53, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v54 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v56);
        }
      }
    }
    __writecr8(v54);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v27 = KeGetCurrentThread();
    v84[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v59 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v59 = -1;
    --v27->SpecialApcDisable;
    v60 = ++v27->AbAllocationRegionCount;
    v61 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v63, v61);
      v83[1] = v63;
      if ( v9 )
        goto LABEL_117;
      v62 = (__int64)&v27->LockEntries[v63];
      v61 &= ~(1 << v63);
      if ( (*(_BYTE *)(v62 + 26) & 1) != 0
        && (*(_DWORD *)(v62 + 32) & 1) == 0
        && (*(_QWORD *)(v62 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v62 + 40) == v59 )
      {
        *(_BYTE *)(v62 + 26) &= ~1u;
        if ( *(_QWORD *)(v62 + 32) )
          break;
      }
    }
    if ( !v62 )
    {
LABEL_117:
      if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v59, 0LL);
      goto LABEL_124;
    }
    *(_BYTE *)(v62 + 32) |= 2u;
    if ( *(__int64 *)(v62 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v62);
    v64 = *(_DWORD *)(v62 + 88) & 0x1FFFF;
    v65 = *(_DWORD *)(v62 + 88) & 0xFFFE0000;
    *(_BYTE *)(v62 + 25) &= ~1u;
    v84[0] = v64;
    *(_DWORD *)(v62 + 88) = v65;
    *(_QWORD *)(v62 + 32) = 0LL;
    v66 = (signed __int64)(v62 - (unsigned __int64)v27->LockEntries) / 96;
    if ( v60 == 1 )
      v27->AbEntrySummary |= 1 << v66;
    else
      _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v66);
LABEL_124:
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)&CcChangeSharedCacheMapFileLock, v84);
    v9 = v27->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
LABEL_125:
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v36);
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v37 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
    }
  }
  __writecr8(v37);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  v42 = KeGetCurrentThread();
  v83[0] = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
    v43 = MmGetSessionIdEx((__int64)v42->ApcState.Process);
  else
    v43 = -1;
  --v42->SpecialApcDisable;
  v44 = ++v42->AbAllocationRegionCount;
  v45 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v47, v45);
    v82[1] = v47;
    if ( v9 )
      goto LABEL_84;
    v46 = (__int64)&v42->LockEntries[v47];
    v45 &= ~(1 << v47);
    if ( (*(_BYTE *)(v46 + 26) & 1) != 0
      && (*(_DWORD *)(v46 + 32) & 1) == 0
      && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v46 + 40) == v43 )
    {
      *(_BYTE *)(v46 + 26) &= ~1u;
      if ( *(_QWORD *)(v46 + 32) )
        break;
    }
  }
  if ( !v46 )
  {
LABEL_84:
    if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v42, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v43, 0LL);
    goto LABEL_91;
  }
  *(_BYTE *)(v46 + 32) |= 2u;
  if ( *(__int64 *)(v46 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v46);
  v48 = *(_DWORD *)(v46 + 88) & 0x1FFFF;
  v49 = *(_DWORD *)(v46 + 88) & 0xFFFE0000;
  *(_BYTE *)(v46 + 25) &= ~1u;
  v83[0] = v48;
  *(_DWORD *)(v46 + 88) = v49;
  *(_QWORD *)(v46 + 32) = 0LL;
  v50 = (signed __int64)(v46 - (unsigned __int64)v42->LockEntries) / 96;
  if ( v44 == 1 )
    v42->AbEntrySummary |= 1 << v50;
  else
    _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v50);
LABEL_91:
  --v42->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v42, (__int64)&CcChangeSharedCacheMapFileLock, v83);
  v9 = v42->SpecialApcDisable++ == -1;
  if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
    KiCheckForKernelApcDelivery(v51);
  return 3221225659LL;
}
