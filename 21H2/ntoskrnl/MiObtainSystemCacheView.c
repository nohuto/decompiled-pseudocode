/*
 * XREFs of MiObtainSystemCacheView @ 0x140312500
 * Callers:
 *     MmMapViewInSystemCache @ 0x140310DE0 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407BC944 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402B03EC (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x1402B2F2C (MiExpandSystemCache.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x1402FA5E8 (MiReturnSystemVa.c)
 *     RemoveListHeadPte @ 0x1403123F4 (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x140312BE0 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x140312C10 (MiIncrementSystemCacheViewCount.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FF30 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404EB3E0 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x1407A0628 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // r12d
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int64 *v6; // r15
  __int64 v7; // rdi
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  signed __int64 v13; // rdx
  struct _KTHREAD *v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v23; // rbx
  volatile signed __int64 *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r15d
  unsigned int v33; // r14d
  unsigned int v34; // r8d
  unsigned int v35; // ecx
  signed __int64 v36; // r8
  ULONG_PTR v37; // r13
  char v38; // bl
  struct _KTHREAD *v39; // rbx
  unsigned int v40; // edx
  unsigned int v41; // r10d
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rdx
  ULONG_PTR v49; // r13
  __int64 v50; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v52; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v54; // r9
  int v55; // eax
  struct _KTHREAD *v56; // rbx
  unsigned int v57; // edx
  unsigned __int8 v58; // si
  unsigned int v59; // r10d
  __int64 v60; // rcx
  __int64 v61; // rdi
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct _KTHREAD *v66; // r13
  ULONG_PTR SessionId; // r9
  unsigned int v68; // r8d
  __int64 v69; // rcx
  __int64 v70; // rdx
  int v71; // eax
  unsigned int v72; // ecx
  __int64 v73; // rdx
  unsigned __int8 v74; // al
  __int64 v75; // rcx
  _DWORD *v76; // r9
  __int64 v77; // rdx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v82; // rcx
  struct _KTHREAD *v83; // r13
  ULONG_PTR v84; // r9
  ULONG_PTR v85; // r10
  unsigned int v86; // r8d
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // eax
  unsigned int v90; // ecx
  unsigned __int8 v91; // r13
  __int64 v92; // rcx
  _QWORD *v93; // r13
  __int64 v94; // r8
  unsigned __int64 v95; // rbx
  __int64 v96; // rdx
  int PteLink; // eax
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r8
  unsigned __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // r8
  unsigned __int64 v106; // rbx
  __int64 v107; // r8
  unsigned __int8 v108; // r14
  _DWORD *v109; // r10
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r9
  _DWORD *v112; // r8
  int v113; // eax
  unsigned __int8 v114; // al
  struct _KPRCB *v115; // r10
  _DWORD *v116; // r9
  int v117; // eax
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  signed __int32 v122[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v125; // [rsp+40h] [rbp-C0h]
  unsigned int v126; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v127; // [rsp+48h] [rbp-B8h]
  int v128; // [rsp+50h] [rbp-B0h]
  int v129; // [rsp+54h] [rbp-ACh]
  int v130; // [rsp+58h] [rbp-A8h]
  int v131; // [rsp+5Ch] [rbp-A4h]
  int v132; // [rsp+60h] [rbp-A0h]
  int v133; // [rsp+64h] [rbp-9Ch]
  int v134; // [rsp+68h] [rbp-98h]
  int v135; // [rsp+6Ch] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v137; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v138; // [rsp+90h] [rbp-70h]
  unsigned __int64 v139; // [rsp+98h] [rbp-68h] BYREF
  __int64 v140; // [rsp+A0h] [rbp-60h]
  __int64 v141; // [rsp+A8h] [rbp-58h]
  int v142; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v143; // [rsp+B4h] [rbp-4Ch]
  __int16 v144; // [rsp+B6h] [rbp-4Ah]
  __int64 v145; // [rsp+B8h] [rbp-48h]
  __int64 v146; // [rsp+C0h] [rbp-40h]
  __int64 v147; // [rsp+C8h] [rbp-38h]
  _BYTE v148[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v149[12]; // [rsp+170h] [rbp+70h] BYREF

  v137 = 0LL;
  v139 = 0LL;
  v144 = 0;
  memset(v148, 0, sizeof(v148));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v149, 0, sizeof(v149));
  v145 = 20LL;
  CurrentThread = 0LL;
  v142 = 0;
  v4 = 0;
  v143 = 0;
  v146 = 0LL;
  v147 = 0LL;
  v127 = 0LL;
  v125 = 0;
  v126 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4E3A8;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v2);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v52 = KeGetCurrentIrql();
      if ( v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v54 = CurrentPrcb->SchedulerAssist;
        v55 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v42 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v127 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v49 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1856);
    v66 = KeGetCurrentThread();
    v131 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v66->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v66->SpecialApcDisable;
    AbAllocationRegionCount = ++v66->AbAllocationRegionCount;
    v68 = ((char)v66->AbEntrySummary | (char)v66->AbOrphanedEntrySummary) ^ 0x3F;
    v42 = !_BitScanReverse((unsigned int *)&v69, v68);
    v130 = v69;
    if ( v42 )
      goto LABEL_125;
    while ( 1 )
    {
      v70 = (__int64)&v66->LockEntries[v69];
      p_Lock = (_QWORD *)v70;
      v68 &= ~(1 << v69);
      if ( (*(_BYTE *)(v70 + 26) & 1) != 0
        && (*(_DWORD *)(v70 + 32) & 1) == 0
        && (*(_QWORD *)(v70 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v70 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v70 + 26) &= ~1u;
        if ( *(_QWORD *)(v70 + 32) )
          break;
      }
      v42 = !_BitScanReverse((unsigned int *)&v69, v68);
      v130 = v69;
      if ( v42 )
        goto LABEL_125;
    }
    if ( !v70 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v66->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v66, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v70 + 32) |= 2u;
      if ( *(__int64 *)(v70 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v70);
        v70 = (__int64)p_Lock;
      }
      v71 = *(_DWORD *)(v70 + 88) & 0x1FFFF;
      v72 = *(_DWORD *)(v70 + 88) & 0xFFFE0000;
      *(_BYTE *)(v70 + 25) &= ~1u;
      v131 = v71;
      *(_DWORD *)(v70 + 88) = v72;
      *(_QWORD *)(v70 + 32) = 0LL;
      v73 = (__int64)((unsigned __int128)((v70 - (unsigned __int64)v66->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v74 = 1 << (v73 + (v73 < 0));
      if ( AbAllocationRegionCount == 1 )
        v66->AbEntrySummary |= v74;
      else
        _InterlockedOr8((volatile signed __int8 *)&v66->AbOrphanedEntrySummary, v74);
    }
    --v66->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v66);
    v42 = v66->SpecialApcDisable++ == -1;
    if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
      KiCheckForKernelApcDelivery(v75);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    CurrentThread = 0LL;
    v127 = 0LL;
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
      v50 = (-1 << (CurrentIrql + 1)) & 4u | v76[5];
      v76[5] = v50;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3A8;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v50);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v6 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v138 = v6;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v6 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache((__int16 *)a1, &v139) );
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
          v42 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v42 )
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
      v133 = 0;
      if ( (unsigned int)MiGetSystemRegionType(v82) == 1 )
        v84 = (unsigned int)MmGetSessionIdEx(v83->ApcState.Process);
      else
        v84 = 0xFFFFFFFFLL;
      --v83->SpecialApcDisable;
      v85 = (ULONG_PTR)v83;
      AbAllocationRegionCount = ++v83->AbAllocationRegionCount;
      v140 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v86 = ((char)v83->AbEntrySummary | (char)v83->AbOrphanedEntrySummary) ^ 0x3F;
      v42 = !_BitScanReverse((unsigned int *)&v87, v86);
      v132 = v87;
      if ( v42 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v127) = ~(1 << v87) & v86;
        v88 = (__int64)&v83->LockEntries[v87];
        v141 = v88;
        if ( (*(_BYTE *)(v88 + 26) & 1) != 0
          && (*(_DWORD *)(v88 + 32) & 1) == 0
          && (*(_QWORD *)(v88 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v140
          && *(_DWORD *)(v88 + 40) == (_DWORD)v84 )
        {
          *(_BYTE *)(v88 + 26) &= ~1u;
          if ( *(_QWORD *)(v88 + 32) )
            break;
        }
        v86 = (unsigned int)v127;
        v42 = !_BitScanReverse((unsigned int *)&v87, (unsigned int)v127);
        v132 = v87;
        if ( v42 )
          goto LABEL_172;
      }
      if ( !v88 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v83->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v83, a1 + 1856, v84, 0LL);
      }
      else
      {
        *(_BYTE *)(v88 + 32) |= 2u;
        if ( *(__int64 *)(v88 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v88);
          v85 = (ULONG_PTR)p_Lock;
          v88 = v141;
        }
        v89 = *(_DWORD *)(v88 + 88) & 0x1FFFF;
        v90 = *(_DWORD *)(v88 + 88) & 0xFFFE0000;
        *(_BYTE *)(v88 + 25) &= ~1u;
        v133 = v89;
        *(_DWORD *)(v88 + 88) = v90;
        *(_QWORD *)(v88 + 32) = 0LL;
        v91 = 1 << ((char)(v88 - *(_BYTE *)(v85 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v85 + 792) |= v91;
        else
          _InterlockedOr8((volatile signed __int8 *)(v85 + 870), v91);
      }
      --*(_BYTE *)(v85 + 794);
      KiAbThreadRemoveBoosts(v85);
      v93 = p_Lock;
      v42 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v42 && (_QWORD *)v93[19] != v93 + 19 )
        KiCheckForKernelApcDelivery(v92);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v127 = 0LL;
    }
    if ( v139 )
      MiReturnSystemVa(v139, v139 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v77, 0LL, &v137) == 1 )
    {
      v95 = v137;
      v7 = ((v137 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v7 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v7 + 16));
        if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL, v98, v99) )
        {
          MiInsertTbFlushEntry(&v142, v95, 64LL, 0LL);
          MiFlushTbList(&v142);
        }
      }
      v100 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v7, v96) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
            v100 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v100;
          MiWritePteShadow(v7, v100, v102);
LABEL_179:
          v103 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v7 + 8, v101) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v103 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v7 + 8) = v103;
              MiWritePteShadow(v7 + 8, v103, v105);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v103 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v7 + 8) = v103;
LABEL_189:
          v106 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v7 + 16, v104) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v106 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v7 + 16) = v106;
              MiWritePteShadow(v7 + 16, v106, v107);
              return v7;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v106 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v7 + 16) = v106;
          return v7;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v100 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v100;
      goto LABEL_179;
    }
    v108 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v108 <= 0xFu )
    {
      v109 = KeGetCurrentPrcb()->SchedulerAssist;
      v94 = (-1LL << (v108 + 1)) & 4;
      v109[5] |= v94;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3A8;
    CurrentIrql = v108;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v94);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v6 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v110 = KeGetCurrentIrql();
          if ( v110 <= 0xFu && v108 <= 0xFu && v110 >= 2u )
          {
            v111 = KeGetCurrentPrcb();
            v112 = v111->SchedulerAssist;
            v113 = ~(unsigned __int16)(-1LL << (v108 + 1));
            v42 = (v113 & v112[5]) == 0;
            v112[5] &= v113;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick(v111);
          }
        }
      }
      __writecr8(v108);
      return 0LL;
    }
LABEL_5:
    v7 = (__int64)RemoveListHeadPte((__int64 *)(a1 + 1784));
    MiIncrementSystemCacheViewCount(v7 << 25 >> 16);
    v8 = (unsigned __int64 *)(v7 + 24);
    v9 = MiGetPteLink(*(_QWORD *)(v7 + 24));
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v4 = 1;
      }
      else
      {
        _InterlockedOr(v122, 0);
        v10 = MiGetPteLink(*(_QWORD *)(v7 + 16));
        v12 = (v11 - v10) & 0xFFFFF;
        if ( v12 <= 2 && ((v10 & 1) != 0 || v12 < 2) )
        {
          p_Lock = (_QWORD *)(v7 + 24);
          v23 = v7;
          v24 = v138;
          do
          {
            if ( HIDWORD(v145) )
            {
              v25 = v4++;
              v149[v25] = v23;
            }
            v137 = v23 << 25 >> 16;
            MiInsertTbFlushEntry(&v142, v137, 64LL, 0LL);
            v26 = *p_Lock;
            if ( qword_140C4DF40 )
            {
              if ( (v26 & 0x10) != 0 )
                LODWORD(v26) = v26 & 0xFFFFFFEF;
              else
                LODWORD(v26) = ~(_DWORD)qword_140C4DF40 & v26;
            }
            v27 = MiSwizzleInvalidPte(v26 & 0xFFFFFFF | 0x10000000);
            *v28 = v27;
            if ( v4 == 12 )
              break;
            v29 = MiGetPteLink(*(_QWORD *)v23);
            v30 = *(_QWORD *)(a1 + 1800);
            if ( v29 == ((__int64)v24 - v30) >> 3 )
              break;
            v23 = v30 + 8 * v29;
            v31 = *(_QWORD *)(v23 + 24);
            p_Lock = (_QWORD *)(v23 + 24);
          }
          while ( MiGetPteLink(v31) == 2 );
          v125 = v4;
          v8 = (unsigned __int64 *)(v7 + 24);
          v4 = v126;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v145) )
    {
      MiFlushTbList(&v142);
      v32 = v125;
      v126 = 0;
      if ( v125 )
      {
        v33 = v126;
        do
        {
          v138 = (volatile signed __int64 *)(v149[v33] + 24LL);
          v34 = MI_READ_PTE_LOCK_FREE(v138);
          v35 = v34;
          if ( qword_140C4DF40 )
          {
            if ( (v34 & 0x10) != 0 )
              v35 = v34 & 0xFFFFFFEF;
            else
              v35 = v34 & ~(_DWORD)qword_140C4DF40;
          }
          v13 = MiSwizzleInvalidPte(v35 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v138, v13, v36);
          ++v33;
        }
        while ( v33 != v32 );
        v8 = (unsigned __int64 *)(v7 + 24);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v114 = KeGetCurrentIrql();
        if ( v114 <= 0xFu && CurrentIrql <= 0xFu && v114 >= 2u )
        {
          v115 = KeGetCurrentPrcb();
          v13 = -1LL << (CurrentIrql + 1);
          v116 = v115->SchedulerAssist;
          v117 = ~(unsigned __int16)v13;
          v42 = (v117 & v116[5]) == 0;
          v116[5] &= v117;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v115);
        }
      }
    }
    __writecr8(CurrentIrql);
    v14 = v127;
    if ( v127 )
    {
      v37 = a1 + 1856;
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v38 & 2) != 0 && (v38 & 4) == 0 )
        ExfTryToWakePushLock(a1 + 1856);
      v39 = KeGetCurrentThread();
      v135 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v40 = MmGetSessionIdEx(v39->ApcState.Process);
      else
        v40 = -1;
      --v39->SpecialApcDisable;
      ++v39->AbAllocationRegionCount;
      v41 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v39->AbAllocationRegionCount;
      v42 = !_BitScanReverse((unsigned int *)&v43, v41);
      v134 = v43;
      if ( v42 )
        goto LABEL_52;
      while ( 1 )
      {
        v44 = (__int64)&v39->LockEntries[v43];
        v41 &= ~(1 << v43);
        if ( (*(_BYTE *)(v44 + 26) & 1) != 0
          && (*(_DWORD *)(v44 + 32) & 1) == 0
          && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v37 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v44 + 40) == v40 )
        {
          *(_BYTE *)(v44 + 26) &= ~1u;
          if ( *(_QWORD *)(v44 + 32) )
            break;
        }
        v42 = !_BitScanReverse((unsigned int *)&v43, v41);
        v134 = v43;
        if ( v42 )
          goto LABEL_52;
      }
      if ( !v44 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v39, v37, v40, 0LL);
      }
      else
      {
        *(_BYTE *)(v44 + 32) |= 2u;
        if ( *(__int64 *)(v44 + 32) < 0 )
          KiAbEntryRemoveFromTree(v44);
        v46 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
        v47 = *(_DWORD *)(v44 + 88) & 0xFFFE0000;
        *(_BYTE *)(v44 + 25) &= ~1u;
        v135 = v46;
        *(_DWORD *)(v44 + 88) = v47;
        *(_QWORD *)(v44 + 32) = 0LL;
        v48 = (signed __int64)(v44 - (unsigned __int64)v39->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v39->AbEntrySummary |= 1 << v48;
        else
          _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v48);
      }
      --v39->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v39);
      v42 = v39->SpecialApcDisable++ == -1;
      if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
        KiCheckForKernelApcDelivery(v45);
      KiLeaveGuardedRegionUnsafe(v14);
    }
    if ( v4 == 1 )
      MiWaitForSystemCacheViewFlush(v7);
    v15 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v7, v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v15 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v15;
        MiWritePteShadow(v7, v15, v118);
LABEL_15:
        v17 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v7 + 8, v16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
              v17 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v7 + 8) = v17;
            MiWritePteShadow(v7 + 8, v17, v119);
LABEL_17:
            v19 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v7 + 16, v18) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                  v19 = ZeroPte | 0x8000000000000000uLL;
                *(_QWORD *)(v7 + 16) = v19;
                MiWritePteShadow(v7 + 16, v19, v120);
                goto LABEL_19;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v19 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)(v7 + 16) = v19;
LABEL_19:
            v21 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v8, v20) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                  v21 = ZeroPte | 0x8000000000000000uLL;
                *v8 = v21;
                MiWritePteShadow((__int64)v8, v21, v121);
                return v7;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v21 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v8 = v21;
            return v7;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v17 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v7 + 8) = v17;
        goto LABEL_17;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v15;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1856);
  v56 = KeGetCurrentThread();
  v129 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v57 = MmGetSessionIdEx(v56->ApcState.Process);
  else
    v57 = -1;
  --v56->SpecialApcDisable;
  v58 = ++v56->AbAllocationRegionCount;
  v59 = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
  v42 = !_BitScanReverse((unsigned int *)&v60, v59);
  v128 = v60;
  if ( v42 )
    goto LABEL_101;
  while ( 1 )
  {
    v61 = (__int64)&v56->LockEntries[v60];
    v59 &= ~(1 << v60);
    if ( (*(_BYTE *)(v61 + 26) & 1) != 0
      && (*(_DWORD *)(v61 + 32) & 1) == 0
      && (*(_QWORD *)(v61 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v49 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v61 + 40) == v57 )
    {
      *(_BYTE *)(v61 + 26) &= ~1u;
      if ( *(_QWORD *)(v61 + 32) )
        break;
    }
    v42 = !_BitScanReverse((unsigned int *)&v60, v59);
    v128 = v60;
    if ( v42 )
      goto LABEL_101;
  }
  if ( !v61 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v56, v49, v57, 0LL);
  }
  else
  {
    *(_BYTE *)(v61 + 32) |= 2u;
    if ( *(__int64 *)(v61 + 32) < 0 )
      KiAbEntryRemoveFromTree(v61);
    v62 = *(_DWORD *)(v61 + 88) & 0x1FFFF;
    v63 = *(_DWORD *)(v61 + 88) & 0xFFFE0000;
    *(_BYTE *)(v61 + 25) &= ~1u;
    v129 = v62;
    *(_DWORD *)(v61 + 88) = v63;
    *(_QWORD *)(v61 + 32) = 0LL;
    v64 = (signed __int64)(v61 - (unsigned __int64)v56->LockEntries) / 96;
    if ( v58 == 1 )
      v56->AbEntrySummary |= 1 << v64;
    else
      _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v64);
  }
  --v56->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v56);
  v42 = v56->SpecialApcDisable++ == -1;
  if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
    KiCheckForKernelApcDelivery(v65);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
