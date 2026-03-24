/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1405513D0
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x14026D9E0 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x1402B8C2C (MiIsDecayPfn.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E4380 (KeMakeKernelDirectoryTableBase.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiSetPfnBlink @ 0x140318130 (MiSetPfnBlink.c)
 *     MiInsertNumaStandbyPage @ 0x140329890 (MiInsertNumaStandbyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x140551360 (MiReuseStandbyPage.c)
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
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  ULONG_PTR v46; // r9
  unsigned __int64 v47; // rdx
  volatile signed __int32 *v48; // r8
  unsigned int v49; // eax
  unsigned __int64 v50; // rcx
  __int64 v51; // r10
  ULONG_PTR v52; // rcx
  __int64 v53; // rbx
  unsigned __int64 *v54; // r8
  ULONG_PTR v55; // r10
  __int64 updated; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r12
  unsigned __int64 v63; // rax
  __int64 v64; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 *v68; // r14
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // r8
  int v73; // eax
  bool v74; // zf
  char v75; // bl
  char v76; // al
  char v77; // r8
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // edx
  signed __int32 v82[8]; // [rsp+0h] [rbp-69h] BYREF
  int v83; // [rsp+20h] [rbp-49h]
  int v84; // [rsp+24h] [rbp-45h]
  __int64 v85; // [rsp+28h] [rbp-41h]
  unsigned __int8 *v86; // [rsp+30h] [rbp-39h]
  int v87; // [rsp+38h] [rbp-31h]
  _QWORD *v88; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v90; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v91; // [rsp+68h] [rbp-1h]
  __int64 v92; // [rsp+70h] [rbp+7h]
  int v93; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v94; // [rsp+80h] [rbp+17h]
  unsigned __int8 *v95; // [rsp+88h] [rbp+1Fh]
  int v97; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v97 = 0;
  v10 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
  v83 = 0;
  v84 = MmNumberOfChannels;
  v11 = *(_QWORD *)(qword_140C4E648 + 8 * v10);
  v12 = 0LL;
  v92 = v11;
  v86 = 0LL;
  v13 = *(_QWORD *)(v11 + 16) + 4544 * v4;
  v94 = v13;
  v14 = *(_DWORD *)(v13 + 4280) & 1;
  v87 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v13 + 4313);
    v86 = (unsigned __int8 *)(v13 + 4313);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v7 = 1;
        v97 = a3;
        v12 = 0LL;
        v84 = 1;
        v86 = 0LL;
        goto LABEL_10;
      }
      if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v13 + 4317);
        v86 = (unsigned __int8 *)(v13 + 4317);
      }
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4 )
        return v6;
      v12 = v86;
      v9 = a3;
      v7 = v84;
      v14 = v87;
      v11 = v92;
      v83 = a3;
    }
  }
  a3 = 0;
LABEL_10:
  v95 = &v12[v7];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        a3 = *v12;
        v97 = a3;
        if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4
          && a3 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v6;
        }
        v11 = v92;
      }
      else
      {
        v97 = v9;
        a3 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v83 = v9;
      }
    }
    v90 = v11 + 2752;
    v15 = v11 + 2432;
    v85 = v11 + 2432;
    if ( v11 + 2432 < (unsigned __int64)(v11 + 2752) )
      break;
