/*
 * XREFs of MiObtainSystemCacheView @ 0x14031D250
 * Callers:
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407BD0D4 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiCompareTbFlushTimeStamp @ 0x14022E74C (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x1402310DC (MiExpandSystemCache.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     RemoveListHeadPte @ 0x14031D144 (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x14031D960 (MiIncrementSystemCacheViewCount.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FA80 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404EB620 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x1407A0828 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // r12d
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int64 *v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 *v11; // r14
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  struct _KTHREAD *v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v22; // rbx
  volatile signed __int64 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  signed __int64 v35; // rax
  signed __int64 v36; // r8
  ULONG_PTR v37; // r13
  char v38; // bl
  struct _KTHREAD *v39; // rbx
  unsigned int v40; // edx
  unsigned int v41; // r10d
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rsi
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  ULONG_PTR v48; // r13
  __int64 v49; // r8
  _DWORD *v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v53; // r9
  int v54; // eax
  struct _KTHREAD *v55; // rbx
  unsigned int v56; // edx
  unsigned __int8 v57; // si
  unsigned int v58; // r10d
  __int64 v59; // rcx
  __int64 v60; // rdi
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  struct _KTHREAD *v64; // r13
  ULONG_PTR SessionId; // r9
  unsigned int v66; // r8d
  __int64 v67; // rcx
  __int64 v68; // rdx
  int v69; // eax
  unsigned int v70; // ecx
  __int64 v71; // rdx
  unsigned __int8 v72; // al
  __int64 v73; // rdx
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  __int64 v78; // rcx
  struct _KTHREAD *v79; // r13
  ULONG_PTR v80; // r9
  ULONG_PTR v81; // r10
  unsigned int v82; // r8d
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // eax
  unsigned int v86; // ecx
  unsigned __int8 v87; // r13
  _QWORD *v88; // r13
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // rbx
  int PteLink; // eax
  unsigned __int64 v93; // rbx
  unsigned __int64 v94; // rbx
  unsigned __int64 v95; // rbx
  unsigned __int8 v96; // r14
  _DWORD *v97; // r10
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r9
  _DWORD *v100; // r8
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // r10
  _DWORD *v104; // r9
  int v105; // eax
  signed __int32 v106[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v109; // [rsp+40h] [rbp-C0h]
  unsigned int v110; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v111; // [rsp+48h] [rbp-B8h]
  int v112; // [rsp+50h] [rbp-B0h]
  int v113; // [rsp+54h] [rbp-ACh]
  int v114; // [rsp+58h] [rbp-A8h]
  int v115; // [rsp+5Ch] [rbp-A4h]
  int v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+64h] [rbp-9Ch]
  int v118; // [rsp+68h] [rbp-98h]
  int v119; // [rsp+6Ch] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v121; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v122; // [rsp+90h] [rbp-70h]
  unsigned __int64 v123; // [rsp+98h] [rbp-68h] BYREF
  __int64 v124; // [rsp+A0h] [rbp-60h]
  __int64 v125; // [rsp+A8h] [rbp-58h]
  int v126; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v127; // [rsp+B4h] [rbp-4Ch]
  __int16 v128; // [rsp+B6h] [rbp-4Ah]
  __int64 v129; // [rsp+B8h] [rbp-48h]
  __int64 v130; // [rsp+C0h] [rbp-40h]
  __int64 v131; // [rsp+C8h] [rbp-38h]
  _BYTE v132[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v133[12]; // [rsp+170h] [rbp+70h] BYREF

  v121 = 0LL;
  v123 = 0LL;
  v128 = 0;
  memset(v132, 0, sizeof(v132));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v133, 0, sizeof(v133));
  v129 = 20LL;
  CurrentThread = 0LL;
  v126 = 0;
  v5 = 0;
  v127 = 0;
  v130 = 0LL;
  v131 = 0LL;
  v111 = 0LL;
  v109 = 0;
  v110 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4E3E8;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3E8, v2, SchedulerAssist);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v51 = KeGetCurrentIrql();
      if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v53 = CurrentPrcb->SchedulerAssist;
        v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v42 = (v54 & v53[5]) == 0;
        v53[5] &= v54;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v111 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v48 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1856);
    v64 = KeGetCurrentThread();
    v115 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v64->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v64->SpecialApcDisable;
    AbAllocationRegionCount = ++v64->AbAllocationRegionCount;
    v66 = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
    v42 = !_BitScanReverse((unsigned int *)&v67, v66);
    v114 = v67;
    if ( v42 )
      goto LABEL_125;
    while ( 1 )
    {
      v68 = (__int64)&v64->LockEntries[v67];
      p_Lock = (_QWORD *)v68;
      v66 &= ~(1 << v67);
      if ( (*(_BYTE *)(v68 + 26) & 1) != 0
        && (*(_DWORD *)(v68 + 32) & 1) == 0
        && (*(_QWORD *)(v68 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v68 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v68 + 26) &= ~1u;
        if ( *(_QWORD *)(v68 + 32) )
          break;
      }
      v42 = !_BitScanReverse((unsigned int *)&v67, v66);
      v114 = v67;
      if ( v42 )
        goto LABEL_125;
    }
    if ( !v68 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v64, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v68 + 32) |= 2u;
      if ( *(__int64 *)(v68 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v68);
        v68 = (__int64)p_Lock;
      }
      v69 = *(_DWORD *)(v68 + 88) & 0x1FFFF;
      v70 = *(_DWORD *)(v68 + 88) & 0xFFFE0000;
      *(_BYTE *)(v68 + 25) &= ~1u;
      v115 = v69;
      *(_DWORD *)(v68 + 88) = v70;
      *(_QWORD *)(v68 + 32) = 0LL;
      v71 = (__int64)((unsigned __int128)((v68 - (unsigned __int64)v64->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v72 = 1 << (v71 + (v71 < 0));
      if ( AbAllocationRegionCount == 1 )
        v64->AbEntrySummary |= v72;
      else
        _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, v72);
    }
    --v64->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v64);
    v42 = v64->SpecialApcDisable++ == -1;
    if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    CurrentThread = 0LL;
    v111 = 0LL;
    goto LABEL_67;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_67:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v50 = KeGetCurrentPrcb()->SchedulerAssist;
      v49 = (-1 << (CurrentIrql + 1)) & 4u | v50[5];
      v50[5] = v49;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3E8;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3E8, v49, v50);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v7 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v122 = v7;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v7 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache((__int16 *)a1, &v123, v8, v9) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v74 = KeGetCurrentIrql();
        if ( v74 <= 0xFu && CurrentIrql <= 0xFu && v74 >= 2u )
        {
          v75 = KeGetCurrentPrcb();
          v73 = -1LL << (CurrentIrql + 1);
          v76 = v75->SchedulerAssist;
          v77 = ~(unsigned __int16)v73;
          v42 = (v77 & v76[5]) == 0;
          v76[5] &= v77;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v75);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v78 = a1 + 1856;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v78);
        v78 = a1 + 1856;
      }
      v79 = KeGetCurrentThread();
      p_Lock = &v79->Header.Lock;
      v117 = 0;
      if ( (unsigned int)MiGetSystemRegionType(v78) == 1 )
        v80 = (unsigned int)MmGetSessionIdEx(v79->ApcState.Process);
      else
        v80 = 0xFFFFFFFFLL;
      --v79->SpecialApcDisable;
      v81 = (ULONG_PTR)v79;
      AbAllocationRegionCount = ++v79->AbAllocationRegionCount;
      v124 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v82 = ((char)v79->AbEntrySummary | (char)v79->AbOrphanedEntrySummary) ^ 0x3F;
      v42 = !_BitScanReverse((unsigned int *)&v83, v82);
      v116 = v83;
      if ( v42 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v111) = ~(1 << v83) & v82;
        v84 = (__int64)&v79->LockEntries[v83];
        v125 = v84;
        if ( (*(_BYTE *)(v84 + 26) & 1) != 0
          && (*(_DWORD *)(v84 + 32) & 1) == 0
          && (*(_QWORD *)(v84 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v124
          && *(_DWORD *)(v84 + 40) == (_DWORD)v80 )
        {
          *(_BYTE *)(v84 + 26) &= ~1u;
          if ( *(_QWORD *)(v84 + 32) )
            break;
        }
        v82 = (unsigned int)v111;
        v42 = !_BitScanReverse((unsigned int *)&v83, (unsigned int)v111);
        v116 = v83;
        if ( v42 )
          goto LABEL_172;
      }
      if ( !v84 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v79->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v79, a1 + 1856, v80, 0LL);
      }
      else
      {
        *(_BYTE *)(v84 + 32) |= 2u;
        if ( *(__int64 *)(v84 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v84);
          v81 = (ULONG_PTR)p_Lock;
          v84 = v125;
        }
        v85 = *(_DWORD *)(v84 + 88) & 0x1FFFF;
        v86 = *(_DWORD *)(v84 + 88) & 0xFFFE0000;
        *(_BYTE *)(v84 + 25) &= ~1u;
        v117 = v85;
        *(_DWORD *)(v84 + 88) = v86;
        *(_QWORD *)(v84 + 32) = 0LL;
        v87 = 1 << ((char)(v84 - *(_BYTE *)(v81 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v81 + 792) |= v87;
        else
          _InterlockedOr8((volatile signed __int8 *)(v81 + 870), v87);
      }
      --*(_BYTE *)(v81 + 794);
      KiAbThreadRemoveBoosts(v81);
      v88 = p_Lock;
      v42 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v42 && (_QWORD *)v88[19] != v88 + 19 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v111 = 0LL;
    }
    if ( v123 )
      MiReturnSystemVa(v123, v123 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v73, 0LL, &v121) == 1 )
    {
      v91 = v121;
      v10 = ((v121 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v10 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v10 + 16));
        if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
        {
          MiInsertTbFlushEntry(&v126, v91, 64LL, 0LL);
          MiFlushTbList(&v126);
        }
      }
      v93 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
            v93 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v93;
          MiWritePteShadow(v10, v93);
LABEL_179:
          v94 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v10 + 8) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                v94 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v10 + 8) = v94;
              MiWritePteShadow(v10 + 8, v94);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v94 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v10 + 8) = v94;
LABEL_189:
          v95 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v10 + 16) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                v95 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v10 + 16) = v95;
              MiWritePteShadow(v10 + 16, v95);
              return v10;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v95 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v10 + 16) = v95;
          return v10;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v93 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = v93;
      goto LABEL_179;
    }
    v96 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v96 <= 0xFu )
    {
      v97 = KeGetCurrentPrcb()->SchedulerAssist;
      v89 = (-1LL << (v96 + 1)) & 4;
      v90 = (unsigned int)v89 | v97[5];
      v97[5] = v90;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3E8;
    CurrentIrql = v96;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3E8, v89, v90);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v7 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v98 = KeGetCurrentIrql();
          if ( v98 <= 0xFu && v96 <= 0xFu && v98 >= 2u )
          {
            v99 = KeGetCurrentPrcb();
            v100 = v99->SchedulerAssist;
            v101 = ~(unsigned __int16)(-1LL << (v96 + 1));
            v42 = (v101 & v100[5]) == 0;
            v100[5] &= v101;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick(v99);
          }
        }
      }
      __writecr8(v96);
      return 0LL;
    }
LABEL_5:
    v10 = (__int64)RemoveListHeadPte((__int64 *)(a1 + 1784));
    MiIncrementSystemCacheViewCount(v10 << 25 >> 16);
    v11 = (unsigned __int64 *)(v10 + 24);
    v12 = MiGetPteLink(*(_QWORD *)(v10 + 24));
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v5 = 1;
      }
      else
      {
        _InterlockedOr(v106, 0);
        v13 = MiGetPteLink(*(_QWORD *)(v10 + 16));
        v15 = (v14 - v13) & 0xFFFFF;
        if ( v15 <= 2 && ((v13 & 1) != 0 || v15 < 2) )
        {
          p_Lock = (_QWORD *)(v10 + 24);
          v22 = v10;
          v23 = v122;
          do
          {
            if ( HIDWORD(v129) )
            {
              v24 = v5++;
              v133[v24] = v22;
            }
            v121 = v22 << 25 >> 16;
            MiInsertTbFlushEntry(&v126, v121, 64LL, 0LL);
            v25 = *p_Lock;
            if ( qword_140C4DF80 )
            {
              if ( (v25 & 0x10) != 0 )
                LODWORD(v25) = v25 & 0xFFFFFFEF;
              else
                LODWORD(v25) = ~(_DWORD)qword_140C4DF80 & v25;
            }
            v26 = MiSwizzleInvalidPte(v25 & 0xFFFFFFF | 0x10000000);
            *v27 = v26;
            if ( v5 == 12 )
              break;
            v28 = MiGetPteLink(*(_QWORD *)v22);
            v29 = *(_QWORD *)(a1 + 1800);
            if ( v28 == ((__int64)v23 - v29) >> 3 )
              break;
            v22 = v29 + 8 * v28;
            v30 = *(_QWORD *)(v22 + 24);
            p_Lock = (_QWORD *)(v22 + 24);
          }
          while ( MiGetPteLink(v30) == 2 );
          v109 = v5;
          v11 = (unsigned __int64 *)(v10 + 24);
          v5 = v110;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v129) )
    {
      MiFlushTbList(&v126);
      v31 = v109;
      v110 = 0;
      if ( v109 )
      {
        v32 = v110;
        do
        {
          v122 = (volatile signed __int64 *)(v133[v32] + 24LL);
          v33 = MI_READ_PTE_LOCK_FREE(v122);
          v34 = v33;
          if ( qword_140C4DF80 )
          {
            if ( (v33 & 0x10) != 0 )
              v34 = v33 & 0xFFFFFFEF;
            else
              v34 = v33 & ~(_DWORD)qword_140C4DF80;
          }
          v35 = MiSwizzleInvalidPte(v34 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v122, v35, v36);
          ++v32;
        }
        while ( v32 != v31 );
        v11 = (unsigned __int64 *)(v10 + 24);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v102 = KeGetCurrentIrql();
        if ( v102 <= 0xFu && CurrentIrql <= 0xFu && v102 >= 2u )
        {
          v103 = KeGetCurrentPrcb();
          v104 = v103->SchedulerAssist;
          v105 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v42 = (v105 & v104[5]) == 0;
          v104[5] &= v105;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v103);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v111;
    if ( v111 )
    {
      v37 = a1 + 1856;
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v38 & 2) != 0 && (v38 & 4) == 0 )
        ExfTryToWakePushLock(a1 + 1856);
      v39 = KeGetCurrentThread();
      v119 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v40 = MmGetSessionIdEx(v39->ApcState.Process);
      else
        v40 = -1;
      --v39->SpecialApcDisable;
      ++v39->AbAllocationRegionCount;
      v41 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v39->AbAllocationRegionCount;
      v42 = !_BitScanReverse((unsigned int *)&v43, v41);
      v118 = v43;
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
        v118 = v43;
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
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
        v45 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
        v46 = *(_DWORD *)(v44 + 88) & 0xFFFE0000;
        *(_BYTE *)(v44 + 25) &= ~1u;
        v119 = v45;
        *(_DWORD *)(v44 + 88) = v46;
        *(_QWORD *)(v44 + 32) = 0LL;
        v47 = (signed __int64)(v44 - (unsigned __int64)v39->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v39->AbEntrySummary |= 1 << v47;
        else
          _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v47);
      }
      --v39->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v39);
      v42 = v39->SpecialApcDisable++ == -1;
      if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(v16);
    }
    if ( v5 == 1 )
      MiWaitForSystemCacheViewFlush(v10);
    v17 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v10) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v17 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v10 = v17;
        MiWritePteShadow(v10, v17);
LABEL_15:
        v18 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v10 + 8) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
              v18 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v10 + 8) = v18;
            MiWritePteShadow(v10 + 8, v18);
LABEL_17:
            v19 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v10 + 16) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                  v19 = ZeroPte | 0x8000000000000000uLL;
                *(_QWORD *)(v10 + 16) = v19;
                MiWritePteShadow(v10 + 16, v19);
                goto LABEL_19;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v19 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)(v10 + 16) = v19;
LABEL_19:
            v20 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v11) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                  v20 = ZeroPte | 0x8000000000000000uLL;
                *v11 = v20;
                MiWritePteShadow((__int64)v11, v20);
                return v10;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v20 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v11 = v20;
            return v10;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v18 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v10 + 8) = v18;
        goto LABEL_17;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v17 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v10 = v17;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1856);
  v55 = KeGetCurrentThread();
  v113 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v56 = MmGetSessionIdEx(v55->ApcState.Process);
  else
    v56 = -1;
  --v55->SpecialApcDisable;
  v57 = ++v55->AbAllocationRegionCount;
  v58 = ((char)v55->AbEntrySummary | (char)v55->AbOrphanedEntrySummary) ^ 0x3F;
  v42 = !_BitScanReverse((unsigned int *)&v59, v58);
  v112 = v59;
  if ( v42 )
    goto LABEL_101;
  while ( 1 )
  {
    v60 = (__int64)&v55->LockEntries[v59];
    v58 &= ~(1 << v59);
    if ( (*(_BYTE *)(v60 + 26) & 1) != 0
      && (*(_DWORD *)(v60 + 32) & 1) == 0
      && (*(_QWORD *)(v60 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v60 + 40) == v56 )
    {
      *(_BYTE *)(v60 + 26) &= ~1u;
      if ( *(_QWORD *)(v60 + 32) )
        break;
    }
    v42 = !_BitScanReverse((unsigned int *)&v59, v58);
    v112 = v59;
    if ( v42 )
      goto LABEL_101;
  }
  if ( !v60 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v55->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v55, v48, v56, 0LL);
  }
  else
  {
    *(_BYTE *)(v60 + 32) |= 2u;
    if ( *(__int64 *)(v60 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v60);
    v61 = *(_DWORD *)(v60 + 88) & 0x1FFFF;
    v62 = *(_DWORD *)(v60 + 88) & 0xFFFE0000;
    *(_BYTE *)(v60 + 25) &= ~1u;
    v113 = v61;
    *(_DWORD *)(v60 + 88) = v62;
    *(_QWORD *)(v60 + 32) = 0LL;
    v63 = (signed __int64)(v60 - (unsigned __int64)v55->LockEntries) / 96;
    if ( v57 == 1 )
      v55->AbEntrySummary |= 1 << v63;
    else
      _InterlockedOr8((volatile signed __int8 *)&v55->AbOrphanedEntrySummary, 1 << v63);
  }
  --v55->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v55);
  v42 = v55->SpecialApcDisable++ == -1;
  if ( v42 && ($C459BD0D405E8E46662177FB3D0A143F *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
