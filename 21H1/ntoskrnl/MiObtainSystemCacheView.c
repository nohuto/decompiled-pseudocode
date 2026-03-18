/*
 * XREFs of MiObtainSystemCacheView @ 0x140226830
 * Callers:
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407A44C0 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     RemoveListHeadPte @ 0x14022672C (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x140226F10 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x14022A10C (MiIncrementSystemCacheViewCount.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x1403002B4 (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x140300998 (MiExpandSystemCache.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037CF00 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404E5D10 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x140782A74 (MiInitializeSystemCache.c)
 */

unsigned __int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v3; // r12d
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int64 *v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // r14
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  signed __int64 v12; // rdx
  struct _KTHREAD *v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v27; // rbx
  volatile signed __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r15d
  unsigned int v37; // r14d
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  signed __int64 v40; // r8
  ULONG_PTR v41; // r13
  char v42; // bl
  struct _KTHREAD *v43; // rbx
  __int64 v44; // rdx
  unsigned int v45; // r10d
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // rdx
  ULONG_PTR v52; // r13
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v54; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v56; // r9
  int v57; // eax
  struct _KTHREAD *v58; // rbx
  __int64 v59; // rdx
  unsigned __int8 v60; // si
  unsigned int v61; // r10d
  __int64 v62; // rcx
  __int64 v63; // rdi
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  struct _KTHREAD *v67; // r13
  ULONG_PTR SessionId; // r9
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rdx
  int v72; // eax
  unsigned int v73; // ecx
  __int64 v74; // rdx
  unsigned __int8 v75; // al
  _DWORD *v76; // r9
  __int64 v77; // rdx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v82; // rcx
  struct _KTHREAD *v83; // r13
  __int64 v84; // rdx
  ULONG_PTR v85; // r9
  ULONG_PTR v86; // r10
  unsigned int v87; // r8d
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // eax
  unsigned int v91; // ecx
  unsigned __int8 v92; // r13
  _QWORD *v93; // r13
  unsigned __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 PteLink; // rax
  unsigned __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned __int8 v106; // r14
  _DWORD *v107; // r10
  unsigned __int8 v108; // al
  struct _KPRCB *v109; // r9
  _DWORD *v110; // r8
  int v111; // eax
  unsigned __int8 v112; // al
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // eax
  signed __int32 v116[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v119; // [rsp+40h] [rbp-C0h]
  unsigned int v120; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+50h] [rbp-B0h]
  int v123; // [rsp+54h] [rbp-ACh]
  int v124; // [rsp+58h] [rbp-A8h]
  int v125; // [rsp+5Ch] [rbp-A4h]
  int v126; // [rsp+60h] [rbp-A0h]
  int v127; // [rsp+64h] [rbp-9Ch]
  int v128; // [rsp+68h] [rbp-98h]
  int v129; // [rsp+6Ch] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v131; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v132; // [rsp+90h] [rbp-70h]
  __int64 v133; // [rsp+98h] [rbp-68h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-60h]
  __int64 v135; // [rsp+A8h] [rbp-58h]
  int v136; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v137; // [rsp+B4h] [rbp-4Ch]
  __int16 v138; // [rsp+B6h] [rbp-4Ah]
  __int64 v139; // [rsp+B8h] [rbp-48h]
  __int64 v140; // [rsp+C0h] [rbp-40h]
  __int64 v141; // [rsp+C8h] [rbp-38h]
  _BYTE v142[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v143[12]; // [rsp+170h] [rbp+70h] BYREF

  v131 = 0LL;
  v133 = 0LL;
  v138 = 0;
  memset(v142, 0, sizeof(v142));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v143, 0, sizeof(v143));
  v139 = 20LL;
  CurrentThread = 0LL;
  v136 = 0;
  v3 = 0;
  v137 = 0;
  v140 = 0LL;
  v141 = 0LL;
  v121 = 0LL;
  v119 = 0;
  v120 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = qword_140C4E2E8;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E2E8);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && CurrentIrql <= 0xFu && v54 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v56 = CurrentPrcb->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v46 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v46 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v121 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v52 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1856);
    v67 = KeGetCurrentThread();
    v125 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v67->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v67->SpecialApcDisable;
    AbAllocationRegionCount = ++v67->AbAllocationRegionCount;
    LODWORD(v69) = ((char)v67->AbEntrySummary | (char)v67->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v70, v69);
    v124 = v70;
    if ( v46 )
      goto LABEL_125;
    while ( 1 )
    {
      v71 = (__int64)&v67->LockEntries[v70];
      p_Lock = (_QWORD *)v71;
      v69 = ~(1 << v70) & (unsigned int)v69;
      if ( (*(_BYTE *)(v71 + 26) & 1) != 0
        && (*(_DWORD *)(v71 + 32) & 1) == 0
        && (*(_QWORD *)(v71 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v71 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v71 + 26) &= ~1u;
        if ( *(_QWORD *)(v71 + 32) )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v70, v69);
      v124 = v70;
      if ( v46 )
        goto LABEL_125;
    }
    if ( !v71 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v67->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v67, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v71 + 32) |= 2u;
      if ( *(__int64 *)(v71 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v71, v71, v69);
        v71 = (__int64)p_Lock;
      }
      v72 = *(_DWORD *)(v71 + 88) & 0x1FFFF;
      v73 = *(_DWORD *)(v71 + 88) & 0xFFFE0000;
      *(_BYTE *)(v71 + 25) &= ~1u;
      v125 = v72;
      *(_DWORD *)(v71 + 88) = v73;
      *(_QWORD *)(v71 + 32) = 0LL;
      v74 = (__int64)((unsigned __int128)((v71 - (unsigned __int64)v67->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v75 = 1 << (v74 + (v74 < 0));
      if ( AbAllocationRegionCount == 1 )
        v67->AbEntrySummary |= v75;
      else
        _InterlockedOr8((volatile signed __int8 *)&v67->AbOrphanedEntrySummary, v75);
    }
    --v67->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v67);
    v46 = v67->SpecialApcDisable++ == -1;
    if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v67->ApcState.ApcListHead[0].Flink != &v67->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    CurrentThread = 0LL;
    v121 = 0LL;
    goto LABEL_67;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_67:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v76 = KeGetCurrentPrcb()->SchedulerAssist;
      v76[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E2E8;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E2E8);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v5 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v132 = v5;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache(a1, &v133) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
        {
          v79 = KeGetCurrentPrcb();
          v77 = -1LL << (CurrentIrql + 1);
          v80 = v79->SchedulerAssist;
          v81 = ~(unsigned __int16)v77;
          v46 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v79);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v82 = a1 + 1856;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v82);
        v82 = a1 + 1856;
      }
      v83 = KeGetCurrentThread();
      p_Lock = &v83->Header.Lock;
      v127 = 0;
      if ( (unsigned int)MiGetSystemRegionType(v82) == 1 )
        v85 = (unsigned int)MmGetSessionIdEx(v83->ApcState.Process);
      else
        v85 = 0xFFFFFFFFLL;
      --v83->SpecialApcDisable;
      v86 = (ULONG_PTR)v83;
      AbAllocationRegionCount = ++v83->AbAllocationRegionCount;
      v134 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v87 = ((char)v83->AbEntrySummary | (char)v83->AbOrphanedEntrySummary) ^ 0x3F;
      v46 = !_BitScanReverse((unsigned int *)&v88, v87);
      v126 = v88;
      if ( v46 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v121) = ~(1 << v88) & v87;
        v89 = (__int64)&v83->LockEntries[v88];
        v135 = v89;
        if ( (*(_BYTE *)(v89 + 26) & 1) != 0
          && (*(_DWORD *)(v89 + 32) & 1) == 0
          && (*(_QWORD *)(v89 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v134
          && *(_DWORD *)(v89 + 40) == (_DWORD)v85 )
        {
          *(_BYTE *)(v89 + 26) &= ~1u;
          if ( *(_QWORD *)(v89 + 32) )
            break;
        }
        v87 = (unsigned int)v121;
        v46 = !_BitScanReverse((unsigned int *)&v88, (unsigned int)v121);
        v126 = v88;
        if ( v46 )
          goto LABEL_172;
      }
      if ( !v89 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v83->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v83, a1 + 1856, v85, 0LL);
      }
      else
      {
        *(_BYTE *)(v89 + 32) |= 2u;
        if ( *(__int64 *)(v89 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v89, v84, v89);
          v86 = (ULONG_PTR)p_Lock;
          v89 = v135;
        }
        v90 = *(_DWORD *)(v89 + 88) & 0x1FFFF;
        v91 = *(_DWORD *)(v89 + 88) & 0xFFFE0000;
        *(_BYTE *)(v89 + 25) &= ~1u;
        v127 = v90;
        *(_DWORD *)(v89 + 88) = v91;
        *(_QWORD *)(v89 + 32) = 0LL;
        v92 = 1 << ((char)(v89 - *(_BYTE *)(v86 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v86 + 792) |= v92;
        else
          _InterlockedOr8((volatile signed __int8 *)(v86 + 870), v92);
      }
      --*(_BYTE *)(v86 + 794);
      KiAbThreadRemoveBoosts(v86);
      v93 = p_Lock;
      v46 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v46 && (_QWORD *)v93[19] != v93 + 19 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v121 = 0LL;
    }
    if ( v133 )
      MiReturnSystemVa(v133, v133 + 0x200000, 8LL);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v77, 0LL, &v131) == 1 )
    {
      v94 = v131;
      v6 = ((v131 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v6 + 16));
        if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
        {
          MiInsertTbFlushEntry((__int64)&v136, v94, 64LL, 0);
          MiFlushTbList(&v136);
        }
      }
      v97 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v6, v95) )
      {
        if ( (unsigned int)MiPteHasShadow(v99, v98) )
        {
          if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
            v97 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v97;
          MiWritePteShadow(v6, v97);
LABEL_179:
          v100 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v6 + 8, v98) )
          {
            if ( (unsigned int)MiPteHasShadow(v102, v101) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                v100 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 8) = v100;
              MiWritePteShadow(v6 + 8, v100);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v100 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 8) = v100;
