/*
 * XREFs of MiZeroAndFlushPtes @ 0x1402FA4C0
 * Callers:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x140531A90 (MmMapMdl.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
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
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // r11
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int v31; // r15d
  bool v32; // zf
  unsigned __int64 v33; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v36; // eax
  bool v38; // zf
  _QWORD *v39; // rbx
  __int64 v40; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v42; // r11
  __int64 v43; // r10
  __int64 v44; // r9
  int v45; // [rsp+28h] [rbp-E0h]
  BOOL v46; // [rsp+2Ch] [rbp-DCh]
  __int64 v47; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v49; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v50; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-88h]
  _QWORD v56[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v57[32]; // [rsp+148h] [rbp+40h] BYREF

  v49 = a2;
  memset(v56, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v48 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v55 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v45 = v6;
  if ( v6 > 0 )
  {
    v27 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v27;
    }
    while ( v27 );
  }
  v8 = 0LL;
  LODWORD(v56[1]) = 20;
  v50 = 0LL;
  v9 = 0;
  v56[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v11 = v49;
  v12 = v10;
  while ( 2 )
  {
    v14 = v11;
    v13 = v11 % v5;
    v11 = v13;
    v49 = v13;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v14 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v46 = MiPteInShadowRange((unsigned __int64)&v47);
    v53 = v5 << 12;
    do
    {
      v52 = v8;
      v51 = v8;
      v15 = MI_READ_PTE_LOCK_FREE(v4);
      v16 = v15;
      v47 = v15;
      if ( v46
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v29 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v47 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v29 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
        else
        {
          v16 = v47;
        }
      }
      v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v30 = ZeroPte;
        v31 = 0;
        if ( MiPteInShadowRange(v4) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v31 = 1;
            if ( !HIBYTE(word_140C4DF48) )
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
              v30 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v30;
        if ( v31 )
          MiWritePteShadow(v4, v30);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v33 = (unsigned __int8)v55;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v55 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
              v32 = (v36 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v36;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v33);
        v8 = v4;
        v7 = v45;
        if ( v51 )
          v8 = v52;
        v50 = v4;
        goto LABEL_33;
      }
      v18 = MiPteInShadowRange(v4);
      v20 = 1LL;
      v21 = 0;
      if ( v7 >= 1 )
      {
        v22 = v12;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = v20;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v38 = ((unsigned __int8)v12 & (unsigned __int8)v20) == 0;
      }
      else
      {
        v22 = ZeroPte;
        if ( !v18 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = v20;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v38 = ((unsigned __int8)v22 & (unsigned __int8)v20) == 0;
      }
      if ( !v38 )
        v22 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v22;
      if ( v21 )
        MiWritePteShadow(v4, v22);
      if ( v7 < (int)v20 )
      {
        MiInsertTbFlushEntry((__int64)v56, v48, v20, v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v56, (unsigned int)v7, v4, SchedulerAssist);
LABEL_13:
      if ( (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v23 = v57[2 * v9 - 1], v23 == v17) )
        {
          v57[2 * v9 - 1] = v5 + v23;
        }
        else
        {
          v26 = 2LL * v9++;
          v57[v26] = v17;
          v57[v26 + 1] = v17 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList((__int64)v56, (_KPROCESS *)v13);
            v39 = v57;
            v40 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v39, v39[1] - *v39);
              v39 += 2;
              --v40;
            }
            while ( v40 );
            v7 = v45;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v53 + v48;
      v48 += v53;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v11 = v49;
LABEL_19:
    if ( v11 )
    {
      v7 = 0;
      v45 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    MiGetLeafVa(v50);
    LeafVa = MiGetLeafVa(v8);
    MiReplicatePteChange(v43 + (v42 & (LeafVa >> 9)), v44);
  }
  MiFlushTbList((__int64)v56, (_KPROCESS *)v13);
  v24 = v9;
  if ( v9 )
  {
    v25 = v57;
    do
    {
      MiDereferenceIoPages(1LL, *v25, v25[1] - *v25);
      v25 += 2;
      --v24;
    }
    while ( v24 );
  }
}
