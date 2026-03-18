/*
 * XREFs of MiZeroAndFlushPtes @ 0x1403374F0
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A17B4 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r14
  BOOL v18; // eax
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  int v30; // r15d
  __int64 v31; // r8
  bool v32; // zf
  unsigned __int64 v33; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v39; // zf
  _QWORD *v40; // rbx
  __int64 v41; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r9
  int v46; // [rsp+28h] [rbp-E0h]
  BOOL v47; // [rsp+2Ch] [rbp-DCh]
  __int64 v48; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v50; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v51; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  _QWORD v57[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v58[32]; // [rsp+148h] [rbp+40h] BYREF

  v50 = a2;
  memset(v57, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v49 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v56 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v46 = v6;
  if ( v6 > 0 )
  {
    v26 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v26;
    }
    while ( v26 );
  }
  v8 = 0LL;
  LODWORD(v57[1]) = 20;
  v51 = 0LL;
  v9 = 0;
  v57[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v11 = v50;
  v12 = v10;
  while ( 2 )
  {
    v14 = v11;
    v13 = v11 % v5;
    v11 = v13;
    v50 = v13;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v14 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v47 = MiPteInShadowRange((unsigned __int64)&v48);
    v54 = v5 << 12;
    do
    {
      v53 = v8;
      v52 = v8;
      v15 = MI_READ_PTE_LOCK_FREE(v4);
      v16 = v15;
      v48 = v15;
      if ( v47
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
          if ( (v28 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v28 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
        else
        {
          v16 = v48;
        }
      }
      v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v29 = ZeroPte;
        v30 = 0;
        if ( MiPteInShadowRange(v4) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v30 = 1;
            if ( !HIBYTE(word_140C4DE08) )
            {
              v32 = (ZeroPte & 1) == 0;
              goto LABEL_52;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v32 = (ZeroPte & 1) == 0;
LABEL_52:
            if ( !v32 )
              v29 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v29;
        if ( v30 )
          MiWritePteShadow(v4, v29, v31);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v33 = (unsigned __int8)v56;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v56 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
              v32 = (v37 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v37;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v33);
        v8 = v4;
        v7 = v46;
        if ( v52 )
          v8 = v53;
        v51 = v4;
        goto LABEL_33;
      }
      v18 = MiPteInShadowRange(v4);
      v19 = 1LL;
      v20 = 0LL;
      if ( v7 >= 1 )
      {
        v21 = v12;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = (unsigned int)v19;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v39 = ((unsigned __int8)v12 & (unsigned __int8)v19) == 0;
      }
      else
      {
        v21 = ZeroPte;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = (unsigned int)v19;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v39 = ((unsigned __int8)v21 & (unsigned __int8)v19) == 0;
      }
      if ( !v39 )
        v21 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v21;
      if ( (_DWORD)v20 )
        MiWritePteShadow(v4, v21, v20);
      if ( v7 < (int)v19 )
      {
        MiInsertTbFlushEntry((__int64)v57, v49, v19, v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v57, (unsigned int)v7, v4);
LABEL_13:
      if ( (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v22 = v58[2 * v9 - 1], v22 == v17) )
        {
          v58[2 * v9 - 1] = v5 + v22;
        }
        else
        {
          v25 = 2LL * v9++;
          v58[v25] = v17;
          v58[v25 + 1] = v17 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList((__int64)v57, (_KPROCESS *)v13);
            v40 = v58;
            v41 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v40, v40[1] - *v40);
              v40 += 2;
              --v41;
            }
            while ( v41 );
            v7 = v46;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v54 + v49;
      v49 += v54;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v11 = v50;
LABEL_19:
    if ( v11 )
    {
      v7 = 0;
      v46 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    MiGetLeafVa(v51);
    LeafVa = MiGetLeafVa(v8);
    MiReplicatePteChange(v44 + (v43 & (LeafVa >> 9)), v45);
  }
  MiFlushTbList((__int64)v57, (_KPROCESS *)v13);
  v23 = v9;
  if ( v9 )
  {
    v24 = v58;
    do
    {
      MiDereferenceIoPages(1LL, *v24, v24[1] - *v24);
      v24 += 2;
      --v23;
    }
    while ( v23 );
  }
}
