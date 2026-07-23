/*
 * XREFs of CcChangeBackingFileObject @ 0x1404E3418
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1403919B0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  struct _KTHREAD *v30; // rdi
  unsigned int v31; // edx
  unsigned __int8 v32; // r15
  unsigned int v33; // r8d
  __int64 v34; // rsi
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // r9
  unsigned __int64 v43; // rdi
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  struct _KTHREAD *v48; // rdi
  unsigned int v49; // edx
  unsigned __int8 v50; // r15
  unsigned int v51; // r8d
  __int64 v52; // rsi
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _DWORD *v60; // r9
  volatile __int64 *v61; // rcx
  _QWORD *v62; // r15
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  unsigned int v68; // edx
  unsigned __int8 v69; // r15
  unsigned int v70; // r8d
  __int64 v71; // rsi
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rdx
  unsigned __int64 v76; // rdi
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  struct _KTHREAD *v81; // rdi
  unsigned int v82; // edx
  unsigned __int8 v83; // r12
  unsigned int v84; // r8d
  __int64 v85; // rsi
  __int64 v86; // rcx
  int v87; // eax
  unsigned int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _DWORD *v93; // r9
  _DWORD v94[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v95[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v96[2]; // [rsp+40h] [rbp-30h] BYREF
  int v97; // [rsp+48h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v99; // [rsp+C0h] [rbp+50h] BYREF
  int v100; // [rsp+C8h] [rbp+58h]

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
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    CurrentThread = KeGetCurrentThread();
    v99 = 0;
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
    v99 = v16;
    *(_DWORD *)(v14 + 88) = v17;
    *(_QWORD *)(v14 + 32) = 0LL;
    v18 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v12 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_29:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&CcChangeSharedCacheMapFileLock, &v99);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v19, v21, v22);
    return 3221225712LL;
  }
  v24 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v24 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v27);
        }
      }
    }
    __writecr8(v25);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v30 = KeGetCurrentThread();
    v94[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v31 = MmGetSessionIdEx((__int64)v30->ApcState.Process);
    else
      v31 = -1;
    --v30->SpecialApcDisable;
    v32 = ++v30->AbAllocationRegionCount;
    v33 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v35, v33);
      v100 = v35;
      if ( v9 )
        goto LABEL_54;
      v34 = (__int64)&v30->LockEntries[v35];
      v33 &= ~(1 << v35);
      if ( (*(_BYTE *)(v34 + 26) & 1) != 0
        && (*(_DWORD *)(v34 + 32) & 1) == 0
        && (*(_QWORD *)(v34 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v34 + 40) == v31 )
      {
        *(_BYTE *)(v34 + 26) &= ~1u;
        if ( *(_QWORD *)(v34 + 32) )
          break;
      }
    }
    if ( !v34 )
    {
LABEL_54:
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v31, 0LL);
      goto LABEL_61;
    }
    *(_BYTE *)(v34 + 32) |= 2u;
    if ( *(__int64 *)(v34 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v34);
    v36 = *(_DWORD *)(v34 + 88) & 0x1FFFF;
    v37 = *(_DWORD *)(v34 + 88) & 0xFFFE0000;
    *(_BYTE *)(v34 + 25) &= ~1u;
    v94[0] = v36;
    *(_DWORD *)(v34 + 88) = v37;
    *(_QWORD *)(v34 + 32) = 0LL;
    v38 = (signed __int64)(v34 - (unsigned __int64)v30->LockEntries) / 96;
    if ( v32 == 1 )
      v30->AbEntrySummary |= 1 << v38;
    else
      _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v38);
LABEL_61:
    --v30->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v30, (__int64)&CcChangeSharedCacheMapFileLock, v94);
    v9 = v30->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
    goto LABEL_125;
  }
  if ( (*(_DWORD *)(v24 + 152) & 0x100000) == 0 )
  {
    v61 = (volatile __int64 *)(v24 + 96);
    v62 = (_QWORD *)(*v61 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v62 == a1 )
    {
      ObFastReplaceObject(v61, (ULONG_PTR)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v76 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v77 = KeGetCurrentIrql();
          if ( v77 <= 0xFu && LockHandle.OldIrql <= 0xFu && v77 >= 2u )
          {
            v78 = KeGetCurrentPrcb();
            v79 = v78->SchedulerAssist;
            v80 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v80 & v79[5]) == 0;
            v79[5] &= v80;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v78);
          }
        }
      }
      __writecr8(v76);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
      v81 = KeGetCurrentThread();
      v97 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
        v82 = MmGetSessionIdEx((__int64)v81->ApcState.Process);
      else
        v82 = -1;
      --v81->SpecialApcDisable;
      v83 = ++v81->AbAllocationRegionCount;
      v84 = ((char)v81->AbEntrySummary | (char)v81->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v86, v84);
        v96[1] = v86;
        if ( v9 )
          goto LABEL_147;
        v85 = (__int64)&v81->LockEntries[v86];
        v84 &= ~(1 << v86);
        if ( (*(_BYTE *)(v85 + 26) & 1) != 0
          && (*(_DWORD *)(v85 + 32) & 1) == 0
          && (*(_QWORD *)(v85 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v85 + 40) == v82 )
        {
          *(_BYTE *)(v85 + 26) &= ~1u;
          if ( *(_QWORD *)(v85 + 32) )
            break;
        }
      }
      if ( !v85 )
      {
LABEL_147:
        if ( (*((_DWORD *)&v81->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v81, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v82, 0LL);
        goto LABEL_154;
      }
      *(_BYTE *)(v85 + 32) |= 2u;
      if ( *(__int64 *)(v85 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v85);
      v87 = *(_DWORD *)(v85 + 88) & 0x1FFFF;
      v88 = *(_DWORD *)(v85 + 88) & 0xFFFE0000;
      *(_BYTE *)(v85 + 25) &= ~1u;
      v97 = v87;
      *(_DWORD *)(v85 + 88) = v88;
      *(_QWORD *)(v85 + 32) = 0LL;
      v89 = (signed __int64)(v85 - (unsigned __int64)v81->LockEntries) / 96;
      if ( v83 == 1 )
        v81->AbEntrySummary |= 1 << v89;
      else
        _InterlockedOr8((volatile signed __int8 *)&v81->AbOrphanedEntrySummary, 1 << v89);
LABEL_154:
      --v81->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v81, (__int64)&CcChangeSharedCacheMapFileLock, &v97);
      v9 = v81->SpecialApcDisable++ == -1;
      if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v81->ApcState.ApcListHead[0].Flink != &v81->152 )
        KiCheckForKernelApcDelivery(v91, v90, v92, v93);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v62, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v65);
        }
      }
    }
    __writecr8(v63);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v30 = KeGetCurrentThread();
    v96[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v68 = MmGetSessionIdEx((__int64)v30->ApcState.Process);
    else
      v68 = -1;
    --v30->SpecialApcDisable;
    v69 = ++v30->AbAllocationRegionCount;
    v70 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v72, v70);
      v95[1] = v72;
      if ( v9 )
        goto LABEL_117;
      v71 = (__int64)&v30->LockEntries[v72];
      v70 &= ~(1 << v72);
      if ( (*(_BYTE *)(v71 + 26) & 1) != 0
        && (*(_DWORD *)(v71 + 32) & 1) == 0
        && (*(_QWORD *)(v71 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v71 + 40) == v68 )
      {
        *(_BYTE *)(v71 + 26) &= ~1u;
        if ( *(_QWORD *)(v71 + 32) )
          break;
      }
    }
    if ( !v71 )
    {
LABEL_117:
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v68, 0LL);
      goto LABEL_124;
    }
    *(_BYTE *)(v71 + 32) |= 2u;
    if ( *(__int64 *)(v71 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v71);
    v73 = *(_DWORD *)(v71 + 88) & 0x1FFFF;
    v74 = *(_DWORD *)(v71 + 88) & 0xFFFE0000;
    *(_BYTE *)(v71 + 25) &= ~1u;
    v96[0] = v73;
    *(_DWORD *)(v71 + 88) = v74;
    *(_QWORD *)(v71 + 32) = 0LL;
    v75 = (signed __int64)(v71 - (unsigned __int64)v30->LockEntries) / 96;
    if ( v69 == 1 )
      v30->AbEntrySummary |= 1 << v75;
    else
      _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v75);
LABEL_124:
    --v30->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v30, (__int64)&CcChangeSharedCacheMapFileLock, v96);
    v9 = v30->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
LABEL_125:
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery(v40, v39, v41, v42);
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v43 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && LockHandle.OldIrql <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v45);
      }
    }
  }
  __writecr8(v43);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
  v48 = KeGetCurrentThread();
  v95[0] = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
    v49 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
  else
    v49 = -1;
  --v48->SpecialApcDisable;
  v50 = ++v48->AbAllocationRegionCount;
  v51 = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v53, v51);
    v94[1] = v53;
    if ( v9 )
      goto LABEL_84;
    v52 = (__int64)&v48->LockEntries[v53];
    v51 &= ~(1 << v53);
    if ( (*(_BYTE *)(v52 + 26) & 1) != 0
      && (*(_DWORD *)(v52 + 32) & 1) == 0
      && (*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v52 + 40) == v49 )
    {
      *(_BYTE *)(v52 + 26) &= ~1u;
      if ( *(_QWORD *)(v52 + 32) )
        break;
    }
  }
  if ( !v52 )
  {
LABEL_84:
    if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v48, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v49, 0LL);
    goto LABEL_91;
  }
  *(_BYTE *)(v52 + 32) |= 2u;
  if ( *(__int64 *)(v52 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v52);
  v54 = *(_DWORD *)(v52 + 88) & 0x1FFFF;
  v55 = *(_DWORD *)(v52 + 88) & 0xFFFE0000;
  *(_BYTE *)(v52 + 25) &= ~1u;
  v95[0] = v54;
  *(_DWORD *)(v52 + 88) = v55;
  *(_QWORD *)(v52 + 32) = 0LL;
  v56 = (signed __int64)(v52 - (unsigned __int64)v48->LockEntries) / 96;
  if ( v50 == 1 )
    v48->AbEntrySummary |= 1 << v56;
  else
    _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v56);
LABEL_91:
  --v48->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v48, (__int64)&CcChangeSharedCacheMapFileLock, v95);
  v9 = v48->SpecialApcDisable++ == -1;
  if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery(v58, v57, v59, v60);
  return 3221225659LL;
}
