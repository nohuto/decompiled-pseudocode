/*
 * XREFs of MiSwapNumaStandbyPage @ 0x140551610
 * Callers:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x140236E3C (MiIsDecayPfn.c)
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402956D0 (KeMakeKernelDirectoryTableBase.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiInsertNumaStandbyPage @ 0x1403345E0 (MiInsertNumaStandbyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x1405515A0 (MiReuseStandbyPage.c)
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
  __int64 v60; // r12
  unsigned __int64 v61; // rax
  __int64 v62; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rbx
  int v69; // eax
  bool v70; // zf
  char v71; // bl
  char v72; // al
  char v73; // r8
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // edx
  signed __int32 v78[8]; // [rsp+0h] [rbp-69h] BYREF
  int v79; // [rsp+20h] [rbp-49h]
  int v80; // [rsp+24h] [rbp-45h]
  __int64 v81; // [rsp+28h] [rbp-41h]
  unsigned __int8 *v82; // [rsp+30h] [rbp-39h]
  int v83; // [rsp+38h] [rbp-31h]
  _QWORD *v84; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v86; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v87; // [rsp+68h] [rbp-1h]
  __int64 v88; // [rsp+70h] [rbp+7h]
  int v89; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v90; // [rsp+80h] [rbp+17h]
  unsigned __int8 *v91; // [rsp+88h] [rbp+1Fh]
  int v93; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v93 = 0;
  v10 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
  v79 = 0;
  v80 = MmNumberOfChannels;
  v11 = *(_QWORD *)(qword_140C4E688 + 8 * v10);
  v12 = 0LL;
  v88 = v11;
  v82 = 0LL;
  v13 = *(_QWORD *)(v11 + 16) + 4544 * v4;
  v90 = v13;
  v14 = *(_DWORD *)(v13 + 4280) & 1;
  v83 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v13 + 4313);
    v82 = (unsigned __int8 *)(v13 + 4313);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v7 = 1;
        v93 = a3;
        v12 = 0LL;
        v80 = 1;
        v82 = 0LL;
        goto LABEL_10;
      }
      if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v13 + 4317);
        v82 = (unsigned __int8 *)(v13 + 4317);
      }
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4 )
        return v6;
      v12 = v82;
      v9 = a3;
      v7 = v80;
      v14 = v83;
      v11 = v88;
      v79 = a3;
    }
  }
  a3 = 0;
LABEL_10:
  v91 = &v12[v7];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        a3 = *v12;
        v93 = a3;
        if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4
          && a3 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v6;
        }
        v11 = v88;
      }
      else
      {
        v93 = v9;
        a3 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v79 = v9;
      }
    }
    v86 = v11 + 2752;
    v15 = v11 + 2432;
    v81 = v11 + 2432;
    if ( v11 + 2432 < (unsigned __int64)(v11 + 2752) )
      break;
LABEL_51:
    v12 = v82 + 1;
    v82 = v12;
    if ( v12 >= v91 )
      return v6;
    v7 = v80;
    v14 = v83;
  }
  v16 = (_QWORD *)(192LL * a3 + 3264 + v13);
  v17 = (volatile __int64 *)(v11 + 2464);
  v84 = v16;
  v18 = v11 + 2752;
  v87 = (unsigned __int64 *)(v11 + 2464);
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_49:
    v15 += 40LL;
    v17 += 5;
    v16 += 3;
    v81 = v15;
    v87 = (unsigned __int64 *)v17;
    v84 = v16;
    if ( v15 >= v18 )
    {
      v9 = v79;
      v13 = v90;
      a3 = v93;
      v11 = v88;
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
          v70 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v70 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v84;
    v15 = v81;
LABEL_48:
    v18 = v86;
    goto LABEL_49;
  }
  v26 = 48 * v21 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    goto LABEL_53;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v89 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v89, v27, v28, v29);
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
          v70 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v70 )
            KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    v15 = v81 - 40;
    v17 = (volatile __int64 *)(v87 - 5);
    v16 = v84 - 3;
    goto LABEL_48;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v87;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v87);
  if ( v21 != *v84 )
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
          v70 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v70 )
            KiRemoveSystemWorkPriorityKick((__int64)v35);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v21 - 0x58000000000LL) )
  {
    if ( dword_140C4E70C != 1 )
      goto LABEL_82;
    v44 = v21 & 0x1F;
    LOBYTE(v45) = 1;
    v46 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v21 >> 5));
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
              v58 = v81;
              *(_QWORD *)(v81 + 16) = v6;
            }
            else
            {
              *(_QWORD *)(48 * v50 - 0x58000000000LL) = v51 | *(_QWORD *)(48 * v50 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v58 = v81;
            }
            if ( v49 == v38 )
            {
              *(_QWORD *)(v58 + 24) = v6;
LABEL_96:
              MiUnlinkNumaStandbyPage(48 * v21 - 0x58000000000LL);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v26 + 34) >> 6, 1u);
              MiCopyPfnEntryEx(v8, 48 * v21 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v59);
              _InterlockedOr(v78, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v60 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
              if ( v60 == v21 )
              {
                v61 = v51 | *(_QWORD *)(v8 + 40) & 0xFFFFFFF000000000uLL;
                v62 = a1;
                *(_QWORD *)(v8 + 40) = v61;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v65 | v64) - 1392) = KernelDirectoryTableBase;
                v66 = (__int64 *)(v65 | *(_QWORD *)(v26 + 8));
              }
              else
              {
                v62 = a1;
                v66 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                                + 8LL * ((*(_DWORD *)(v26 + 8) >> 3) & 0x1FF));
              }
              v67 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v66);
              v68 = MiUpdateTransitionPteFrame(v67, v62);
              if ( MiPteInShadowRange((unsigned __int64)v66) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v69 = 1;
                  if ( !HIBYTE(word_140C4E048) )
                  {
                    v70 = (v68 & 1) == 0;
                    goto LABEL_105;
                  }
                }
                else
                {
                  v69 = 0;
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                  {
                    v70 = (v68 & 1) == 0;
LABEL_105:
                    if ( !v70 )
                      v68 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                v69 = 0;
              }
              *v66 = v68;
              if ( v69 )
                MiWritePteShadow((__int64)v66, v68);
              if ( v60 != v21 )
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v66, 0x11u, 0x80000000);
              MiCopyPage(a1, v21, 0LL, 6);
              _InterlockedOr(v78, 0);
              v71 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v81 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v81 + 32));
                MiSetPfnTbFlushStamp(v8, v71, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v72 = *(_BYTE *)(v26 + 34);
              *(_QWORD *)(v26 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v26 + 34) = v72 & 0xC7;
              *(_BYTE *)(v26 + 35) &= ~0x20u;
              _InterlockedOr(v78, 0);
              MiSetPfnTbFlushStamp(48 * v21 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v26 = 0LL;
              MiSetPfnBlink(48 * v21 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 5;
              *(_QWORD *)(v26 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 + 16));
              v73 = *(_BYTE *)(v26 + 35);
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(v26 + 35) = v73 & 0xF7;
              *(_BYTE *)(v26 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v74 = KeGetCurrentIrql();
                  if ( v74 <= 0xFu && CurrentIrql <= 0xFu && v74 >= 2u )
                  {
                    v75 = KeGetCurrentPrcb();
                    v76 = v75->SchedulerAssist;
                    v77 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v70 = (v77 & v76[5]) == 0;
                    v76[5] &= v77;
                    if ( v70 )
                      KiRemoveSystemWorkPriorityKick((__int64)v75);
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
        v70 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v70 )
          KiRemoveSystemWorkPriorityKick((__int64)v40);
      }
    }
  }
  v6 = v21;
LABEL_70:
  __writecr8(CurrentIrql);
  return v6;
}
