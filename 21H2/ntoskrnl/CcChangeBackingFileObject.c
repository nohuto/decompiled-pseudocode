/*
 * XREFs of CcChangeBackingFileObject @ 0x1404E8D28
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140394FE0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  struct _KTHREAD *v26; // rdi
  unsigned int v27; // edx
  unsigned __int8 v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rsi
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _KTHREAD *v40; // rdi
  unsigned int v41; // edx
  unsigned __int8 v42; // r15
  unsigned int v43; // r8d
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rdx
  volatile __int64 *v49; // rcx
  _QWORD *v50; // r15
  unsigned __int64 v51; // rdi
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned int v56; // edx
  unsigned __int8 v57; // r15
  unsigned int v58; // r8d
  __int64 v59; // rsi
  __int64 v60; // rcx
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  unsigned __int64 v64; // rdi
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  struct _KTHREAD *v69; // rdi
  unsigned int v70; // edx
  unsigned __int8 v71; // r12
  unsigned int v72; // r8d
  __int64 v73; // rsi
  __int64 v74; // rcx
  int v75; // eax
  unsigned int v76; // ecx
  __int64 v77; // rdx
  unsigned int v78[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v79[2]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v80[2]; // [rsp+40h] [rbp-30h] BYREF
  int v81; // [rsp+48h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v83; // [rsp+C0h] [rbp+50h] BYREF
  int v84; // [rsp+C8h] [rbp+58h]

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
    v83 = 0;
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
    v83 = v16;
    *(_DWORD *)(v14 + 88) = v17;
    *(_QWORD *)(v14 + 32) = 0LL;
    v18 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v12 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_29:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&CcChangeSharedCacheMapFileLock, (unsigned int *)&v83);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225712LL;
  }
  v20 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v20 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v21 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v23);
        }
      }
    }
    __writecr8(v21);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v26 = KeGetCurrentThread();
    v78[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v27 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      v27 = -1;
    --v26->SpecialApcDisable;
    v28 = ++v26->AbAllocationRegionCount;
    v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v31, v29);
      v84 = v31;
      if ( v9 )
        goto LABEL_54;
      v30 = (__int64)&v26->LockEntries[v31];
      v29 &= ~(1 << v31);
      if ( (*(_BYTE *)(v30 + 26) & 1) != 0
        && (*(_DWORD *)(v30 + 32) & 1) == 0
        && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v30 + 40) == v27 )
      {
        *(_BYTE *)(v30 + 26) &= ~1u;
        if ( *(_QWORD *)(v30 + 32) )
          break;
      }
    }
    if ( !v30 )
    {
LABEL_54:
      if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v27, 0LL);
      goto LABEL_61;
    }
    *(_BYTE *)(v30 + 32) |= 2u;
    if ( *(__int64 *)(v30 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
    v32 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
    v33 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
    *(_BYTE *)(v30 + 25) &= ~1u;
    v78[0] = v32;
    *(_DWORD *)(v30 + 88) = v33;
    *(_QWORD *)(v30 + 32) = 0LL;
    v34 = (signed __int64)(v30 - (unsigned __int64)v26->LockEntries) / 96;
    if ( v28 == 1 )
      v26->AbEntrySummary |= 1 << v34;
    else
      _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v34);
LABEL_61:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, (__int64)&CcChangeSharedCacheMapFileLock, v78);
    v9 = v26->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
    goto LABEL_125;
  }
  if ( (*(_DWORD *)(v20 + 152) & 0x100000) == 0 )
  {
    v49 = (volatile __int64 *)(v20 + 96);
    v50 = (_QWORD *)(*v49 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v50 == a1 )
    {
      ObFastReplaceObject(v49, (ULONG_PTR)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v64 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v65 = KeGetCurrentIrql();
          if ( v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
          {
            v66 = KeGetCurrentPrcb();
            v67 = v66->SchedulerAssist;
            v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v68 & v67[5]) == 0;
            v67[5] &= v68;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v66);
          }
        }
      }
      __writecr8(v64);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
      v69 = KeGetCurrentThread();
      v81 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
        v70 = MmGetSessionIdEx((__int64)v69->ApcState.Process);
      else
        v70 = -1;
      --v69->SpecialApcDisable;
      v71 = ++v69->AbAllocationRegionCount;
      v72 = ((char)v69->AbEntrySummary | (char)v69->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v74, v72);
        v80[1] = v74;
        if ( v9 )
          goto LABEL_147;
        v73 = (__int64)&v69->LockEntries[v74];
        v72 &= ~(1 << v74);
        if ( (*(_BYTE *)(v73 + 26) & 1) != 0
          && (*(_DWORD *)(v73 + 32) & 1) == 0
          && (*(_QWORD *)(v73 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v73 + 40) == v70 )
        {
          *(_BYTE *)(v73 + 26) &= ~1u;
          if ( *(_QWORD *)(v73 + 32) )
            break;
        }
      }
      if ( !v73 )
      {
LABEL_147:
        if ( (*((_DWORD *)&v69->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v69, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v70, 0LL);
        goto LABEL_154;
      }
      *(_BYTE *)(v73 + 32) |= 2u;
      if ( *(__int64 *)(v73 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v73);
      v75 = *(_DWORD *)(v73 + 88) & 0x1FFFF;
      v76 = *(_DWORD *)(v73 + 88) & 0xFFFE0000;
      *(_BYTE *)(v73 + 25) &= ~1u;
      v81 = v75;
      *(_DWORD *)(v73 + 88) = v76;
      *(_QWORD *)(v73 + 32) = 0LL;
      v77 = (signed __int64)(v73 - (unsigned __int64)v69->LockEntries) / 96;
      if ( v71 == 1 )
        v69->AbEntrySummary |= 1 << v77;
      else
        _InterlockedOr8((volatile signed __int8 *)&v69->AbOrphanedEntrySummary, 1 << v77);
LABEL_154:
      --v69->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v69, (__int64)&CcChangeSharedCacheMapFileLock, (unsigned int *)&v81);
      v9 = v69->SpecialApcDisable++ == -1;
      if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
        KiCheckForKernelApcDelivery();
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v50, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v51 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
      }
    }
    __writecr8(v51);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v26 = KeGetCurrentThread();
    v80[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v56 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      v56 = -1;
    --v26->SpecialApcDisable;
    v57 = ++v26->AbAllocationRegionCount;
    v58 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v60, v58);
      v79[1] = v60;
      if ( v9 )
        goto LABEL_117;
      v59 = (__int64)&v26->LockEntries[v60];
      v58 &= ~(1 << v60);
      if ( (*(_BYTE *)(v59 + 26) & 1) != 0
        && (*(_DWORD *)(v59 + 32) & 1) == 0
        && (*(_QWORD *)(v59 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v59 + 40) == v56 )
      {
        *(_BYTE *)(v59 + 26) &= ~1u;
        if ( *(_QWORD *)(v59 + 32) )
          break;
      }
    }
    if ( !v59 )
    {
LABEL_117:
      if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v56, 0LL);
      goto LABEL_124;
    }
    *(_BYTE *)(v59 + 32) |= 2u;
    if ( *(__int64 *)(v59 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v59);
    v61 = *(_DWORD *)(v59 + 88) & 0x1FFFF;
    v62 = *(_DWORD *)(v59 + 88) & 0xFFFE0000;
    *(_BYTE *)(v59 + 25) &= ~1u;
    v80[0] = v61;
    *(_DWORD *)(v59 + 88) = v62;
    *(_QWORD *)(v59 + 32) = 0LL;
    v63 = (signed __int64)(v59 - (unsigned __int64)v26->LockEntries) / 96;
    if ( v57 == 1 )
      v26->AbEntrySummary |= 1 << v63;
    else
      _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v63);
LABEL_124:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, (__int64)&CcChangeSharedCacheMapFileLock, v80);
    v9 = v26->SpecialApcDisable++ == -1;
    if ( !v9 )
      return 0LL;
LABEL_125:
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v37);
      }
    }
  }
  __writecr8(v35);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
  v40 = KeGetCurrentThread();
  v79[0] = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
    v41 = MmGetSessionIdEx((__int64)v40->ApcState.Process);
  else
    v41 = -1;
  --v40->SpecialApcDisable;
  v42 = ++v40->AbAllocationRegionCount;
  v43 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v45, v43);
    v78[1] = v45;
    if ( v9 )
      goto LABEL_84;
    v44 = (__int64)&v40->LockEntries[v45];
    v43 &= ~(1 << v45);
    if ( (*(_BYTE *)(v44 + 26) & 1) != 0
      && (*(_DWORD *)(v44 + 32) & 1) == 0
      && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v44 + 40) == v41 )
    {
      *(_BYTE *)(v44 + 26) &= ~1u;
      if ( *(_QWORD *)(v44 + 32) )
        break;
    }
  }
  if ( !v44 )
  {
LABEL_84:
    if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v40, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v41, 0LL);
    goto LABEL_91;
  }
  *(_BYTE *)(v44 + 32) |= 2u;
  if ( *(__int64 *)(v44 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
  v46 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
  v47 = *(_DWORD *)(v44 + 88) & 0xFFFE0000;
  *(_BYTE *)(v44 + 25) &= ~1u;
  v79[0] = v46;
  *(_DWORD *)(v44 + 88) = v47;
  *(_QWORD *)(v44 + 32) = 0LL;
  v48 = (signed __int64)(v44 - (unsigned __int64)v40->LockEntries) / 96;
  if ( v42 == 1 )
    v40->AbEntrySummary |= 1 << v48;
  else
    _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v48);
LABEL_91:
  --v40->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v40, (__int64)&CcChangeSharedCacheMapFileLock, v79);
  v9 = v40->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
    KiCheckForKernelApcDelivery();
  return 3221225659LL;
}
