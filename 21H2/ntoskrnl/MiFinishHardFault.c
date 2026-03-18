/*
 * XREFs of MiFinishHardFault @ 0x140334C40
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14027938C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 * Callees:
 *     MiInvalidateCollidedIos @ 0x140226AE0 (MiInvalidateCollidedIos.c)
 *     MiDecayPfnFullyInitialized @ 0x1402302B0 (MiDecayPfnFullyInitialized.c)
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiLockOwnedProtoPage @ 0x140273EE0 (MiLockOwnedProtoPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiCreateDecayPfn @ 0x1402E48A0 (MiCreateDecayPfn.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiEnqueuePageList @ 0x1403365F0 (MiEnqueuePageList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140337F0C (MiIsPfnCommitNotCharged.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     MiReleasePrefetchGapPages @ 0x140386FBC (MiReleasePrefetchGapPages.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140591E04 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiRestockOverCommit @ 0x1405B3340 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  PSLIST_ENTRY v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int8 v19; // bl
  int v20; // ebx
  struct _SLIST_ENTRY *DecayPfn; // rcx
  __int64 v22; // rax
  __int64 v23; // r11
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rbx
  char v29; // al
  int v30; // esi
  __int64 v31; // r10
  int v32; // ecx
  unsigned __int64 v33; // rdx
  char v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdi
  struct _KPRCB *v39; // rdx
  __int64 CachedCommit; // r8
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  struct _KPRCB *v45; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v47; // zf
  signed __int32 v48; // eax
  int CanBatchSystemCacheUnmapPages; // ecx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // r9
  int v57; // edi
  __int64 v58; // r8
  unsigned __int8 v59; // bl
  __int64 v60; // rcx
  __int64 *v62; // r12
  __int64 v63; // rax
  __int64 v64; // rbx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v74; // eax
  char v75; // al
  char v76; // al
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  __int64 v85; // rbx
  unsigned __int64 v86; // rsi
  struct _KPRCB *v87; // r8
  __int64 v88; // rdx
  signed __int32 v89; // eax
  int v90; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v91; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+30h] [rbp-D0h]
  int v93; // [rsp+38h] [rbp-C8h] BYREF
  int v94; // [rsp+3Ch] [rbp-C4h] BYREF
  int v95; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+50h] [rbp-B0h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-A8h]
  __int64 v99; // [rsp+60h] [rbp-A0h] BYREF
  int v100; // [rsp+68h] [rbp-98h]
  _BYTE v101[12]; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v102; // [rsp+78h] [rbp-88h]
  __int64 v103; // [rsp+80h] [rbp-80h]
  __int16 v104; // [rsp+88h] [rbp-78h]
  int v105; // [rsp+8Ah] [rbp-76h]
  __int16 v106; // [rsp+8Eh] [rbp-72h]
  __int64 v107; // [rsp+90h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+98h] [rbp-68h]
  _QWORD *v109; // [rsp+A0h] [rbp-60h]
  __int64 v110; // [rsp+A8h] [rbp-58h]
  __int64 v111; // [rsp+B0h] [rbp-50h]
  __int64 *v112; // [rsp+B8h] [rbp-48h]
  PSLIST_ENTRY v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v116[20]; // [rsp+F0h] [rbp-10h] BYREF
  char v117; // [rsp+1A0h] [rbp+A0h]

  v5 = a3;
  memset(v116, 0, 0x68uLL);
  v8 = *(PSLIST_ENTRY *)(a1 + 56);
  v9 = *(_QWORD *)(v5 + 152);
  v10 = v5 + 272;
  v11 = *(_QWORD *)(v5 + 232);
  v114 = a1 + 56;
  v12 = *(_QWORD *)(v5 + 256);
  memset(v101, 0, sizeof(v101));
  if ( v12 )
    v10 = v12;
  v105 = 0;
  v106 = 0;
  v104 = 0;
  v113 = v8;
  v13 = *(_QWORD *)(v10 + 32) + *(unsigned int *)(v10 + 44);
  v14 = (_QWORD *)(v10 + 48);
  v112 = (__int64 *)(v10 + 48);
  v15 = *(unsigned int *)(v10 + 40) + 4095LL;
  v110 = v10;
  v109 = 0LL;
  v91 = v10 + 48 + 8 * ((((unsigned __int64)(v13 & 0xFFF) + v15) >> 12) - 1);
  v16 = *(unsigned int *)(v5 + 188);
  if ( (_DWORD)v16 == -1 )
    v102 = -1LL;
  else
    v102 = (unsigned __int64)&v14[v16];
  v17 = *(_QWORD *)(v5 + 160);
  v111 = *(_QWORD *)(v5 + 224);
  v18 = *(unsigned int *)(v5 + 192);
  v96 = v17;
  if ( (v18 & 0x100000) != 0 || !v8 || (v18 & 8) != 0 )
  {
    v100 = -1073740748;
    if ( !v8 )
    {
      LOBYTE(v18) = 17;
      CurrentIrql = v18;
      goto LABEL_14;
    }
  }
  else
  {
    v100 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( (*(_DWORD *)(v5 + 192) & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(&v8[11].Next + 1) & 7) != 0 )
    {
      v47 = (*(_WORD *)(v9 + 486))++ == 0xFFFF;
      if ( v47 && *(_QWORD *)(v9 + 152) != v9 + 152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      KeLeaveCriticalRegionThread(v9);
    }
  }
  MiRelockFaultState((__int64 *)(a1 + 56), a2);
  LOBYTE(v18) = CurrentIrql;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
LABEL_14:
  v117 = 17;
  if ( v17 )
  {
    if ( (_BYTE)v18 == 17 )
    {
      v19 = MiLockPageInline(v17);
      v117 = v19;
    }
    else
    {
      v93 = 0;
      v19 = 17;
      v117 = 17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v93, v9, v10, (__int64)v8);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
        v117 = 17;
      }
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v17, v9, v10, v8) || (unsigned int)MiChargeForLockedPage(v17, 1LL) )
      ++*(_WORD *)(v17 + 32);
    MiLockOwnedProtoPage(v17, v19);
  }
  if ( *(_DWORD *)(v5 + 180) )
  {
    v20 = -1073741670;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 80) = -1073741670;
  }
  else
  {
    v20 = *(_DWORD *)(v5 + 80);
  }
  if ( *(_QWORD *)(v5 + 16) != v5 + 16 )
  {
    HIBYTE(v104) = MiInvalidateCollidedIos(v5);
    if ( !HIBYTE(v104) )
    {
      *(_DWORD *)(v5 + 80) = -1073741801;
      *(_QWORD *)(v5 + 88) = 0LL;
    }
  }
  if ( v17 )
  {
    v94 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v94, v9, v10, (__int64)v8);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(v17) )
      MiPfnReferenceCountIsZero(v17, 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v100 >= 0 && !(unsigned int)MiIsFaultPteIntact(a1, v111, v11, (_QWORD *)(v5 + 168)) )
    v100 = -1073740748;
  if ( v20 >= 0
    && ((v9 = *(unsigned int *)(v5 + 192), (v9 & 8) != 0)
     || *(_QWORD *)(v5 + 256)
     || (_QWORD *)v91 != v14 && v102 > v110 + 56)
    && (*(_DWORD *)(v5 + 192) & 0x88000) == 0x80000
    && (*(_DWORD *)(v5 + 192) & 0xE00) != 0 )
  {
    DecayPfn = MiCreateDecayPfn();
    ListEntry = DecayPfn;
  }
  else
  {
    DecayPfn = 0LL;
    ListEntry = 0LL;
  }
  v22 = *(_QWORD *)(a1 + 56);
  v23 = 0LL;
  v107 = a4;
  v24 = v91;
  v103 = v22;
  v116[2] = 0x3FFFFFFFFFLL;
  v116[3] = 0x3FFFFFFFFFLL;
  v99 = v5;
  LODWORD(v116[1]) = 0;
  LODWORD(v116[12]) = 2;
  v116[11] = DecayPfn;
  v92 = 0LL;
  if ( (unsigned __int64)v14 <= v91 )
  {
    v25 = 0x20000000000000LL;
    while ( 1 )
    {
      v26 = *v14;
      v97 = v26;
      v27 = 48 * v26;
      v28 = 48 * v26 - 0x220000000000LL;
      v29 = *(_BYTE *)(v28 + 34) & 7;
      if ( v28 == qword_140C53280 )
      {
        if ( v29 == 7 && *(_QWORD *)(v28 + 8) == -3LL )
        {
          *(_QWORD *)v28 = v23;
          v23 = 48 * v26 - 0x220000000000LL;
          v92 = v23;
        }
        goto LABEL_90;
      }
      if ( v29 == 7 && *(_QWORD *)(v28 + 8) == -3LL )
      {
        *(_QWORD *)v28 = v23;
        v23 = 48 * v26 - 0x220000000000LL;
        v92 = v23;
        goto LABEL_90;
      }
      if ( v28 == *(_QWORD *)(v5 + 248) )
      {
        v109 = v14;
        goto LABEL_90;
      }
      v30 = v116[12];
      *(_QWORD *)&v101[4] = v14;
      v90 = v116[12];
      if ( LODWORD(v116[12]) == 3 )
        goto LABEL_210;
      if ( v116[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          MiInsertPagesInList(v116, 0LL);
          if ( !v116[0] )
          {
            v25 = 0x20000000000000LL;
            goto LABEL_120;
          }
        }
      }
      else
      {
LABEL_120:
        v95 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v95, v9, v25, (__int64)v8);
          while ( *(__int64 *)(v28 + 24) < 0 );
        }
      }
      if ( v30 != 2 )
      {
LABEL_210:
        if ( v30 )
        {
          if ( v30 == 3 )
            goto LABEL_85;
          v75 = *(_BYTE *)(v28 + 34) & 0xF7;
          v47 = (v99 & 0x42) == 0;
          *(_BYTE *)(v28 + 34) = v75;
          if ( !v47 )
            *(_BYTE *)(v28 + 34) = v75 | 0x10;
          v47 = (*(_WORD *)(v28 + 32))-- == 1;
          if ( !v47 )
          {
            if ( v30 == 1 )
              MiReleaseWriteInProgressCharges(
                *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL)),
                1uLL,
                1);
            goto LABEL_131;
          }
          if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) == 0 )
          {
            v76 = *(_BYTE *)(v28 + 35);
            if ( (v76 & 0x40) == 0 && (v76 & 0x10) == 0 )
              goto LABEL_85;
          }
LABEL_156:
          CanBatchSystemCacheUnmapPages = 2;
          goto LABEL_86;
        }
        CanBatchSystemCacheUnmapPages = MiCanBatchSystemCacheUnmapPages(&v99, 48 * v26 - 0x220000000000LL);
        if ( !CanBatchSystemCacheUnmapPages )
          goto LABEL_131;
      }
      else
      {
        v31 = v99;
        v32 = HIWORD(*(_DWORD *)(v99 + 112));
        if ( (*(_DWORD *)(v99 + 112) & 1) != 0 && (_WORD)v32 )
          *(_WORD *)(v99 + 114) = v32 - 1;
        v8 = ListEntry;
        *(_BYTE *)(v28 + 34) &= ~0x20u;
        *(_QWORD *)v28 = 0LL;
        if ( v8 )
        {
          v33 = *(_QWORD *)(v28 + 40);
          if ( (v33 & 0x20000000000000LL) != 0
            || byte_140C58C66
            && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * (v27 >> 4)) >> 9) )
          {
            goto LABEL_156;
          }
          v34 = *(_BYTE *)(v28 + 35);
          if ( (v34 & 0x10) != 0
            || (v34 & 0x40) != 0
            || *(_QWORD *)(qword_140C51F48 + 8 * ((*((_QWORD *)&v8[2].Next + 1) >> 43) & 0x3FFLL)) != *(_QWORD *)(qword_140C51F48 + 8 * ((v33 >> 43) & 0x3FF))
            || (v34 & 7u) >= 5 )
          {
            goto LABEL_156;
          }
        }
        if ( (*(_BYTE *)(v28 + 34) & 0x18) != 0 )
          goto LABEL_156;
        if ( byte_140C58C66
          && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * (v27 >> 4)) >> 9) )
        {
          CanBatchSystemCacheUnmapPages = 2;
        }
        else
        {
          v9 = *(unsigned __int8 *)(v28 + 35);
          if ( (v9 & 0x40) != 0 )
          {
            CanBatchSystemCacheUnmapPages = 2;
          }
          else if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) != 0 )
          {
            CanBatchSystemCacheUnmapPages = 2;
          }
          else if ( (v9 & 0x10) != 0 )
          {
            CanBatchSystemCacheUnmapPages = 2;
          }
          else if ( *(int *)(v31 + 80) < 0 )
          {
            CanBatchSystemCacheUnmapPages = 2;
          }
          else if ( (unsigned __int64)v14 >= v102 )
          {
            CanBatchSystemCacheUnmapPages = 2;
          }
          else
          {
            if ( (*(_DWORD *)(v31 + 192) & 0x8000) != 0 )
            {
              *v14 |= 0x8000000000000000uLL;
LABEL_131:
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_89;
            }
            if ( *(_WORD *)(v28 + 32) != 1 )
            {
              MiRemoveLockedPageCharge(48 * v26 - 0x220000000000LL);
              goto LABEL_131;
            }
            v35 = *(_QWORD *)(v28 + 40);
            if ( ((v35 >> 53) & 1) != 0 )
            {
              *(_WORD *)(v28 + 32) = 0;
              goto LABEL_85;
            }
            if ( (v35 & 0x10000000000LL) == 0 )
            {
              *(_WORD *)(v28 + 32) = 0;
              if ( ((v35 >> 53) & 1) != 0 )
                goto LABEL_85;
              v36 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
              if ( (v36 > 0xFFFFF6BFFFFFFF78uLL || v36 < 0xFFFFF68000000000uLL) && (v9 & 0x20) != 0 )
              {
                *(_BYTE *)(v28 + 35) = v9 & 0xDF;
                goto LABEL_85;
              }
              if ( ((v35 & 0x8000000000000000uLL) == 0LL || (*(_DWORD *)(v28 + 16) & 0x400LL) == 0)
                && !(unsigned int)MiIsPfnCommitNotCharged(48 * v26 - 0x220000000000LL, v9) )
              {
                v38 = *(_QWORD *)(qword_140C51F48 + 8 * ((v35 >> 43) & 0x3FF));
                goto LABEL_80;
              }
              v37 = 1LL;
              memset(&LockHandle, 0, sizeof(LockHandle));
              v38 = *(_QWORD *)(qword_140C51F48 + 8 * ((v35 >> 43) & 0x3FF));
              if ( !*(_QWORD *)(v38 + 16056) )
                goto LABEL_256;
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v38 + 16040), &LockHandle);
              v37 = MiRestockOverCommit(v38, 1LL);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              OldIrql = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v71 = KeGetCurrentIrql();
                  if ( v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v47 = (v74 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v74;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(OldIrql);
              v26 = v97;
              if ( v37 )
              {
LABEL_256:
                if ( (ULONG_PTR *)v38 == &MiSystemPartition )
                {
                  v39 = KeGetCurrentPrcb();
                  _m_prefetchw((const void *)&v39->CachedCommit);
                  CachedCommit = v39->CachedCommit;
                  if ( (unsigned __int64)(v37 + CachedCommit) <= 0x100 )
                  {
                    while ( 1 )
                    {
                      v41 = _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v39->CachedCommit,
                              v37 + CachedCommit,
                              CachedCommit);
                      if ( v41 == CachedCommit )
                        break;
                      CachedCommit = v41;
                      if ( (unsigned __int64)(v41 + v37) > 0x100 )
                        goto LABEL_78;
                    }
LABEL_81:
                    v45 = KeGetCurrentPrcb();
                    CachedResidentAvailable = (int)v45->CachedResidentAvailable;
                    if ( (_DWORD)CachedResidentAvailable == -1 )
                    {
                      v66 = 1LL;
                    }
                    else
                    {
                      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                      {
                        while ( 1 )
                        {
                          v48 = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v45->CachedResidentAvailable,
                                  CachedResidentAvailable + 1,
                                  CachedResidentAvailable);
                          v47 = (_DWORD)CachedResidentAvailable == v48;
                          LODWORD(CachedResidentAvailable) = v48;
                          if ( v47 )
                            break;
                          if ( v48 == -1 || (unsigned __int64)(v48 + 1LL) > 0x100 )
                            goto LABEL_147;
                        }
LABEL_84:
                        v30 = v90;
LABEL_85:
                        CanBatchSystemCacheUnmapPages = 1;
                        goto LABEL_86;
                      }
LABEL_147:
                      v66 = 1LL;
                      if ( (int)CachedResidentAvailable > 192 )
                      {
                        v66 = 1LL;
                        if ( (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                                  (volatile signed __int32 *)&v45->CachedResidentAvailable,
                                                                  192,
                                                                  CachedResidentAvailable) )
                          v66 = (int)CachedResidentAvailable - 192 + 1LL;
                      }
                      if ( !v66 )
                        goto LABEL_84;
                    }
LABEL_151:
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 16960), v66);
                    goto LABEL_84;
                  }
                }
LABEL_78:
                v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 17256), -v37);
                v43 = *(_QWORD *)(v38 + 16032);
                if ( v42 >= v43 && v42 - v37 < v43 || (v44 = *(_QWORD *)(v38 + 16024), v42 >= v44) && v42 - v37 < v44 )
                  MiSyncCommitSignals(v38, 0LL);
              }
LABEL_80:
              if ( (ULONG_PTR *)v38 == &MiSystemPartition )
                goto LABEL_81;
              v66 = 1LL;
              goto LABEL_151;
            }
            *(_WORD *)(v28 + 32) = 1;
            CanBatchSystemCacheUnmapPages = 2;
          }
        }
      }
LABEL_86:
      if ( !v116[0] )
      {
        if ( (*(_BYTE *)(v28 + 34) & 0x10) != 0 )
          LODWORD(v116[1]) = 3;
        else
          LODWORD(v116[1]) = 2;
      }
      if ( CanBatchSystemCacheUnmapPages != 1 )
      {
        MiInsertPagesInList(v116, 1LL);
        if ( v30 )
        {
          if ( v30 == 2 )
          {
            MiHardFaultPageRelease(&v99, v28);
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_89;
          }
          MiReleaseWriteInProgressCharges(
            *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL)),
            1uLL,
            1);
          MiPfnReferenceCountIsZero(v28, v26);
        }
        else
        {
          MiDecrementShareCount(v28, v67, v68, v69);
        }
        goto LABEL_131;
      }
      MiEnqueuePageList(v116, v26);
LABEL_89:
      v23 = v92;
LABEL_90:
      v24 = v91;
      ++v14;
      v25 = 0x20000000000000LL;
      if ( (unsigned __int64)v14 > v91 )
      {
        v17 = v96;
        break;
      }
    }
  }
  MiInsertPagesInList(v116, 0LL);
  if ( v92 )
    MiReleasePrefetchGapPages(v92);
  v53 = *(_QWORD *)(v5 + 248);
  LODWORD(v96) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v96, v50, v51, v52);
    while ( *(__int64 *)(v53 + 24) < 0 );
  }
  v54 = HIWORD(*(_DWORD *)(v5 + 112));
  if ( (*(_DWORD *)(v5 + 112) & 1) != 0 && (_WORD)v54 )
    *(_WORD *)(v5 + 114) = v54 - 1;
  *(_BYTE *)(v53 + 34) &= ~0x20u;
  *(_QWORD *)&v101[4] = v109;
  *(_QWORD *)v53 = 0LL;
  MiHardFaultPageRelease(&v99, v53);
  v57 = *(_DWORD *)(v5 + 80);
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 248) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v17 )
  {
    v58 = CurrentIrql;
    v59 = 17;
    LODWORD(v91) = 0;
    if ( (_BYTE)CurrentIrql == 17 )
      v59 = v117;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v91, v55, v58, v56);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    *(_BYTE *)(v17 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(v17) )
      MiPfnReferenceCountIsZero(v17, 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v59 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v77 = KeGetCurrentIrql();
          if ( v77 <= 0xFu && v59 <= 0xFu && v77 >= 2u )
          {
            v78 = KeGetCurrentPrcb();
            v79 = v78->SchedulerAssist;
            v80 = ~(unsigned __int16)(-1LL << (v59 + 1));
            v47 = (v80 & v79[5]) == 0;
            v79[5] &= v80;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(v78);
          }
        }
      }
      __writecr8(v59);
    }
  }
  if ( (*(_DWORD *)(v5 + 192) & 0x8000) != 0 )
  {
    MmCheckCachedPageStates(v111 + (*(_DWORD *)(v5 + 96) & 0x3FFFF), *(unsigned int *)(v110 + 40), 2, 0LL);
    v62 = v112;
    if ( (unsigned __int64)v112 <= v24 )
    {
      do
      {
        if ( *v62 < 0 )
        {
          v63 = *v62 & 0x7FFFFFFFFFFFFFFFLL;
          *v62 = v63;
          v64 = 48 * v63 - 0x220000000000LL;
          v65 = (unsigned __int8)MiLockPageInline(v64);
          MiRemoveLockedPageChargeAndDecRef(v64);
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v81 = KeGetCurrentIrql();
              if ( v81 <= 0xFu && (unsigned __int8)v65 <= 0xFu && v81 >= 2u )
              {
                v82 = KeGetCurrentPrcb();
                v83 = v82->SchedulerAssist;
                v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
                v47 = (v84 & v83[5]) == 0;
                v83[5] &= v84;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick(v82);
              }
            }
          }
          __writecr8(v65);
        }
        ++v62;
      }
      while ( (unsigned __int64)v62 <= v24 );
      v5 = a3;
    }
  }
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  if ( v113 && (*(_DWORD *)(v5 + 192) & 0x1000000) != 0 )
    MiReleaseFaultState(v114, 17, 0LL);
  if ( (*(_DWORD *)(v5 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v5 + 200));
  if ( *(int *)(v5 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v5 + 56), 0, 0);
  v60 = *(_QWORD *)(v5 + 104);
  if ( v60 )
  {
    v85 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v60 + 40) >> 43) & 0x3FFLL));
    MiReleaseFreshPage(v60);
    v86 = 1LL;
    MiReturnCommit(v85, 1LL);
    if ( (ULONG_PTR *)v85 == &MiSystemPartition )
    {
      v87 = KeGetCurrentPrcb();
      v88 = (int)v87->CachedResidentAvailable;
      if ( (_DWORD)v88 != -1 )
      {
        if ( (unsigned __int64)(v88 + 1) <= 0x100 )
        {
          do
          {
            v89 = _InterlockedCompareExchange((volatile signed __int32 *)&v87->CachedResidentAvailable, v88 + 1, v88);
            v47 = (_DWORD)v88 == v89;
            LODWORD(v88) = v89;
            if ( v47 )
              goto LABEL_114;
          }
          while ( v89 != -1 && (unsigned __int64)(v89 + 1LL) <= 0x100 );
        }
        if ( (int)v88 > 192
          && (_DWORD)v88 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v87->CachedResidentAvailable,
                              192,
                              v88) )
        {
          v86 = (int)v88 - 192 + 1LL;
        }
        if ( !v86 )
          goto LABEL_114;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 16960), v86);
  }
LABEL_114:
  if ( v57 < 0 )
  {
    if ( (*(_DWORD *)(v5 + 112) & 3) != 1 )
      goto LABEL_116;
    goto LABEL_171;
  }
  v57 = v100;
  if ( !(_BYTE)v104 )
LABEL_171:
    v57 = -1073740748;
LABEL_116:
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v5);
  return (unsigned int)v57;
}
