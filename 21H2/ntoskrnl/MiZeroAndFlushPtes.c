/*
 * XREFs of MiZeroAndFlushPtes @ 0x140297640
 * Callers:
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MmMapMdl @ 0x1405375B0 (MmMapMdl.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiReplicatePteChange @ 0x1403A4544 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rtt
  __int64 v17; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r11
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 result; // rax
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  bool v42; // zf
  unsigned __int64 v43; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  bool v49; // zf
  _QWORD *v50; // rbx
  __int64 v51; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // r9
  int v59; // [rsp+28h] [rbp-E0h]
  int v60; // [rsp+2Ch] [rbp-DCh]
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v62; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+80h] [rbp-88h]
  _QWORD v70[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v71[32]; // [rsp+148h] [rbp+40h] BYREF

  v63 = a2;
  memset(v70, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v62 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v69 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v59 = v6;
  if ( v6 > 0 )
  {
    v32 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v32;
    }
    while ( v32 );
  }
  v8 = 0LL;
  LODWORD(v70[1]) = 20;
  v64 = 0LL;
  v9 = 0;
  v70[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v13 = v63;
  v14 = v10;
  while ( 2 )
  {
    v16 = v13;
    v15 = v13 % v5;
    v13 = v15;
    v63 = v15;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v16 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v60 = MiPteInShadowRange(&v61, v15);
    v67 = v5 << 12;
    do
    {
      v66 = v8;
      v65 = v8;
      v17 = MI_READ_PTE_LOCK_FREE(v4);
      v19 = v17;
      v61 = v17;
      if ( v60 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v17 & 1) != 0 )
          {
            Process = (_KPROCESS *)v17;
            if ( (v17 & 0x20) == 0 || (v17 & 0x42) == 0 )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v34 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v61 >> 3) & 0x1FF));
                if ( (v34 & 0x20) != 0 )
                  v19 |= 0x20uLL;
                if ( (v34 & 0x42) != 0 )
                  v19 |= 0x42uLL;
              }
              else
              {
                v19 = v61;
              }
            }
          }
        }
      }
      v20 = (v19 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v35 = ZeroPte;
        v36 = 0;
        if ( (unsigned int)MiPteInShadowRange(v4, v37) )
        {
          if ( (unsigned int)MiPteHasShadow(v39, v38, v40, v41) )
          {
            v36 = 1;
            if ( !HIBYTE(word_140C4E008) )
            {
              v42 = (ZeroPte & 1) == 0;
              goto LABEL_52;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v42 = (ZeroPte & 1) == 0;
LABEL_52:
            if ( !v42 )
              v35 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v35;
        if ( v36 )
          MiWritePteShadow(v4, v35);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v43 = (unsigned __int8)v69;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v69 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v69 + 1));
              v42 = (v47 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v47;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v43);
        v8 = v4;
        v7 = v59;
        if ( v65 )
          v8 = v66;
        v64 = v4;
        goto LABEL_33;
      }
      v21 = MiPteInShadowRange(v4, Process);
      v24 = 1LL;
      v25 = 0;
      if ( v7 >= 1 )
      {
        v26 = v14;
        if ( !v21 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v22, v14, 0LL, v23) )
        {
          v25 = v24;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v49 = ((unsigned __int8)v14 & (unsigned __int8)v24) == 0;
      }
      else
      {
        v26 = ZeroPte;
        if ( !v21 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v22, ZeroPte, 0LL, v23) )
        {
          v25 = v24;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v49 = ((unsigned __int8)v26 & (unsigned __int8)v24) == 0;
      }
      if ( !v49 )
        v26 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v26;
      if ( v25 )
        MiWritePteShadow(v4, v26);
      if ( v7 < (int)v24 )
      {
        MiInsertTbFlushEntry(v70, v62, v24, (unsigned int)v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v70, (unsigned int)v7, v4);
LABEL_13:
      if ( (*(_QWORD *)(48 * v20 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v27 = v71[2 * v9 - 1], v27 == v20) )
        {
          v71[2 * v9 - 1] = v5 + v27;
        }
        else
        {
          v31 = 2LL * v9++;
          v71[v31] = v20;
          v71[v31 + 1] = v20 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList(v70);
            v50 = v71;
            v51 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v50, v50[1] - *v50);
              v50 += 2;
              --v51;
            }
            while ( v51 );
            v7 = v59;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v67 + v62;
      v62 += v67;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v13 = v63;
LABEL_19:
    if ( v13 )
    {
      v7 = 0;
      v59 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    LeafVa = MiGetLeafVa(v64, v15, v11, v12);
    v55 = MiGetLeafVa(v8, v53, v54, ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiReplicatePteChange(v57 + (v56 & (v55 >> 9)), v58);
  }
  result = MiFlushTbList(v70);
  v29 = v9;
  if ( v9 )
  {
    v30 = v71;
    do
    {
      result = MiDereferenceIoPages(1LL, *v30, v30[1] - *v30);
      v30 += 2;
      --v29;
    }
    while ( v29 );
  }
  return result;
}
