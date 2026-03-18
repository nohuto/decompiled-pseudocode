/*
 * XREFs of MiSwapNumaStandbyPage @ 0x14054BF30
 * Callers:
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiInsertNumaStandbyPage @ 0x1402793E0 (MiInsertNumaStandbyPage.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E2234 (KeMakeKernelDirectoryTableBase.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiUpdateTransitionPteFrame @ 0x14031C51C (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiCanPageMove @ 0x14031D380 (MiCanPageMove.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x140344844 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399CB4 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x14054BEC0 (MiReuseStandbyPage.c)
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
  ULONG_PTR v21; // r13
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  __int64 v38; // r11
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  ULONG_PTR v44; // r9
  unsigned __int64 v45; // rdx
  volatile signed __int32 *v46; // r8
  unsigned int v47; // eax
  unsigned __int64 v48; // rcx
  __int64 v49; // r10
  ULONG_PTR v50; // rcx
  __int64 v51; // rbx
  unsigned __int64 *v52; // r8
  ULONG_PTR v53; // r10
  __int64 updated; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r12
  unsigned __int64 v62; // rax
  __int64 v63; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r8
  int v71; // eax
  bool v72; // zf
  char v73; // bl
  char v74; // al
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // r8
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // edx
  signed __int32 v83[8]; // [rsp+0h] [rbp-69h] BYREF
  int v84; // [rsp+20h] [rbp-49h]
  int v85; // [rsp+24h] [rbp-45h]
  __int64 v86; // [rsp+28h] [rbp-41h]
  unsigned __int8 *v87; // [rsp+30h] [rbp-39h]
  int v88; // [rsp+38h] [rbp-31h]
  _QWORD *v89; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v91; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v92; // [rsp+68h] [rbp-1h]
  __int64 v93; // [rsp+70h] [rbp+7h]
  int v94; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v95; // [rsp+80h] [rbp+17h]
  unsigned __int8 *v96; // [rsp+88h] [rbp+1Fh]
  int v98; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v98 = 0;
  v10 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
  v84 = 0;
  v85 = MmNumberOfChannels;
  v11 = *(_QWORD *)(qword_140C4E448 + 8 * v10);
  v12 = 0LL;
  v93 = v11;
  v87 = 0LL;
  v13 = *(_QWORD *)(v11 + 16) + 4544 * v4;
  v95 = v13;
  v14 = *(_DWORD *)(v13 + 4280) & 1;
  v88 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v13 + 4313);
    v87 = (unsigned __int8 *)(v13 + 4313);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v7 = 1;
        v98 = a3;
        v12 = 0LL;
        v85 = 1;
        v87 = 0LL;
        goto LABEL_10;
      }
      if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v13 + 4317);
        v87 = (unsigned __int8 *)(v13 + 4317);
      }
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4 )
        return v6;
      v12 = v87;
      v9 = a3;
      v7 = v85;
      v14 = v88;
      v11 = v93;
      v84 = a3;
    }
  }
  a3 = 0;
LABEL_10:
  v96 = &v12[v7];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        a3 = *v12;
        v98 = a3;
        if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4
          && a3 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v6;
        }
        v11 = v93;
      }
      else
      {
        v98 = v9;
        a3 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v84 = v9;
      }
    }
    v91 = v11 + 2752;
    v15 = v11 + 2432;
    v86 = v11 + 2432;
    if ( v11 + 2432 < (unsigned __int64)(v11 + 2752) )
      break;
LABEL_51:
    v12 = v87 + 1;
    v87 = v12;
    if ( v12 >= v96 )
      return v6;
    v7 = v85;
    v14 = v88;
  }
  v16 = (_QWORD *)(192LL * a3 + 3264 + v13);
  v17 = (volatile __int64 *)(v11 + 2464);
  v89 = v16;
  v18 = v11 + 2752;
  v92 = (unsigned __int64 *)(v11 + 2464);
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_49:
    v15 += 40LL;
    v17 += 5;
    v16 += 3;
    v86 = v15;
    v92 = (unsigned __int64 *)v17;
    v89 = v16;
    if ( v15 >= v18 )
    {
      v9 = v84;
      v13 = v95;
      a3 = v98;
      v11 = v93;
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
  v21 = *v16;
  if ( v21 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v72 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v89;
    v15 = v86;
LABEL_48:
    v18 = v91;
    goto LABEL_49;
  }
  v26 = 48 * v21 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    goto LABEL_53;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v94 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v94, v27, v28, v29);
    while ( *(__int64 *)(v26 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v26 + 34) & 7) != 2 )
  {
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v72 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    v15 = v86 - 40;
    v17 = (volatile __int64 *)(v92 - 5);
    v16 = v89 - 3;
    goto LABEL_48;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v92;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v92);
  if ( v21 != *v89 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_40;
  }
LABEL_53:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v72 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick((__int64)v35);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v21 - 0x58000000000LL) )
  {
    if ( dword_140C4E4CC != 1 )
      goto LABEL_82;
    v44 = v21 & 0x1F;
    LOBYTE(v45) = 1;
    v46 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (v21 >> 5));
    if ( v44 + 1 > 0x20 )
    {
      if ( (v21 & 0x1F) != 0 )
      {
        _InterlockedOr(v46++, ((1 << (32 - (v21 & 0x1F))) - 1) << v44);
        v45 = 1LL - (32 - (unsigned int)(v21 & 0x1F));
        if ( v45 >= 0x20 )
        {
          v48 = v45 >> 5;
          v45 += -32LL * (v45 >> 5);
          do
          {
            *v46++ = -1;
            --v48;
          }
          while ( v48 );
        }
        if ( !v45 )
        {
LABEL_82:
          v49 = v38 & *(_QWORD *)v26;
          v50 = v38 & *(_QWORD *)(v26 + 24);
          v51 = v38 & v6;
          if ( (*(_BYTE *)(v26 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v50) )
            {
              updated = MiUpdateTransitionPteFrame(v52[2], v6);
              *(_QWORD *)(v55 + 16) = updated;
            }
            else
            {
              *v52 = v51 | *v52 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v53) )
            {
              *(_QWORD *)(v56 + 40) = v51 | *(_QWORD *)(v56 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_96;
            }
            v57 = v56;
          }
          else
          {
            if ( v50 == v38 )
            {
              v58 = v86;
              *(_QWORD *)(v86 + 16) = v6;
            }
            else
            {
              *(_QWORD *)(48 * v50 - 0x58000000000LL) = v51 | *(_QWORD *)(48 * v50 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v58 = v86;
            }
            if ( v49 == v38 )
            {
              *(_QWORD *)(v58 + 24) = v6;
LABEL_96:
              MiUnlinkNumaStandbyPage(48 * v21 - 0x58000000000LL);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v26 + 34) >> 6, 1);
              MiCopyPfnEntryEx(v8, 48 * v21 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v59);
              _InterlockedOr(v83, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v61 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
              if ( v61 == v21 )
              {
                v62 = v51 | *(_QWORD *)(v8 + 40) & 0xFFFFFFF000000000uLL;
                v63 = a1;
                *(_QWORD *)(v8 + 40) = v62;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v66 | v65) - 1392) = KernelDirectoryTableBase;
                v67 = (__int64 *)(v66 | *(_QWORD *)(v26 + 8));
              }
              else
              {
                v63 = a1;
                v67 = (__int64 *)(MiMapPageInHyperSpaceWorker(
                                    *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL,
                                    0LL,
                                    0x80000000,
                                    v60)
                                + 8LL * ((*(_DWORD *)(v26 + 8) >> 3) & 0x1FF));
              }
              v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v67);
              v69 = MiUpdateTransitionPteFrame(v68, v63);
              if ( MiPteInShadowRange((unsigned __int64)v67) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v71 = 1;
                  if ( !HIBYTE(word_140C4DE08) )
                  {
                    v72 = (v69 & 1) == 0;
                    goto LABEL_105;
                  }
                }
                else
                {
                  v71 = 0;
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                  {
                    v72 = (v69 & 1) == 0;
LABEL_105:
                    if ( !v72 )
                      v69 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                v71 = 0;
              }
              *v67 = v69;
              if ( v71 )
                MiWritePteShadow((__int64)v67, v69, v70);
              if ( v61 != v21 )
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v67, 0x11u, 0x80000000);
              MiCopyPage(a1, v21, 0LL, 6);
              _InterlockedOr(v83, 0);
              v73 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v86 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v86 + 32));
                MiSetPfnTbFlushStamp(v8, v73, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v74 = *(_BYTE *)(v26 + 34);
              *(_QWORD *)(v26 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v26 + 34) = v74 & 0xC7;
              *(_BYTE *)(v26 + 35) &= ~0x20u;
              _InterlockedOr(v83, 0);
              MiSetPfnTbFlushStamp(48 * v21 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v26 = 0LL;
              MiSetPfnBlink(48 * v21 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 5;
              *(_QWORD *)(v26 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 + 16), v75, v76, v77);
              v78 = *(_BYTE *)(v26 + 35);
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(v26 + 35) = v78 & 0xF7;
              *(_BYTE *)(v26 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v79 = KeGetCurrentIrql();
                  if ( v79 <= 0xFu && CurrentIrql <= 0xFu && v79 >= 2u )
                  {
                    v80 = KeGetCurrentPrcb();
                    v81 = v80->SchedulerAssist;
                    v82 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v72 = (v82 & v81[5]) == 0;
                    v81[5] &= v82;
                    if ( v72 )
                      KiRemoveSystemWorkPriorityKick((__int64)v80);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v21;
            }
            v57 = 48 * v49 - 0x58000000000LL;
          }
          MiSetPfnBlink(v57, v6, 0);
          goto LABEL_96;
        }
      }
      v47 = (1 << v45) - 1;
    }
    else
    {
      v47 = 1 << v44;
    }
    _InterlockedOr(v46, v47);
    goto LABEL_82;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v21 - 0x58000000000LL);
  *(_QWORD *)v26 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v72 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v72 )
          KiRemoveSystemWorkPriorityKick((__int64)v40);
      }
    }
  }
  v6 = v21;
LABEL_70:
  __writecr8(CurrentIrql);
  return v6;
}
