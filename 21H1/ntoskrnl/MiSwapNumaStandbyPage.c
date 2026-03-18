/*
 * XREFs of MiSwapNumaStandbyPage @ 0x14054B8E0
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiInsertNumaStandbyPage @ 0x1402DA110 (MiInsertNumaStandbyPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x140306A40 (MiIsDecayPfn.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140328594 (KeMakeKernelDirectoryTableBase.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiUpdateTransitionPteFrame @ 0x14034B85C (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x14054B870 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v6; // r12
  unsigned int v7; // edx
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned __int8 *v12; // rax
  __int64 v13; // r13
  int v14; // r8d
  unsigned __int64 v15; // rax
  _QWORD *v16; // r13
  volatile __int64 *v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  ULONG_PTR v23; // r13
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // r11
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  ULONG_PTR v48; // r9
  unsigned __int64 v49; // rdx
  volatile signed __int32 *v50; // r8
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // r10
  ULONG_PTR v54; // rcx
  __int64 v55; // rbx
  unsigned __int64 *v56; // r8
  ULONG_PTR v57; // r10
  __int64 updated; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // r12
  unsigned __int64 v66; // rax
  __int64 v67; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rdx
  int v75; // eax
  bool v76; // zf
  char v77; // bl
  char v78; // al
  char v79; // r8
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // edx
  signed __int32 v84[8]; // [rsp+0h] [rbp-69h] BYREF
  int v85; // [rsp+20h] [rbp-49h]
  int v86; // [rsp+24h] [rbp-45h]
  __int64 v87; // [rsp+28h] [rbp-41h]
  unsigned __int8 *v88; // [rsp+30h] [rbp-39h]
  int v89; // [rsp+38h] [rbp-31h]
  _QWORD *v90; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v92; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v93; // [rsp+68h] [rbp-1h]
  __int64 v94; // [rsp+70h] [rbp+7h]
  int v95; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v96; // [rsp+80h] [rbp+17h]
  unsigned __int8 *v97; // [rsp+88h] [rbp+1Fh]
  int v99; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v99 = 0;
  v10 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
  v85 = 0;
  v86 = MmNumberOfChannels;
  v11 = *(_QWORD *)(qword_140C4E588 + 8 * v10);
  v12 = 0LL;
  v94 = v11;
  v88 = 0LL;
  v13 = *(_QWORD *)(v11 + 16) + 4544 * v4;
  v96 = v13;
  v14 = *(_DWORD *)(v13 + 4280) & 1;
  v89 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v13 + 4313);
    v88 = (unsigned __int8 *)(v13 + 4313);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v7 = 1;
        v99 = a3;
        v12 = 0LL;
        v86 = 1;
        v88 = 0LL;
        goto LABEL_10;
      }
      if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v13 + 4317);
        v88 = (unsigned __int8 *)(v13 + 4317);
      }
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4 )
        return v6;
      v12 = v88;
      v9 = a3;
      v7 = v86;
      v14 = v89;
      v11 = v94;
      v85 = a3;
    }
  }
  a3 = 0;
LABEL_10:
  v97 = &v12[v7];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        a3 = *v12;
        v99 = a3;
        if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4
          && a3 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v6;
        }
        v11 = v94;
      }
      else
      {
        v99 = v9;
        a3 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v85 = v9;
      }
    }
    v92 = v11 + 2752;
    v15 = v11 + 2432;
    v87 = v11 + 2432;
    if ( v11 + 2432 < (unsigned __int64)(v11 + 2752) )
      break;
LABEL_51:
    v12 = v88 + 1;
    v88 = v12;
    if ( v12 >= v97 )
      return v6;
    v7 = v86;
    v14 = v89;
  }
  v16 = (_QWORD *)(192LL * a3 + 3264 + v13);
  v17 = (volatile __int64 *)(v11 + 2464);
  v90 = v16;
  v18 = v11 + 2752;
  v93 = (unsigned __int64 *)(v11 + 2464);
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_49:
    v15 += 40LL;
    v17 += 5;
    v16 += 3;
    v87 = v15;
    v93 = (unsigned __int64 *)v17;
    v90 = v16;
    if ( v15 >= v18 )
    {
      v9 = v85;
      v13 = v96;
      a3 = v99;
      v11 = v94;
      goto LABEL_51;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v17;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v17);
  v23 = *v16;
  if ( v23 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v76 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v76 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v90;
    v15 = v87;
LABEL_48:
    v18 = v92;
    goto LABEL_49;
  }
  v28 = 48 * v23 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    goto LABEL_53;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v95 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v95, v29, v30, v31);
    while ( *(__int64 *)(v28 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v28 + 34) & 7) != 2 )
  {
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v76 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v76 )
            KiRemoveSystemWorkPriorityKick((__int64)v33);
        }
      }
    }
    __writecr8(CurrentIrql);
    v15 = v87 - 40;
    v17 = (volatile __int64 *)(v93 - 5);
    v16 = v90 - 3;
    goto LABEL_48;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v93;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v93);
  if ( v23 != *v90 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_40;
  }
LABEL_53:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v76 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v76 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v23 - 0x58000000000LL, v21, v22) )
  {
    if ( dword_140C4E60C != 1 )
      goto LABEL_82;
    v48 = v23 & 0x1F;
    LOBYTE(v49) = 1;
    v50 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (v23 >> 5));
    if ( v48 + 1 > 0x20 )
    {
      if ( (v23 & 0x1F) != 0 )
      {
        _InterlockedOr(v50++, ((1 << (32 - (v23 & 0x1F))) - 1) << v48);
        v49 = 1LL - (32 - (unsigned int)(v23 & 0x1F));
        if ( v49 >= 0x20 )
        {
          v52 = v49 >> 5;
          v49 += -32LL * (v49 >> 5);
          do
          {
            *v50++ = -1;
            --v52;
          }
          while ( v52 );
        }
        if ( !v49 )
        {
LABEL_82:
          v53 = v40 & *(_QWORD *)v28;
          v54 = v40 & *(_QWORD *)(v28 + 24);
          v55 = v40 & v6;
          if ( (*(_BYTE *)(v28 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v54) )
            {
              updated = MiUpdateTransitionPteFrame(v56[2], v6);
              *(_QWORD *)(v59 + 16) = updated;
            }
            else
            {
              *v56 = v55 | *v56 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v57) )
            {
              *(_QWORD *)(v60 + 40) = v55 | *(_QWORD *)(v60 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_96;
            }
            v61 = v60;
          }
          else
          {
            if ( v54 == v40 )
            {
              v62 = v87;
              *(_QWORD *)(v87 + 16) = v6;
            }
            else
            {
              *(_QWORD *)(48 * v54 - 0x58000000000LL) = v55 | *(_QWORD *)(48 * v54 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v62 = v87;
            }
            if ( v53 == v40 )
            {
              *(_QWORD *)(v62 + 24) = v6;
LABEL_96:
              MiUnlinkNumaStandbyPage(48 * v23 - 0x58000000000LL);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v28 + 34) >> 6, 1);
              MiCopyPfnEntryEx(v8, 48 * v23 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v63);
              _InterlockedOr(v84, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v65 = *(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL;
              if ( v65 == v23 )
              {
                v66 = v55 | *(_QWORD *)(v8 + 40) & 0xFFFFFFF000000000uLL;
                v67 = a1;
                *(_QWORD *)(v8 + 40) = v66;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v70 | v69) - 1392) = KernelDirectoryTableBase;
                v71 = (__int64 *)(v70 | *(_QWORD *)(v28 + 8));
              }
              else
              {
                v67 = a1;
                v71 = (__int64 *)(MiMapPageInHyperSpaceWorker(
                                    *(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL,
                                    0LL,
                                    0x80000000,
                                    v64)
                                + 8LL * ((*(_DWORD *)(v28 + 8) >> 3) & 0x1FF));
              }
              v72 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v71);
              v73 = MiUpdateTransitionPteFrame(v72, v67);
              if ( MiPteInShadowRange((unsigned __int64)v71) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v75 = 1;
                  if ( !HIBYTE(word_140C4DF48) )
                  {
                    v76 = (v73 & 1) == 0;
                    goto LABEL_105;
                  }
                }
                else
                {
                  v75 = 0;
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                  {
                    v76 = (v73 & 1) == 0;
LABEL_105:
                    if ( !v76 )
                      v73 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                v75 = 0;
              }
              *v71 = v73;
              if ( v75 )
                MiWritePteShadow((__int64)v71, v73);
              if ( v65 != v23 )
              {
                LOBYTE(v74) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v71, v74, 0x80000000);
              }
              MiCopyPage(a1, v23, 0LL, 6);
              _InterlockedOr(v84, 0);
              v77 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v87 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v87 + 32));
                MiSetPfnTbFlushStamp(v8, v77, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v78 = *(_BYTE *)(v28 + 34);
              *(_QWORD *)(v28 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v28 + 34) = v78 & 0xC7;
              *(_BYTE *)(v28 + 35) &= ~0x20u;
              _InterlockedOr(v84, 0);
              MiSetPfnTbFlushStamp(48 * v23 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v28 = 0LL;
              MiSetPfnBlink(48 * v23 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 5;
              *(_QWORD *)(v28 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v28 + 16));
              v79 = *(_BYTE *)(v28 + 35);
              *(_QWORD *)(v28 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(v28 + 35) = v79 & 0xF7;
              *(_BYTE *)(v28 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v80 = KeGetCurrentIrql();
                  if ( v80 <= 0xFu && CurrentIrql <= 0xFu && v80 >= 2u )
                  {
                    v81 = KeGetCurrentPrcb();
                    v82 = v81->SchedulerAssist;
                    v83 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v76 = (v83 & v82[5]) == 0;
                    v82[5] &= v83;
                    if ( v76 )
                      KiRemoveSystemWorkPriorityKick((__int64)v81);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v23;
            }
            v61 = 48 * v53 - 0x58000000000LL;
          }
          MiSetPfnBlink(v61, v6, 0);
          goto LABEL_96;
        }
      }
      v51 = (1 << v49) - 1;
    }
    else
    {
      v51 = 1 << v48;
    }
    _InterlockedOr(v50, v51);
    goto LABEL_82;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v23 - 0x58000000000LL);
  *(_QWORD *)v28 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v8, v41, v42);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v76 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v76 )
          KiRemoveSystemWorkPriorityKick((__int64)v44);
      }
    }
  }
  v6 = v23;
LABEL_70:
  __writecr8(CurrentIrql);
  return v6;
}
