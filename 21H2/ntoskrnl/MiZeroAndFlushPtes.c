/*
 * XREFs of MiZeroAndFlushPtes @ 0x1402180C0
 * Callers:
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, __int64 a2)
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
  unsigned __int64 v13; // rtt
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r11
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  unsigned __int64 v35; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  bool v41; // zf
  _QWORD *v42; // rbx
  __int64 v43; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // r9
  int v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+2Ch] [rbp-DCh]
  __int64 v50; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-D0h]
  __int64 v52; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h]
  _QWORD v59[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v60[32]; // [rsp+148h] [rbp+40h] BYREF

  v52 = a2;
  memset(v59, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v51 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v58 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v48 = v6;
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
  LODWORD(v59[1]) = 20;
  v53 = 0LL;
  v9 = 0;
  v59[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v11 = v52;
  v12 = v10;
  while ( 2 )
  {
    v13 = v11;
    v11 %= v5;
    v52 = v11;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v13 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v49 = MiPteInShadowRange(&v50);
    v56 = v5 << 12;
    do
    {
      v55 = v8;
      v54 = v8;
      v14 = MI_READ_PTE_LOCK_FREE(v4);
      v15 = v14;
      v50 = v14;
      if ( v49
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v29 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v50 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v15 |= 0x20uLL;
          if ( (v29 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
        else
        {
          v15 = v50;
        }
      }
      v16 = (v15 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v30 = ZeroPte;
        v31 = 0;
        if ( (unsigned int)MiPteInShadowRange(v4) )
        {
          if ( (unsigned int)MiPteHasShadow(v33, v32) )
          {
            v31 = 1;
            if ( !HIBYTE(word_140C4E048) )
            {
              v34 = (ZeroPte & 1) == 0;
              goto LABEL_52;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v34 = (ZeroPte & 1) == 0;
LABEL_52:
            if ( !v34 )
              v30 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v30;
        if ( v31 )
          MiWritePteShadow(v4);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v35 = (unsigned __int8)v58;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v58 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v58 + 1));
              v34 = (v39 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v39;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v35);
        v8 = v4;
        v7 = v48;
        if ( v54 )
          v8 = v55;
        v53 = v4;
        goto LABEL_33;
      }
      v17 = MiPteInShadowRange(v4);
      v19 = 1LL;
      v20 = 0;
      if ( v7 >= 1 )
      {
        v21 = v12;
        if ( !v17 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v18, v12) )
        {
          v20 = v19;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v41 = ((unsigned __int8)v12 & (unsigned __int8)v19) == 0;
      }
      else
      {
        v21 = ZeroPte;
        if ( !v17 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v18, ZeroPte) )
        {
          v20 = v19;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v41 = ((unsigned __int8)v21 & (unsigned __int8)v19) == 0;
      }
      if ( !v41 )
        v21 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v21;
      if ( v20 )
        MiWritePteShadow(v4);
      if ( v7 < (int)v19 )
      {
        MiInsertTbFlushEntry(v59, v51, v19, (unsigned int)v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v59, (unsigned int)v7, v4);
LABEL_13:
      if ( (*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v22 = v60[2 * v9 - 1], v22 == v16) )
        {
          v60[2 * v9 - 1] = v5 + v22;
        }
        else
        {
          v26 = 2LL * v9++;
          v60[v26] = v16;
          v60[v26 + 1] = v16 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList(v59);
            v42 = v60;
            v43 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v42, v42[1] - *v42);
              v42 += 2;
              --v43;
            }
            while ( v43 );
            v7 = v48;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v56 + v51;
      v51 += v56;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v11 = v52;
LABEL_19:
    if ( v11 )
    {
      v7 = 0;
      v48 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    MiGetLeafVa(v53);
    LeafVa = MiGetLeafVa(v8);
    MiReplicatePteChange(v46 + (v45 & (LeafVa >> 9)), v47);
  }
  result = MiFlushTbList(v59);
  v24 = v9;
  if ( v9 )
  {
    v25 = v60;
    do
    {
      result = MiDereferenceIoPages(1LL, *v25, v25[1] - *v25);
      v25 += 2;
      --v24;
    }
    while ( v24 );
  }
  return result;
}
