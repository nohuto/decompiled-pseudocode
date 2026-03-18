/*
 * XREFs of MiObtainSystemCacheView @ 0x140299AE0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407B7CE4 (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     RemoveListHeadPte @ 0x1402999D4 (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x14029A1C0 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x14029A1F0 (MiIncrementSystemCacheViewCount.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402E9F34 (MiCompareTbFlushTimeStamp.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiExpandSystemCache @ 0x14031DC84 (MiExpandSystemCache.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6F0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404E9850 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x140796108 (MiInitializeSystemCache.c)
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
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v35; // rbx
  volatile signed __int64 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r15d
  unsigned int v45; // r14d
  unsigned int v46; // r8d
  unsigned int v47; // ecx
  signed __int64 v48; // rdx
  signed __int64 v49; // r8
  ULONG_PTR v50; // r13
  char v51; // bl
  struct _KTHREAD *v52; // rbx
  __int64 v53; // rdx
  unsigned int v54; // r10d
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rdx
  ULONG_PTR v65; // r13
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v67; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v69; // r9
  int v70; // eax
  struct _KTHREAD *v71; // rbx
  __int64 v72; // rdx
  unsigned __int8 v73; // si
  unsigned int v74; // r10d
  __int64 v75; // rcx
  __int64 v76; // rdi
  int v77; // eax
  unsigned int v78; // ecx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _KTHREAD *v84; // r13
  ULONG_PTR SessionId; // r9
  __int64 v86; // r10
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // rdx
  unsigned __int8 v93; // al
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _DWORD *v98; // r9
  __int64 v99; // rdx
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r10
  _DWORD *v102; // r9
  int v103; // eax
  volatile signed __int64 *v104; // rcx
  struct _KTHREAD *v105; // r13
  __int64 v106; // rdx
  ULONG_PTR v107; // r9
  ULONG_PTR v108; // r10
  __int64 v109; // r11
  unsigned int v110; // r8d
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // eax
  unsigned int v114; // ecx
  unsigned __int8 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  _QWORD *v120; // r13
  unsigned __int64 v121; // rbx
  __int64 PteLink; // rax
  __int64 v123; // rdx
  unsigned __int64 v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned __int64 v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  unsigned __int8 v139; // r14
  _DWORD *v140; // r10
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r9
  _DWORD *v143; // r8
  int v144; // eax
  unsigned __int8 v145; // al
  struct _KPRCB *v146; // r10
  _DWORD *v147; // r9
  int v148; // eax
  signed __int32 v149[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v152; // [rsp+40h] [rbp-C0h]
  unsigned int v153; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v154; // [rsp+48h] [rbp-B8h]
  int v155; // [rsp+50h] [rbp-B0h]
  int v156; // [rsp+54h] [rbp-ACh] BYREF
  int v157; // [rsp+58h] [rbp-A8h]
  int v158; // [rsp+5Ch] [rbp-A4h] BYREF
  int v159; // [rsp+60h] [rbp-A0h]
  int v160; // [rsp+64h] [rbp-9Ch] BYREF
  int v161; // [rsp+68h] [rbp-98h]
  int v162; // [rsp+6Ch] [rbp-94h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v164; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v165; // [rsp+90h] [rbp-70h]
  unsigned __int64 v166; // [rsp+98h] [rbp-68h] BYREF
  __int64 v167; // [rsp+A0h] [rbp-60h]
  __int64 v168; // [rsp+A8h] [rbp-58h]
  int v169; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v170; // [rsp+B4h] [rbp-4Ch]
  __int16 v171; // [rsp+B6h] [rbp-4Ah]
  __int64 v172; // [rsp+B8h] [rbp-48h]
  __int64 v173; // [rsp+C0h] [rbp-40h]
  __int64 v174; // [rsp+C8h] [rbp-38h]
  _BYTE v175[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v176[12]; // [rsp+170h] [rbp+70h] BYREF

  v164 = 0LL;
  v166 = 0LL;
  v171 = 0;
  memset(v175, 0, sizeof(v175));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v176, 0, sizeof(v176));
  v172 = 20LL;
  CurrentThread = 0LL;
  v169 = 0;
  v3 = 0;
  v170 = 0;
  v173 = 0LL;
  v174 = 0LL;
  v154 = 0LL;
  v152 = 0;
  v153 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = qword_140C4E228;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E228);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v67 = KeGetCurrentIrql();
      if ( v67 <= 0xFu && CurrentIrql <= 0xFu && v67 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v69 = CurrentPrcb->SchedulerAssist;
        v70 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v55 = (v70 & v69[5]) == 0;
        v69[5] &= v70;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v154 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v65 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v65, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
    v84 = KeGetCurrentThread();
    v158 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v84->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v84->SpecialApcDisable;
    ++v84->AbAllocationRegionCount;
    v86 = a1 + 1856;
    AbAllocationRegionCount = v84->AbAllocationRegionCount;
    LODWORD(v87) = ((char)v84->AbEntrySummary | (char)v84->AbOrphanedEntrySummary) ^ 0x3F;
    v55 = !_BitScanReverse((unsigned int *)&v88, v87);
    v157 = v88;
    if ( v55 )
      goto LABEL_125;
    while ( 1 )
    {
      v89 = (__int64)&v84->LockEntries[v88];
      p_Lock = (_QWORD *)v89;
      v87 = ~(1 << v88) & (unsigned int)v87;
      if ( (*(_BYTE *)(v89 + 26) & 1) != 0
        && (*(_DWORD *)(v89 + 32) & 1) == 0
        && (*(_QWORD *)(v89 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v89 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v89 + 26) &= ~1u;
        if ( *(_QWORD *)(v89 + 32) )
          break;
      }
      v55 = !_BitScanReverse((unsigned int *)&v88, v87);
      v157 = v88;
      if ( v55 )
        goto LABEL_125;
    }
    if ( !v89 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v84->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v84, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v89 + 32) |= 2u;
      if ( *(__int64 *)(v89 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v89, v89, v87);
        v89 = (__int64)p_Lock;
        v86 = a1 + 1856;
      }
      v90 = *(_DWORD *)(v89 + 88) & 0x1FFFF;
      v91 = *(_DWORD *)(v89 + 88) & 0xFFFE0000;
      *(_BYTE *)(v89 + 25) &= ~1u;
      v158 = v90;
      *(_DWORD *)(v89 + 88) = v91;
      *(_QWORD *)(v89 + 32) = 0LL;
      v92 = (__int64)((unsigned __int128)((v89 - (unsigned __int64)v84->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v93 = 1 << (v92 + (v92 < 0));
      if ( AbAllocationRegionCount == 1 )
        v84->AbEntrySummary |= v93;
      else
        _InterlockedOr8((volatile signed __int8 *)&v84->AbOrphanedEntrySummary, v93);
    }
    --v84->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v84, v86, &v158);
    v55 = v84->SpecialApcDisable++ == -1;
    if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
      KiCheckForKernelApcDelivery(v95, v94, v96, v97);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    CurrentThread = 0LL;
    v154 = 0LL;
    goto LABEL_67;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_67:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v98 = KeGetCurrentPrcb()->SchedulerAssist;
      v98[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E228;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E228);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v5 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v165 = v5;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache(a1, &v166) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v100 = KeGetCurrentIrql();
        if ( v100 <= 0xFu && CurrentIrql <= 0xFu && v100 >= 2u )
        {
          v101 = KeGetCurrentPrcb();
          v99 = -1LL << (CurrentIrql + 1);
          v102 = v101->SchedulerAssist;
          v103 = ~(unsigned __int16)v99;
          v55 = (v103 & v102[5]) == 0;
          v102[5] &= v103;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v101);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v104 = (volatile signed __int64 *)(a1 + 1856);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v104);
        v104 = (volatile signed __int64 *)(a1 + 1856);
      }
      v105 = KeGetCurrentThread();
      p_Lock = &v105->Header.Lock;
      v160 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v104) == 1 )
        v107 = (unsigned int)MmGetSessionIdEx((__int64)v105->ApcState.Process);
      else
        v107 = 0xFFFFFFFFLL;
      --v105->SpecialApcDisable;
      v108 = (ULONG_PTR)v105;
      ++v105->AbAllocationRegionCount;
      v109 = a1 + 1856;
      AbAllocationRegionCount = v105->AbAllocationRegionCount;
      v167 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v110 = ((char)v105->AbEntrySummary | (char)v105->AbOrphanedEntrySummary) ^ 0x3F;
      v55 = !_BitScanReverse((unsigned int *)&v111, v110);
      v159 = v111;
      if ( v55 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v154) = ~(1 << v111) & v110;
        v112 = (__int64)&v105->LockEntries[v111];
        v168 = v112;
        if ( (*(_BYTE *)(v112 + 26) & 1) != 0
          && (*(_DWORD *)(v112 + 32) & 1) == 0
          && (*(_QWORD *)(v112 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v167
          && *(_DWORD *)(v112 + 40) == (_DWORD)v107 )
        {
          *(_BYTE *)(v112 + 26) &= ~1u;
          if ( *(_QWORD *)(v112 + 32) )
            break;
        }
        v110 = (unsigned int)v154;
        v55 = !_BitScanReverse((unsigned int *)&v111, (unsigned int)v154);
        v159 = v111;
        if ( v55 )
          goto LABEL_172;
      }
      if ( !v112 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v105->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v105, a1 + 1856, v107, 0LL);
      }
      else
      {
        *(_BYTE *)(v112 + 32) |= 2u;
        if ( *(__int64 *)(v112 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v112, v106, v112);
          v108 = (ULONG_PTR)p_Lock;
          v109 = a1 + 1856;
          v112 = v168;
        }
        v113 = *(_DWORD *)(v112 + 88) & 0x1FFFF;
        v114 = *(_DWORD *)(v112 + 88) & 0xFFFE0000;
        *(_BYTE *)(v112 + 25) &= ~1u;
        v160 = v113;
        *(_DWORD *)(v112 + 88) = v114;
        *(_QWORD *)(v112 + 32) = 0LL;
        v115 = 1 << ((char)(v112 - *(_BYTE *)(v108 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v108 + 792) |= v115;
        else
          _InterlockedOr8((volatile signed __int8 *)(v108 + 870), v115);
      }
      --*(_BYTE *)(v108 + 794);
      KiAbThreadRemoveBoosts(v108, v109, &v160);
      v120 = p_Lock;
      v55 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v55 && (_QWORD *)v120[19] != v120 + 19 )
        KiCheckForKernelApcDelivery(v117, v116, v118, v119);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v154 = 0LL;
    }
    if ( v166 )
      MiReturnSystemVa(v166, v166 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v99, 0LL, &v164) == 1 )
    {
      v121 = v164;
      v6 = ((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v6 + 16));
        if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
        {
          MiInsertTbFlushEntry(&v169, v121, 64LL, 0LL);
          MiFlushTbList(&v169, v123);
        }
      }
      v124 = ZeroPte;
      if ( MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow(v126, v125, v127, v128) )
        {
          if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
            v124 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v124;
          MiWritePteShadow(v6, v124);
LABEL_179:
          v129 = ZeroPte;
          if ( MiPteInShadowRange(v6 + 8) )
          {
            if ( (unsigned int)MiPteHasShadow(v131, v130, v132, v133) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v129 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 8) = v129;
              MiWritePteShadow(v6 + 8, v129);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v129 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 8) = v129;
LABEL_189:
          v134 = ZeroPte;
          if ( MiPteInShadowRange(v6 + 16) )
          {
            if ( (unsigned int)MiPteHasShadow(v136, v135, v137, v138) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v134 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 16) = v134;
              MiWritePteShadow(v6 + 16, v134);
              return v6;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v134 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 16) = v134;
          return v6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v124 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v124;
      goto LABEL_179;
    }
    v139 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v139 <= 0xFu )
    {
      v140 = KeGetCurrentPrcb()->SchedulerAssist;
      v140[5] |= (-1 << (v139 + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E228;
    CurrentIrql = v139;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E228);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v141 = KeGetCurrentIrql();
          if ( v141 <= 0xFu && v139 <= 0xFu && v141 >= 2u )
          {
            v142 = KeGetCurrentPrcb();
            v143 = v142->SchedulerAssist;
            v144 = ~(unsigned __int16)(-1LL << (v139 + 1));
            v55 = (v144 & v143[5]) == 0;
            v143[5] &= v144;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v142);
          }
        }
      }
      __writecr8(v139);
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
        _InterlockedOr(v149, 0);
        v9 = MiGetPteLink(*(_QWORD *)(v6 + 16));
        v11 = (v10 - v9) & 0xFFFFF;
        if ( v11 <= 2 && ((v9 & 1) != 0 || v11 < 2) )
        {
          p_Lock = (_QWORD *)(v6 + 24);
          v35 = v6;
          v36 = v165;
          do
          {
            if ( HIDWORD(v172) )
            {
              v37 = v3++;
              v176[v37] = v35;
            }
            v164 = (__int64)(v35 << 25) >> 16;
            MiInsertTbFlushEntry(&v169, v164, 64LL, 0LL);
            v38 = *p_Lock;
            if ( qword_140C4DDC0 )
            {
              if ( (v38 & 0x10) != 0 )
                LODWORD(v38) = v38 & 0xFFFFFFEF;
              else
                LODWORD(v38) = ~(_DWORD)qword_140C4DDC0 & v38;
            }
            v39 = MiSwizzleInvalidPte(v38 & 0xFFFFFFF | 0x10000000);
            *v40 = v39;
            if ( v3 == 12 )
              break;
            v41 = MiGetPteLink(*(_QWORD *)v35);
            v42 = *(_QWORD *)(a1 + 1800);
            if ( v41 == ((__int64)v36 - v42) >> 3 )
              break;
            v35 = v42 + 8 * v41;
            v43 = *(_QWORD *)(v35 + 24);
            p_Lock = (_QWORD *)(v35 + 24);
          }
          while ( MiGetPteLink(v43) == 2 );
          v152 = v3;
          v7 = (unsigned __int64 *)(v6 + 24);
          v3 = v153;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v172) )
    {
      MiFlushTbList(&v169, v12);
      v44 = v152;
      v153 = 0;
      if ( v152 )
      {
        v45 = v153;
        do
        {
          v165 = (volatile signed __int64 *)(v176[v45] + 24LL);
          v46 = MI_READ_PTE_LOCK_FREE(v165);
          v47 = v46;
          if ( qword_140C4DDC0 )
          {
            if ( (v46 & 0x10) != 0 )
              v47 = v46 & 0xFFFFFFEF;
            else
              v47 = v46 & ~(_DWORD)qword_140C4DDC0;
          }
          v48 = MiSwizzleInvalidPte(v47 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v165, v48, v49);
          ++v45;
        }
        while ( v45 != v44 );
        v7 = (unsigned __int64 *)(v6 + 24);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v145 = KeGetCurrentIrql();
        if ( v145 <= 0xFu && CurrentIrql <= 0xFu && v145 >= 2u )
        {
          v146 = KeGetCurrentPrcb();
          v147 = v146->SchedulerAssist;
          v148 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v55 = (v148 & v147[5]) == 0;
          v147[5] &= v148;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v146);
        }
      }
    }
    __writecr8(CurrentIrql);
    v13 = (__int64)v154;
    if ( v154 )
    {
      v50 = a1 + 1856;
      v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
      v52 = KeGetCurrentThread();
      v162 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v53 = (unsigned int)MmGetSessionIdEx((__int64)v52->ApcState.Process);
      else
        v53 = 0xFFFFFFFFLL;
      --v52->SpecialApcDisable;
      ++v52->AbAllocationRegionCount;
      v54 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v52->AbAllocationRegionCount;
      v55 = !_BitScanReverse((unsigned int *)&v56, v54);
      v161 = v56;
      if ( v55 )
        goto LABEL_52;
      while ( 1 )
      {
        v57 = (__int64)&v52->LockEntries[v56];
        v54 &= ~(1 << v56);
        if ( (*(_BYTE *)(v57 + 26) & 1) != 0
          && (*(_DWORD *)(v57 + 32) & 1) == 0
          && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v50 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v57 + 40) == (_DWORD)v53 )
        {
          *(_BYTE *)(v57 + 26) &= ~1u;
          if ( *(_QWORD *)(v57 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v56, v54);
        v161 = v56;
        if ( v55 )
          goto LABEL_52;
      }
      if ( !v57 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, v50, (unsigned int)v53, 0LL);
      }
      else
      {
        *(_BYTE *)(v57 + 32) |= 2u;
        if ( *(__int64 *)(v57 + 32) < 0 )
          KiAbEntryRemoveFromTree(v57, v53, 1LL);
        v62 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
        v63 = *(_DWORD *)(v57 + 88) & 0xFFFE0000;
        *(_BYTE *)(v57 + 25) &= ~1u;
        v162 = v62;
        *(_DWORD *)(v57 + 88) = v63;
        *(_QWORD *)(v57 + 32) = 0LL;
        v64 = (signed __int64)(v57 - (unsigned __int64)v52->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v52->AbEntrySummary |= 1 << v64;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v64);
      }
      --v52->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v52, v50, &v162);
      v55 = v52->SpecialApcDisable++ == -1;
      if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery(v59, v58, v60, v61);
      KiLeaveGuardedRegionUnsafe(v13);
    }
    if ( v3 == 1 )
      MiWaitForSystemCacheViewFlush(v6);
    v14 = ZeroPte;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
      {
        if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
          v14 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v14;
        MiWritePteShadow(v6, v14);
LABEL_15:
        v19 = ZeroPte;
        if ( MiPteInShadowRange(v6 + 8) )
        {
          if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
          {
            if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
              v19 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v6 + 8) = v19;
            MiWritePteShadow(v6 + 8, v19);
LABEL_17:
            v24 = ZeroPte;
            if ( MiPteInShadowRange(v6 + 16) )
            {
              if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
              {
                if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                  v24 = ZeroPte | 0x8000000000000000uLL;
                *(_QWORD *)(v6 + 16) = v24;
                MiWritePteShadow(v6 + 16, v24);
                goto LABEL_19;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v24 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)(v6 + 16) = v24;
LABEL_19:
            v29 = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)v7) )
            {
              if ( (unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
              {
                if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                  v29 = ZeroPte | 0x8000000000000000uLL;
                *v7 = v29;
                MiWritePteShadow(v7, v29);
                return v6;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v29 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v7 = v29;
            return v6;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v19 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v6 + 8) = v19;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v65, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
  v71 = KeGetCurrentThread();
  v156 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v72 = (unsigned int)MmGetSessionIdEx((__int64)v71->ApcState.Process);
  else
    v72 = 0xFFFFFFFFLL;
  --v71->SpecialApcDisable;
  v73 = ++v71->AbAllocationRegionCount;
  v74 = ((char)v71->AbEntrySummary | (char)v71->AbOrphanedEntrySummary) ^ 0x3F;
  v55 = !_BitScanReverse((unsigned int *)&v75, v74);
  v155 = v75;
  if ( v55 )
    goto LABEL_101;
  while ( 1 )
  {
    v76 = (__int64)&v71->LockEntries[v75];
    v74 &= ~(1 << v75);
    if ( (*(_BYTE *)(v76 + 26) & 1) != 0
      && (*(_DWORD *)(v76 + 32) & 1) == 0
      && (*(_QWORD *)(v76 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v65 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v76 + 40) == (_DWORD)v72 )
    {
      *(_BYTE *)(v76 + 26) &= ~1u;
      if ( *(_QWORD *)(v76 + 32) )
        break;
    }
    v55 = !_BitScanReverse((unsigned int *)&v75, v74);
    v155 = v75;
    if ( v55 )
      goto LABEL_101;
  }
  if ( !v76 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v71->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v71, v65, (unsigned int)v72, 0LL);
  }
  else
  {
    *(_BYTE *)(v76 + 32) |= 2u;
    if ( *(__int64 *)(v76 + 32) < 0 )
      KiAbEntryRemoveFromTree(v76, v72, 1LL);
    v77 = *(_DWORD *)(v76 + 88) & 0x1FFFF;
    v78 = *(_DWORD *)(v76 + 88) & 0xFFFE0000;
    *(_BYTE *)(v76 + 25) &= ~1u;
    v156 = v77;
    *(_DWORD *)(v76 + 88) = v78;
    *(_QWORD *)(v76 + 32) = 0LL;
    v79 = (signed __int64)(v76 - (unsigned __int64)v71->LockEntries) / 96;
    if ( v73 == 1 )
      v71->AbEntrySummary |= 1 << v79;
    else
      _InterlockedOr8((volatile signed __int8 *)&v71->AbOrphanedEntrySummary, 1 << v79);
  }
  --v71->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v71, v65, &v156);
  v55 = v71->SpecialApcDisable++ == -1;
  if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v71->ApcState.ApcListHead[0].Flink != &v71->152 )
    KiCheckForKernelApcDelivery(v81, v80, v82, v83);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
