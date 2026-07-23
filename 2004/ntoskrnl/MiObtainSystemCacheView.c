/*
 * XREFs of MiObtainSystemCacheView @ 0x1402B94B0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407A6C18 (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     RemoveListHeadPte @ 0x1402B93AC (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x1402B9B90 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x1402BCD8C (MiIncrementSystemCacheViewCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033CBB4 (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x14033D4E0 (MiExpandSystemCache.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037D9C0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404E62C0 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x1407883F8 (MiInitializeSystemCache.c)
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
  _KPROCESS *v12; // rdx
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
  unsigned int v53; // edx
  unsigned int v54; // r10d
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rcx
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  ULONG_PTR v62; // r13
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v64; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v66; // r9
  int v67; // eax
  struct _KTHREAD *v68; // rbx
  unsigned int v69; // edx
  unsigned __int8 v70; // si
  unsigned int v71; // r10d
  __int64 v72; // rcx
  __int64 v73; // rdi
  int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rcx
  struct _KTHREAD *v78; // r13
  ULONG_PTR SessionId; // r9
  __int64 v80; // r10
  unsigned int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // eax
  unsigned int v85; // ecx
  __int64 v86; // rdx
  unsigned __int8 v87; // al
  __int64 v88; // rcx
  _DWORD *v89; // r9
  __int64 v90; // rdx
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  volatile signed __int64 *v95; // rcx
  struct _KTHREAD *v96; // r13
  ULONG_PTR v97; // r9
  ULONG_PTR v98; // r10
  __int64 v99; // r11
  unsigned int v100; // r8d
  __int64 v101; // rcx
  __int64 v102; // r8
  int v103; // eax
  unsigned int v104; // ecx
  unsigned __int8 v105; // r13
  __int64 v106; // rcx
  _QWORD *v107; // r13
  unsigned __int64 v108; // rbx
  __int64 PteLink; // rax
  _KPROCESS *v110; // rdx
  unsigned __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int8 v126; // r14
  _DWORD *v127; // r10
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r9
  _DWORD *v130; // r8
  int v131; // eax
  unsigned __int8 v132; // al
  struct _KPRCB *v133; // r10
  _DWORD *v134; // r9
  int v135; // eax
  signed __int32 v136[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v139; // [rsp+40h] [rbp-C0h]
  unsigned int v140; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v141; // [rsp+48h] [rbp-B8h]
  int v142; // [rsp+50h] [rbp-B0h]
  int v143; // [rsp+54h] [rbp-ACh] BYREF
  int v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+5Ch] [rbp-A4h] BYREF
  int v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+64h] [rbp-9Ch] BYREF
  int v148; // [rsp+68h] [rbp-98h]
  int v149; // [rsp+6Ch] [rbp-94h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v151; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v152; // [rsp+90h] [rbp-70h]
  unsigned __int64 v153; // [rsp+98h] [rbp-68h] BYREF
  __int64 v154; // [rsp+A0h] [rbp-60h]
  __int64 v155; // [rsp+A8h] [rbp-58h]
  int v156; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v157; // [rsp+B4h] [rbp-4Ch]
  __int16 v158; // [rsp+B6h] [rbp-4Ah]
  __int64 v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C0h] [rbp-40h]
  __int64 v161; // [rsp+C8h] [rbp-38h]
  _BYTE v162[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v163[12]; // [rsp+170h] [rbp+70h] BYREF

  v151 = 0LL;
  v153 = 0LL;
  v158 = 0;
  memset(v162, 0, sizeof(v162));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v163, 0, sizeof(v163));
  v159 = 20LL;
  CurrentThread = 0LL;
  v156 = 0;
  v3 = 0;
  v157 = 0;
  v160 = 0LL;
  v161 = 0LL;
  v141 = 0LL;
  v139 = 0;
  v140 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = qword_140C4E1A8;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E1A8);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v64 = KeGetCurrentIrql();
      if ( v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v66 = CurrentPrcb->SchedulerAssist;
        v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v55 = (v67 & v66[5]) == 0;
        v66[5] &= v67;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v141 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v62 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
    v78 = KeGetCurrentThread();
    v145 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v78->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v78->SpecialApcDisable;
    ++v78->AbAllocationRegionCount;
    v80 = a1 + 1856;
    AbAllocationRegionCount = v78->AbAllocationRegionCount;
    v81 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3F;
    v55 = !_BitScanReverse((unsigned int *)&v82, v81);
    v144 = v82;
    if ( v55 )
      goto LABEL_125;
    while ( 1 )
    {
      v83 = (__int64)&v78->LockEntries[v82];
      p_Lock = (_QWORD *)v83;
      v81 &= ~(1 << v82);
      if ( (*(_BYTE *)(v83 + 26) & 1) != 0
        && (*(_DWORD *)(v83 + 32) & 1) == 0
        && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v83 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v83 + 26) &= ~1u;
        if ( *(_QWORD *)(v83 + 32) )
          break;
      }
      v55 = !_BitScanReverse((unsigned int *)&v82, v81);
      v144 = v82;
      if ( v55 )
        goto LABEL_125;
    }
    if ( !v83 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v78, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v83 + 32) |= 2u;
      if ( *(__int64 *)(v83 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v83);
        v83 = (__int64)p_Lock;
        v80 = a1 + 1856;
      }
      v84 = *(_DWORD *)(v83 + 88) & 0x1FFFF;
      v85 = *(_DWORD *)(v83 + 88) & 0xFFFE0000;
      *(_BYTE *)(v83 + 25) &= ~1u;
      v145 = v84;
      *(_DWORD *)(v83 + 88) = v85;
      *(_QWORD *)(v83 + 32) = 0LL;
      v86 = (__int64)((unsigned __int128)((v83 - (unsigned __int64)v78->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v87 = 1 << (v86 + (v86 < 0));
      if ( AbAllocationRegionCount == 1 )
        v78->AbEntrySummary |= v87;
      else
        _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, v87);
    }
    --v78->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v78, v80, &v145);
    v55 = v78->SpecialApcDisable++ == -1;
    if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
      KiCheckForKernelApcDelivery(v88);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    CurrentThread = 0LL;
    v141 = 0LL;
    goto LABEL_67;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_67:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v89 = KeGetCurrentPrcb()->SchedulerAssist;
      v89[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E1A8;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E1A8);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v5 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v152 = v5;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache(a1, &v153) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v91 = KeGetCurrentIrql();
        if ( v91 <= 0xFu && CurrentIrql <= 0xFu && v91 >= 2u )
        {
          v92 = KeGetCurrentPrcb();
          v90 = -1LL << (CurrentIrql + 1);
          v93 = v92->SchedulerAssist;
          v94 = ~(unsigned __int16)v90;
          v55 = (v94 & v93[5]) == 0;
          v93[5] &= v94;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v92);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v95 = (volatile signed __int64 *)(a1 + 1856);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v95);
        v95 = (volatile signed __int64 *)(a1 + 1856);
      }
      v96 = KeGetCurrentThread();
      p_Lock = &v96->Header.Lock;
      v147 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v95) == 1 )
        v97 = (unsigned int)MmGetSessionIdEx((__int64)v96->ApcState.Process);
      else
        v97 = 0xFFFFFFFFLL;
      --v96->SpecialApcDisable;
      v98 = (ULONG_PTR)v96;
      ++v96->AbAllocationRegionCount;
      v99 = a1 + 1856;
      AbAllocationRegionCount = v96->AbAllocationRegionCount;
      v154 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v100 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
      v55 = !_BitScanReverse((unsigned int *)&v101, v100);
      v146 = v101;
      if ( v55 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v141) = ~(1 << v101) & v100;
        v102 = (__int64)&v96->LockEntries[v101];
        v155 = v102;
        if ( (*(_BYTE *)(v102 + 26) & 1) != 0
          && (*(_DWORD *)(v102 + 32) & 1) == 0
          && (*(_QWORD *)(v102 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v154
          && *(_DWORD *)(v102 + 40) == (_DWORD)v97 )
        {
          *(_BYTE *)(v102 + 26) &= ~1u;
          if ( *(_QWORD *)(v102 + 32) )
            break;
        }
        v100 = (unsigned int)v141;
        v55 = !_BitScanReverse((unsigned int *)&v101, (unsigned int)v141);
        v146 = v101;
        if ( v55 )
          goto LABEL_172;
      }
      if ( !v102 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v96->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v96, a1 + 1856, v97, 0LL);
      }
      else
      {
        *(_BYTE *)(v102 + 32) |= 2u;
        if ( *(__int64 *)(v102 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v102);
          v98 = (ULONG_PTR)p_Lock;
          v99 = a1 + 1856;
          v102 = v155;
        }
        v103 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
        v104 = *(_DWORD *)(v102 + 88) & 0xFFFE0000;
        *(_BYTE *)(v102 + 25) &= ~1u;
        v147 = v103;
        *(_DWORD *)(v102 + 88) = v104;
        *(_QWORD *)(v102 + 32) = 0LL;
        v105 = 1 << ((char)(v102 - *(_BYTE *)(v98 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v98 + 792) |= v105;
        else
          _InterlockedOr8((volatile signed __int8 *)(v98 + 870), v105);
      }
      --*(_BYTE *)(v98 + 794);
      KiAbThreadRemoveBoosts(v98, v99, &v147);
      v107 = p_Lock;
      v55 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v55 && (_QWORD *)v107[19] != v107 + 19 )
        KiCheckForKernelApcDelivery(v106);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v141 = 0LL;
    }
    if ( v153 )
      MiReturnSystemVa(v153, v153 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v90, 0LL, &v151) == 1 )
    {
      v108 = v151;
      v6 = ((v151 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v6 + 16));
        if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
        {
          MiInsertTbFlushEntry((__int64)&v156, v108, 64LL, 0);
          MiFlushTbList((__int64)&v156, v110);
        }
      }
      v111 = ZeroPte;
      if ( MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow(v113, v112, v114, v115) )
        {
          if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
            v111 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v111;
          MiWritePteShadow(v6, v111);
LABEL_179:
          v116 = ZeroPte;
          if ( MiPteInShadowRange(v6 + 8) )
          {
            if ( (unsigned int)MiPteHasShadow(v118, v117, v119, v120) )
            {
              if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                v116 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 8) = v116;
              MiWritePteShadow(v6 + 8, v116);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v116 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 8) = v116;
LABEL_189:
          v121 = ZeroPte;
          if ( MiPteInShadowRange(v6 + 16) )
          {
            if ( (unsigned int)MiPteHasShadow(v123, v122, v124, v125) )
            {
              if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                v121 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v6 + 16) = v121;
              MiWritePteShadow(v6 + 16, v121);
              return v6;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v121 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v6 + 16) = v121;
          return v6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v111 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v111;
      goto LABEL_179;
    }
    v126 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v126 <= 0xFu )
    {
      v127 = KeGetCurrentPrcb()->SchedulerAssist;
      v127[5] |= (-1 << (v126 + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140C4E1A8;
    CurrentIrql = v126;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140C4E1A8);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v5 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v128 = KeGetCurrentIrql();
          if ( v128 <= 0xFu && v126 <= 0xFu && v128 >= 2u )
          {
            v129 = KeGetCurrentPrcb();
            v130 = v129->SchedulerAssist;
            v131 = ~(unsigned __int16)(-1LL << (v126 + 1));
            v55 = (v131 & v130[5]) == 0;
            v130[5] &= v131;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v129);
          }
        }
      }
      __writecr8(v126);
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
        _InterlockedOr(v136, 0);
        v9 = MiGetPteLink(*(_QWORD *)(v6 + 16));
        v11 = (v10 - v9) & 0xFFFFF;
        if ( v11 <= 2 && ((v9 & 1) != 0 || v11 < 2) )
        {
          p_Lock = (_QWORD *)(v6 + 24);
          v35 = v6;
          v36 = v152;
          do
          {
            if ( HIDWORD(v159) )
            {
              v37 = v3++;
              v163[v37] = v35;
            }
            v151 = (__int64)(v35 << 25) >> 16;
            MiInsertTbFlushEntry((__int64)&v156, v151, 64LL, 0);
            v38 = *p_Lock;
            if ( qword_140C4DD40 )
            {
              if ( (v38 & 0x10) != 0 )
                LODWORD(v38) = v38 & 0xFFFFFFEF;
              else
                LODWORD(v38) = ~(_DWORD)qword_140C4DD40 & v38;
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
          v139 = v3;
          v7 = (unsigned __int64 *)(v6 + 24);
          v3 = v140;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v159) )
    {
      MiFlushTbList((__int64)&v156, v12);
      v44 = v139;
      v140 = 0;
      if ( v139 )
      {
        v45 = v140;
        do
        {
          v152 = (volatile signed __int64 *)(v163[v45] + 24LL);
          v46 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v152);
          v47 = v46;
          if ( qword_140C4DD40 )
          {
            if ( (v46 & 0x10) != 0 )
              v47 = v46 & 0xFFFFFFEF;
            else
              v47 = v46 & ~(_DWORD)qword_140C4DD40;
          }
          v48 = MiSwizzleInvalidPte(v47 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v152, v48, v49);
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
        v132 = KeGetCurrentIrql();
        if ( v132 <= 0xFu && CurrentIrql <= 0xFu && v132 >= 2u )
        {
          v133 = KeGetCurrentPrcb();
          v134 = v133->SchedulerAssist;
          v135 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v55 = (v135 & v134[5]) == 0;
          v134[5] &= v135;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v133);
        }
      }
    }
    __writecr8(CurrentIrql);
    v13 = (__int64)v141;
    if ( v141 )
    {
      v50 = a1 + 1856;
      v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
      v52 = KeGetCurrentThread();
      v149 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v53 = MmGetSessionIdEx((__int64)v52->ApcState.Process);
      else
        v53 = -1;
      --v52->SpecialApcDisable;
      ++v52->AbAllocationRegionCount;
      v54 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v52->AbAllocationRegionCount;
      v55 = !_BitScanReverse((unsigned int *)&v56, v54);
      v148 = v56;
      if ( v55 )
        goto LABEL_52;
      while ( 1 )
      {
        v57 = (__int64)&v52->LockEntries[v56];
        v54 &= ~(1 << v56);
        if ( (*(_BYTE *)(v57 + 26) & 1) != 0
          && (*(_DWORD *)(v57 + 32) & 1) == 0
          && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v50 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v57 + 40) == v53 )
        {
          *(_BYTE *)(v57 + 26) &= ~1u;
          if ( *(_QWORD *)(v57 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v56, v54);
        v148 = v56;
        if ( v55 )
          goto LABEL_52;
      }
      if ( !v57 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, v50, v53, 0LL);
      }
      else
      {
        *(_BYTE *)(v57 + 32) |= 2u;
        if ( *(__int64 *)(v57 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v57);
        v59 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
        v60 = *(_DWORD *)(v57 + 88) & 0xFFFE0000;
        *(_BYTE *)(v57 + 25) &= ~1u;
        v149 = v59;
        *(_DWORD *)(v57 + 88) = v60;
        *(_QWORD *)(v57 + 32) = 0LL;
        v61 = (signed __int64)(v57 - (unsigned __int64)v52->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v52->AbEntrySummary |= 1 << v61;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v61);
      }
      --v52->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v52, v50, &v149);
      v55 = v52->SpecialApcDisable++ == -1;
      if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery(v58);
      KiLeaveGuardedRegionUnsafe(v13);
    }
    if ( v3 == 1 )
      MiWaitForSystemCacheViewFlush(v6);
    v14 = ZeroPte;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v14 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v14;
        MiWritePteShadow(v6, v14);
LABEL_15:
        v19 = ZeroPte;
        if ( MiPteInShadowRange(v6 + 8) )
        {
          if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
          {
            if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
              v19 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v6 + 8) = v19;
            MiWritePteShadow(v6 + 8, v19);
LABEL_17:
            v24 = ZeroPte;
            if ( MiPteInShadowRange(v6 + 16) )
            {
              if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
              {
                if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
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
                if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
  v68 = KeGetCurrentThread();
  v143 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v69 = MmGetSessionIdEx((__int64)v68->ApcState.Process);
  else
    v69 = -1;
  --v68->SpecialApcDisable;
  v70 = ++v68->AbAllocationRegionCount;
  v71 = ((char)v68->AbEntrySummary | (char)v68->AbOrphanedEntrySummary) ^ 0x3F;
  v55 = !_BitScanReverse((unsigned int *)&v72, v71);
  v142 = v72;
  if ( v55 )
    goto LABEL_101;
  while ( 1 )
  {
    v73 = (__int64)&v68->LockEntries[v72];
    v71 &= ~(1 << v72);
    if ( (*(_BYTE *)(v73 + 26) & 1) != 0
      && (*(_DWORD *)(v73 + 32) & 1) == 0
      && (*(_QWORD *)(v73 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v62 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v73 + 40) == v69 )
    {
      *(_BYTE *)(v73 + 26) &= ~1u;
      if ( *(_QWORD *)(v73 + 32) )
        break;
    }
    v55 = !_BitScanReverse((unsigned int *)&v72, v71);
    v142 = v72;
    if ( v55 )
      goto LABEL_101;
  }
  if ( !v73 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v68->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v68, v62, v69, 0LL);
  }
  else
  {
    *(_BYTE *)(v73 + 32) |= 2u;
    if ( *(__int64 *)(v73 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v73);
    v74 = *(_DWORD *)(v73 + 88) & 0x1FFFF;
    v75 = *(_DWORD *)(v73 + 88) & 0xFFFE0000;
    *(_BYTE *)(v73 + 25) &= ~1u;
    v143 = v74;
    *(_DWORD *)(v73 + 88) = v75;
    *(_QWORD *)(v73 + 32) = 0LL;
    v76 = (signed __int64)(v73 - (unsigned __int64)v68->LockEntries) / 96;
    if ( v70 == 1 )
      v68->AbEntrySummary |= 1 << v76;
    else
      _InterlockedOr8((volatile signed __int8 *)&v68->AbOrphanedEntrySummary, 1 << v76);
  }
  --v68->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v68, v62, &v143);
  v55 = v68->SpecialApcDisable++ == -1;
  if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
    KiCheckForKernelApcDelivery(v77);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