LABEL_51:
    v12 = v86 + 1;
    v86 = v12;
    if ( v12 >= v95 )
      return v6;
    v7 = v84;
    v14 = v87;
  }
  v16 = (_QWORD *)(192LL * a3 + 3264 + v13);
  v17 = (volatile __int64 *)(v11 + 2464);
  v88 = v16;
  v18 = v11 + 2752;
  v91 = (unsigned __int64 *)(v11 + 2464);
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_49:
    v15 += 40LL;
    v17 += 5;
    v16 += 3;
    v85 = v15;
    v91 = (unsigned __int64 *)v17;
    v88 = v16;
    if ( v15 >= v18 )
    {
      v9 = v83;
      v13 = v94;
      a3 = v97;
      v11 = v92;
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
          v74 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v74 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v88;
    v15 = v85;
LABEL_48:
    v18 = v90;
    goto LABEL_49;
  }
  v26 = 48 * v21 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    goto LABEL_53;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v93 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v93, v27, v28, v29);
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
          v74 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v74 )
            KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    v15 = v85 - 40;
    v17 = (volatile __int64 *)(v91 - 5);
    v16 = v88 - 3;
    goto LABEL_48;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v91;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v91);
  if ( v21 != *v88 )
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
          v74 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v74 )
            KiRemoveSystemWorkPriorityKick((__int64)v35);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v21 - 0x58000000000LL) )
  {
    if ( dword_140C4E6CC != 1 )
      goto LABEL_82;
    v46 = v21 & 0x1F;
    LOBYTE(v47) = 1;
    v48 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v21 >> 5));
    if ( v46 + 1 > 0x20 )
    {
      if ( (v21 & 0x1F) != 0 )
      {
        _InterlockedOr(v48++, ((1 << (32 - (v21 & 0x1F))) - 1) << v46);
        v47 = 1LL - (32 - (unsigned int)(v21 & 0x1F));
        if ( v47 >= 0x20 )
        {
          v50 = v47 >> 5;
          v47 += -32LL * (v47 >> 5);
          do
          {
            *v48++ = -1;
            --v50;
          }
          while ( v50 );
        }
        if ( !v47 )
        {
LABEL_82:
          v51 = v38 & *(_QWORD *)v26;
          v52 = v38 & *(_QWORD *)(v26 + 24);
          v53 = v38 & v6;
          if ( (*(_BYTE *)(v26 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v52) )
            {
              updated = MiUpdateTransitionPteFrame(v54[2], v6);
              *(_QWORD *)(v57 + 16) = updated;
            }
            else
            {
              *v54 = v53 | *v54 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v55) )
            {
              *(_QWORD *)(v58 + 40) = v53 | *(_QWORD *)(v58 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_96;
            }
            v59 = v58;
          }
          else
          {
            if ( v52 == v38 )
            {
              v60 = v85;
              *(_QWORD *)(v85 + 16) = v6;
            }
            else
            {
              *(_QWORD *)(48 * v52 - 0x58000000000LL) = v53 | *(_QWORD *)(48 * v52 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v60 = v85;
            }
            if ( v51 == v38 )
            {
              *(_QWORD *)(v60 + 24) = v6;
LABEL_96:
              MiUnlinkNumaStandbyPage(48 * v21 - 0x58000000000LL);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v26 + 34) >> 6, 1);
              MiCopyPfnEntryEx(v8, 48 * v21 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v61);
              _InterlockedOr(v82, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v62 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
              if ( v62 == v21 )
              {
                v63 = v53 | *(_QWORD *)(v8 + 40) & 0xFFFFFFF000000000uLL;
                v64 = a1;
                *(_QWORD *)(v8 + 40) = v63;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v67 | v66) - 1392) = KernelDirectoryTableBase;
                v68 = (__int64 *)(v67 | *(_QWORD *)(v26 + 8));
              }
              else
              {
                v64 = a1;
                v68 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                                + 8LL * ((*(_DWORD *)(v26 + 8) >> 3) & 0x1FF));
              }
              v69 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v68);
              v70 = MiUpdateTransitionPteFrame(v69, v64);
              if ( MiPteInShadowRange((unsigned __int64)v68) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v73 = 1;
                  if ( !HIBYTE(word_140C4E008) )
                  {
                    v74 = (v70 & 1) == 0;
                    goto LABEL_105;
                  }
                }
                else
                {
                  v73 = 0;
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                  {
                    v74 = (v70 & 1) == 0;
LABEL_105:
                    if ( !v74 )
                      v70 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                v73 = 0;
              }
              *v68 = v70;
              if ( v73 )
                MiWritePteShadow((__int64)v68, v70, v72);
              if ( v62 != v21 )
              {
                LOBYTE(v71) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v68, v71, 0x80000000);
              }
              MiCopyPage(a1, v21, 0LL, 6);
              _InterlockedOr(v82, 0);
              v75 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v85 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v85 + 32));
                MiSetPfnTbFlushStamp(v8, v75, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v76 = *(_BYTE *)(v26 + 34);
              *(_QWORD *)(v26 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v26 + 34) = v76 & 0xC7;
              *(_BYTE *)(v26 + 35) &= ~0x20u;
              _InterlockedOr(v82, 0);
              MiSetPfnTbFlushStamp(48 * v21 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v26 = 0LL;
              MiSetPfnBlink(48 * v21 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 5;
              *(_QWORD *)(v26 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 + 16));
              v77 = *(_BYTE *)(v26 + 35);
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(v26 + 35) = v77 & 0xF7;
              *(_BYTE *)(v26 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v78 = KeGetCurrentIrql();
                  if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
                  {
                    v79 = KeGetCurrentPrcb();
                    v80 = v79->SchedulerAssist;
                    v81 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v74 = (v81 & v80[5]) == 0;
                    v80[5] &= v81;
                    if ( v74 )
                      KiRemoveSystemWorkPriorityKick((__int64)v79);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v21;
            }
            v59 = 48 * v51 - 0x58000000000LL;
          }
          MiSetPfnBlink(v59, v6, 0);
          goto LABEL_96;
        }
      }
      v49 = (1 << v47) - 1;
    }
    else
    {
      v49 = 1 << v46;
    }
    _InterlockedOr(v48, v49);
    goto LABEL_82;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v21 - 0x58000000000LL);
  *(_QWORD *)v26 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v8, v39, v40);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v41 = KeGetCurrentIrql();
      if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v74 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v74 )
          KiRemoveSystemWorkPriorityKick((__int64)v42);
      }
    }
  }
  v6 = v21;
LABEL_70:
  __writecr8(CurrentIrql);
  return v6;
}