LABEL_189:
          v103 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v6 + 16, v101) )
          {
            if ( (unsigned int)MiPteHasShadow(v105, v104) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                v103 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 16) = v103;
              MiWritePteShadow(v6 + 16, v103);
              return v6;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v103 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 16) = v103;
          return v6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v97 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v97;
      goto LABEL_179;
    }
    v106 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v106 <= 0xFu )
    {
      v107 = KeGetCurrentPrcb()->SchedulerAssist;
      v107[5] |= (-1 << (v106 + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E2E8;
    CurrentIrql = v106;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E2E8);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v108 = KeGetCurrentIrql();
          if ( v108 <= 0xFu && v106 <= 0xFu && v108 >= 2u )
          {
            v109 = KeGetCurrentPrcb();
            v110 = v109->SchedulerAssist;
            v111 = ~(unsigned __int16)(-1LL << (v106 + 1));
            v46 = (v111 & v110[5]) == 0;
            v110[5] &= v111;
            if ( v46 )
              KiRemoveSystemWorkPriorityKick(v109);
          }
        }
      }
      __writecr8(v106);
      return 0LL;
    }
LABEL_5:
    v6 = (unsigned __int64)RemoveListHeadPte((__int64 *)(a1 + 1784));
    MiIncrementSystemCacheViewCount((__int64)(v6 << 25) >> 16);
    v7 = (unsigned __int64 *)(v6 + 24);
    v8 = MiGetPteLink(*(_QWORD *)(v6 + 24));
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v3 = 1;
      }
      else
      {
        _InterlockedOr(v116, 0);
        v9 = MiGetPteLink(*(_QWORD *)(v6 + 16));
        v11 = (v10 - v9) & 0xFFFFF;
        if ( v11 <= 2 && ((v9 & 1) != 0 || v11 < 2) )
        {
          p_Lock = (_QWORD *)(v6 + 24);
          v27 = v6;
          v28 = v132;
          do
          {
            if ( HIDWORD(v139) )
            {
              v29 = v3++;
              v143[v29] = v27;
            }
            v131 = (__int64)(v27 << 25) >> 16;
            MiInsertTbFlushEntry((__int64)&v136, v131, 64LL, 0);
            v30 = *p_Lock;
            if ( qword_140C4DE80 )
            {
              if ( (v30 & 0x10) != 0 )
                LODWORD(v30) = v30 & 0xFFFFFFEF;
              else
                LODWORD(v30) = ~(_DWORD)qword_140C4DE80 & v30;
            }
            v31 = MiSwizzleInvalidPte(v30 & 0xFFFFFFF | 0x10000000);
            *v32 = v31;
            if ( v3 == 12 )
              break;
            v33 = MiGetPteLink(*(_QWORD *)v27);
            v34 = *(_QWORD *)(a1 + 1800);
            if ( v33 == ((__int64)v28 - v34) >> 3 )
              break;
            v27 = v34 + 8 * v33;
            v35 = *(_QWORD *)(v27 + 24);
            p_Lock = (_QWORD *)(v27 + 24);
          }
          while ( MiGetPteLink(v35) == 2 );
          v119 = v3;
          v7 = (unsigned __int64 *)(v6 + 24);
          v3 = v120;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v139) )
    {
      MiFlushTbList(&v136);
      v36 = v119;
      v120 = 0;
      if ( v119 )
      {
        v37 = v120;
        do
        {
          v132 = (volatile signed __int64 *)(v143[v37] + 24LL);
          v38 = MI_READ_PTE_LOCK_FREE(v132);
          v39 = v38;
          if ( qword_140C4DE80 )
          {
            if ( (v38 & 0x10) != 0 )
              v39 = v38 & 0xFFFFFFEF;
            else
              v39 = v38 & ~(_DWORD)qword_140C4DE80;
          }
          v12 = MiSwizzleInvalidPte(v39 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v132, v12, v40);
          ++v37;
        }
        while ( v37 != v36 );
        v7 = (unsigned __int64 *)(v6 + 24);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v112 = KeGetCurrentIrql();
        if ( v112 <= 0xFu && CurrentIrql <= 0xFu && v112 >= 2u )
        {
          v113 = KeGetCurrentPrcb();
          v12 = -1LL << (CurrentIrql + 1);
          v114 = v113->SchedulerAssist;
          v115 = ~(unsigned __int16)v12;
          v46 = (v115 & v114[5]) == 0;
          v114[5] &= v115;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v113);
        }
      }
    }
    __writecr8(CurrentIrql);
    v13 = v121;
    if ( v121 )
    {
      v41 = a1 + 1856;
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v42 & 2) != 0 && (v42 & 4) == 0 )
        ExfTryToWakePushLock(a1 + 1856);
      v43 = KeGetCurrentThread();
      v129 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v44 = (unsigned int)MmGetSessionIdEx(v43->ApcState.Process);
      else
        v44 = 0xFFFFFFFFLL;
      --v43->SpecialApcDisable;
      ++v43->AbAllocationRegionCount;
      v45 = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v43->AbAllocationRegionCount;
      v46 = !_BitScanReverse((unsigned int *)&v47, v45);
      v128 = v47;
      if ( v46 )
        goto LABEL_52;
      while ( 1 )
      {
        v48 = (__int64)&v43->LockEntries[v47];
        v45 &= ~(1 << v47);
        if ( (*(_BYTE *)(v48 + 26) & 1) != 0
          && (*(_DWORD *)(v48 + 32) & 1) == 0
          && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v41 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v48 + 40) == (_DWORD)v44 )
        {
          *(_BYTE *)(v48 + 26) &= ~1u;
          if ( *(_QWORD *)(v48 + 32) )
            break;
        }
        v46 = !_BitScanReverse((unsigned int *)&v47, v45);
        v128 = v47;
        if ( v46 )
          goto LABEL_52;
      }
      if ( !v48 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v43, v41, (unsigned int)v44, 0LL);
      }
      else
      {
        *(_BYTE *)(v48 + 32) |= 2u;
        if ( *(__int64 *)(v48 + 32) < 0 )
          KiAbEntryRemoveFromTree(v48, v44, 1LL);
        v49 = *(_DWORD *)(v48 + 88) & 0x1FFFF;
        v50 = *(_DWORD *)(v48 + 88) & 0xFFFE0000;
        *(_BYTE *)(v48 + 25) &= ~1u;
        v129 = v49;
        *(_DWORD *)(v48 + 88) = v50;
        *(_QWORD *)(v48 + 32) = 0LL;
        v51 = (signed __int64)(v48 - (unsigned __int64)v43->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v43->AbEntrySummary |= 1 << v51;
        else
          _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, 1 << v51);
      }
      --v43->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v43);
      v46 = v43->SpecialApcDisable++ == -1;
      if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(v13);
    }
    if ( v3 == 1 )
      MiWaitForSystemCacheViewFlush(v6);
    v14 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v6, v12) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15) )
      {
        if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
          v14 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v14;
        MiWritePteShadow(v6, v14);
LABEL_15:
        v17 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v6 + 8, v15) )
        {
          if ( (unsigned int)MiPteHasShadow(v19, v18) )
          {
            if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
              v17 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v6 + 8) = v17;
            MiWritePteShadow(v6 + 8, v17);
LABEL_17:
            v20 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v6 + 16, v18) )
            {
              if ( (unsigned int)MiPteHasShadow(v22, v21) )
              {
                if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                  v20 = ZeroPte | 0x8000000000000000uLL;
                *(_QWORD *)(v6 + 16) = v20;
                MiWritePteShadow(v6 + 16, v20);
                goto LABEL_19;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v20 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)(v6 + 16) = v20;
LABEL_19:
            v23 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v7, v21) )
            {
              if ( (unsigned int)MiPteHasShadow(v25, v24) )
              {
                if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                  v23 = ZeroPte | 0x8000000000000000uLL;
                *v7 = v23;
                MiWritePteShadow(v7, v23);
                return v6;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v23 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v7 = v23;
            return v6;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v17 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v6 + 8) = v17;
        goto LABEL_17;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v14 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v14;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1856);
  v58 = KeGetCurrentThread();
  v123 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v59 = (unsigned int)MmGetSessionIdEx(v58->ApcState.Process);
  else
    v59 = 0xFFFFFFFFLL;
  --v58->SpecialApcDisable;
  v60 = ++v58->AbAllocationRegionCount;
  v61 = ((char)v58->AbEntrySummary | (char)v58->AbOrphanedEntrySummary) ^ 0x3F;
  v46 = !_BitScanReverse((unsigned int *)&v62, v61);
  v122 = v62;
  if ( v46 )
    goto LABEL_101;
  while ( 1 )
  {
    v63 = (__int64)&v58->LockEntries[v62];
    v61 &= ~(1 << v62);
    if ( (*(_BYTE *)(v63 + 26) & 1) != 0
      && (*(_DWORD *)(v63 + 32) & 1) == 0
      && (*(_QWORD *)(v63 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v63 + 40) == (_DWORD)v59 )
    {
      *(_BYTE *)(v63 + 26) &= ~1u;
      if ( *(_QWORD *)(v63 + 32) )
        break;
    }
    v46 = !_BitScanReverse((unsigned int *)&v62, v61);
    v122 = v62;
    if ( v46 )
      goto LABEL_101;
  }
  if ( !v63 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v58->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v58, v52, (unsigned int)v59, 0LL);
  }
  else
  {
    *(_BYTE *)(v63 + 32) |= 2u;
    if ( *(__int64 *)(v63 + 32) < 0 )
      KiAbEntryRemoveFromTree(v63, v59, 1LL);
    v64 = *(_DWORD *)(v63 + 88) & 0x1FFFF;
    v65 = *(_DWORD *)(v63 + 88) & 0xFFFE0000;
    *(_BYTE *)(v63 + 25) &= ~1u;
    v123 = v64;
    *(_DWORD *)(v63 + 88) = v65;
    *(_QWORD *)(v63 + 32) = 0LL;
    v66 = (signed __int64)(v63 - (unsigned __int64)v58->LockEntries) / 96;
    if ( v60 == 1 )
      v58->AbEntrySummary |= 1 << v66;
    else
      _InterlockedOr8((volatile signed __int8 *)&v58->AbOrphanedEntrySummary, 1 << v66);
  }
  --v58->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v58);
  v46 = v58->SpecialApcDisable++ == -1;
  if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
