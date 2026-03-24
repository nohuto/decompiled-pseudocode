/*
 * XREFs of CcChangeBackingFileObject @ 0x1404E8AE8
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140394E90 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x1402F6E80 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140342370 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  __int64 v12; // r9
  unsigned __int8 AbAllocationRegionCount; // r15
  unsigned int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  struct _KTHREAD *v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // r9
  unsigned __int8 v31; // r15
  unsigned int v32; // r8d
  __int64 v33; // rsi
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  struct _KTHREAD *v44; // rdi
  unsigned int v45; // edx
  __int64 v46; // r9
  unsigned __int8 v47; // r15
  unsigned int v48; // r8d
  __int64 v49; // rsi
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  volatile __int64 *v55; // rcx
  _QWORD *v56; // r15
  unsigned __int64 v57; // rdi
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // r9
  unsigned __int8 v64; // r15
  unsigned int v65; // r8d
  __int64 v66; // rsi
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  struct _KTHREAD *v76; // rdi
  unsigned int v77; // edx
  __int64 v78; // r9
  unsigned __int8 v79; // r12
  unsigned int v80; // r8d
  __int64 v81; // rsi
  __int64 v82; // rcx
  int v83; // eax
  unsigned int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  _DWORD v87[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v88[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v89[2]; // [rsp+40h] [rbp-30h] BYREF
  int v90; // [rsp+48h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v92; // [rsp+C0h] [rbp+50h] BYREF
  int v93; // [rsp+C8h] [rbp+58h]

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
    v92 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    ++CurrentThread->AbAllocationRegionCount;
    v12 = 0x7FFFFFFFFFFFFFFCLL;
    AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
    v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v16, v14);
      if ( v9 )
        goto LABEL_22;
      v15 = (__int64)&CurrentThread->LockEntries[v16];
      v14 &= ~(1 << v16);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
    }
    if ( !v15 )
    {
LABEL_22:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, SessionId, 0LL);
      goto LABEL_29;
    }
    *(_BYTE *)(v15 + 32) |= 2u;
    if ( *(__int64 *)(v15 + 32) < 0 )
      KiAbEntryRemoveFromTree(v15);
    v17 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
    v18 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
    *(_BYTE *)(v15 + 25) &= ~1u;
    v92 = v17;
    *(_DWORD *)(v15 + 88) = v18;
    *(_QWORD *)(v15 + 32) = 0LL;
    v19 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( AbAllocationRegionCount == 1 )
      CurrentThread->AbEntrySummary |= 1 << v19;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
LABEL_29:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(
      (ULONG_PTR)CurrentThread,
      (__int64)&CcChangeSharedCacheMapFileLock,
      (__int64)&v92,
      (_DWORD *)v12);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20);
    return 3221225712LL;
  }
  v22 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v22 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v23 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
    }
    __writecr8(v23);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v28 = KeGetCurrentThread();
    v87[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v29 = MmGetSessionIdEx((__int64)v28->ApcState.Process);
    else
      v29 = -1;
    --v28->SpecialApcDisable;
    ++v28->AbAllocationRegionCount;
    v30 = 0x7FFFFFFFFFFFFFFCLL;
    v31 = v28->AbAllocationRegionCount;
    v32 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v34, v32);
      v93 = v34;
      if ( v9 )
        goto LABEL_54;
      v33 = (__int64)&v28->LockEntries[v34];
      v32 &= ~(1 << v34);
      if ( (*(_BYTE *)(v33 + 26) & 1) != 0
        && (*(_DWORD *)(v33 + 32) & 1) == 0
        && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v33 + 40) == v29 )
      {
        *(_BYTE *)(v33 + 26) &= ~1u;
        if ( *(_QWORD *)(v33 + 32) )
          break;
      }
    }
    if ( !v33 )
    {
LABEL_54:
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v29, 0LL);
      goto LABEL_61;
    }
    *(_BYTE *)(v33 + 32) |= 2u;
    if ( *(__int64 *)(v33 + 32) < 0 )
      KiAbEntryRemoveFromTree(v33);
    v35 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
    v36 = *(_DWORD *)(v33 + 88) & 0xFFFE0000;
    *(_BYTE *)(v33 + 25) &= ~1u;
    v87[0] = v35;
    *(_DWORD *)(v33 + 88) = v36;
    *(_QWORD *)(v33 + 32) = 0LL;
    v37 = (signed __int64)(v33 - (unsigned __int64)v28->LockEntries) / 96;
    if ( v31 == 1 )
      v28->AbEntrySummary |= 1 << v37;
    else
      _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
LABEL_61:
    --v28->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v28, (__int64)&CcChangeSharedCacheMapFileLock, (__int64)v87, (_DWORD *)v30);
    v9 = v28->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
    goto LABEL_125;
  }
  if ( (*(_DWORD *)(v22 + 152) & 0x100000) == 0 )
  {
    v55 = (volatile __int64 *)(v22 + 96);
    v56 = (_QWORD *)(*v55 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v56 == a1 )
    {
      ObFastReplaceObject(v55, (ULONG_PTR)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v71 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v72 = KeGetCurrentIrql();
          if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
          {
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v75 & v74[5]) == 0;
            v74[5] &= v75;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v73);
          }
        }
      }
      __writecr8(v71);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
      v76 = KeGetCurrentThread();
      v90 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
        v77 = MmGetSessionIdEx((__int64)v76->ApcState.Process);
      else
        v77 = -1;
      --v76->SpecialApcDisable;
      ++v76->AbAllocationRegionCount;
      v78 = 0x7FFFFFFFFFFFFFFCLL;
      v79 = v76->AbAllocationRegionCount;
      v80 = ((char)v76->AbEntrySummary | (char)v76->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v82, v80);
        v89[1] = v82;
        if ( v9 )
          goto LABEL_147;
        v81 = (__int64)&v76->LockEntries[v82];
        v80 &= ~(1 << v82);
        if ( (*(_BYTE *)(v81 + 26) & 1) != 0
          && (*(_DWORD *)(v81 + 32) & 1) == 0
          && (*(_QWORD *)(v81 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v81 + 40) == v77 )
        {
          *(_BYTE *)(v81 + 26) &= ~1u;
          if ( *(_QWORD *)(v81 + 32) )
            break;
        }
      }
      if ( !v81 )
      {
LABEL_147:
        if ( (*((_DWORD *)&v76->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v76, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v77, 0LL);
        goto LABEL_154;
      }
      *(_BYTE *)(v81 + 32) |= 2u;
      if ( *(__int64 *)(v81 + 32) < 0 )
        KiAbEntryRemoveFromTree(v81);
      v83 = *(_DWORD *)(v81 + 88) & 0x1FFFF;
      v84 = *(_DWORD *)(v81 + 88) & 0xFFFE0000;
      *(_BYTE *)(v81 + 25) &= ~1u;
      v90 = v83;
      *(_DWORD *)(v81 + 88) = v84;
      *(_QWORD *)(v81 + 32) = 0LL;
      v85 = (signed __int64)(v81 - (unsigned __int64)v76->LockEntries) / 96;
      if ( v79 == 1 )
        v76->AbEntrySummary |= 1 << v85;
      else
        _InterlockedOr8((volatile signed __int8 *)&v76->AbOrphanedEntrySummary, 1 << v85);
LABEL_154:
      --v76->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v76, (__int64)&CcChangeSharedCacheMapFileLock, (__int64)&v90, (_DWORD *)v78);
      v9 = v76->SpecialApcDisable++ == -1;
      if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
        KiCheckForKernelApcDelivery(v86);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v56, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v57 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v59);
        }
      }
    }
    __writecr8(v57);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v28 = KeGetCurrentThread();
    v89[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v62 = MmGetSessionIdEx((__int64)v28->ApcState.Process);
    else
      v62 = -1;
    --v28->SpecialApcDisable;
    ++v28->AbAllocationRegionCount;
    v63 = 0x7FFFFFFFFFFFFFFCLL;
    v64 = v28->AbAllocationRegionCount;
    v65 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v67, v65);
      v88[1] = v67;
      if ( v9 )
        goto LABEL_117;
      v66 = (__int64)&v28->LockEntries[v67];
      v65 &= ~(1 << v67);
      if ( (*(_BYTE *)(v66 + 26) & 1) != 0
        && (*(_DWORD *)(v66 + 32) & 1) == 0
        && (*(_QWORD *)(v66 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v66 + 40) == v62 )
      {
        *(_BYTE *)(v66 + 26) &= ~1u;
        if ( *(_QWORD *)(v66 + 32) )
          break;
      }
    }
    if ( !v66 )
    {
LABEL_117:
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v62, 0LL);
      goto LABEL_124;
    }
    *(_BYTE *)(v66 + 32) |= 2u;
    if ( *(__int64 *)(v66 + 32) < 0 )
      KiAbEntryRemoveFromTree(v66);
    v68 = *(_DWORD *)(v66 + 88) & 0x1FFFF;
    v69 = *(_DWORD *)(v66 + 88) & 0xFFFE0000;
    *(_BYTE *)(v66 + 25) &= ~1u;
    v89[0] = v68;
    *(_DWORD *)(v66 + 88) = v69;
    *(_QWORD *)(v66 + 32) = 0LL;
    v70 = (signed __int64)(v66 - (unsigned __int64)v28->LockEntries) / 96;
    if ( v64 == 1 )
      v28->AbEntrySummary |= 1 << v70;
    else
      _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v70);
LABEL_124:
    --v28->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v28, (__int64)&CcChangeSharedCacheMapFileLock, (__int64)v89, (_DWORD *)v63);
    v9 = v28->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
LABEL_125:
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
      KiCheckForKernelApcDelivery(v38);
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v39 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v41);
      }
    }
  }
  __writecr8(v39);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
  v44 = KeGetCurrentThread();
  v88[0] = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
    v45 = MmGetSessionIdEx((__int64)v44->ApcState.Process);
  else
    v45 = -1;
  --v44->SpecialApcDisable;
  ++v44->AbAllocationRegionCount;
  v46 = 0x7FFFFFFFFFFFFFFCLL;
  v47 = v44->AbAllocationRegionCount;
  v48 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v50, v48);
    v87[1] = v50;
    if ( v9 )
      goto LABEL_84;
    v49 = (__int64)&v44->LockEntries[v50];
    v48 &= ~(1 << v50);
    if ( (*(_BYTE *)(v49 + 26) & 1) != 0
      && (*(_DWORD *)(v49 + 32) & 1) == 0
      && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v49 + 40) == v45 )
    {
      *(_BYTE *)(v49 + 26) &= ~1u;
      if ( *(_QWORD *)(v49 + 32) )
        break;
    }
  }
  if ( !v49 )
  {
LABEL_84:
    if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v44, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v45, 0LL);
    goto LABEL_91;
  }
  *(_BYTE *)(v49 + 32) |= 2u;
  if ( *(__int64 *)(v49 + 32) < 0 )
    KiAbEntryRemoveFromTree(v49);
  v51 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
  v52 = *(_DWORD *)(v49 + 88) & 0xFFFE0000;
  *(_BYTE *)(v49 + 25) &= ~1u;
  v88[0] = v51;
  *(_DWORD *)(v49 + 88) = v52;
  *(_QWORD *)(v49 + 32) = 0LL;
  v53 = (signed __int64)(v49 - (unsigned __int64)v44->LockEntries) / 96;
  if ( v47 == 1 )
    v44->AbEntrySummary |= 1 << v53;
  else
    _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v53);
LABEL_91:
  --v44->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v44, (__int64)&CcChangeSharedCacheMapFileLock, (__int64)v88, (_DWORD *)v46);
  v9 = v44->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
    KiCheckForKernelApcDelivery(v54);
  return 3221225659LL;
}
