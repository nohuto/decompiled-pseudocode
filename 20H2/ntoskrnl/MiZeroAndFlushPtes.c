/*
 * XREFs of MiZeroAndFlushPtes @ 0x1402612E0
 * Callers:
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
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
  unsigned __int64 v18; // r14
  __int64 v19; // r14
  BOOL v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r11
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 result; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  int v35; // r15d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  unsigned __int64 v41; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  bool v47; // zf
  _QWORD *v48; // rbx
  __int64 v49; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r9
  int v57; // [rsp+28h] [rbp-E0h]
  BOOL v58; // [rsp+2Ch] [rbp-DCh]
  __int64 v59; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v61; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+60h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+80h] [rbp-88h]
  _QWORD v68[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v69[32]; // [rsp+148h] [rbp+40h] BYREF

  v61 = a2;
  memset(v68, 0, 0xB8uLL);
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v60 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v67 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  v57 = v6;
  if ( v6 > 0 )
  {
    v31 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v31;
    }
    while ( v31 );
  }
  v8 = 0LL;
  LODWORD(v68[1]) = 20;
  v62 = 0LL;
  v9 = 0;
  v68[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v13 = v61;
  v14 = v10;
  while ( 2 )
  {
    v16 = v13;
    v15 = v13 % v5;
    v13 = v15;
    v61 = v15;
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(v4 + 8 * (v16 / v5));
    if ( (_KSPIN_LOCK_QUEUE *volatile)v4 >= LockHandle.LockQueue.Next )
      goto LABEL_19;
    v58 = MiPteInShadowRange((unsigned __int64)&v59);
    v65 = v5 << 12;
    do
    {
      v64 = v8;
      v63 = v8;
      v17 = MI_READ_PTE_LOCK_FREE(v4);
      v18 = v17;
      v59 = v17;
      if ( v58
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v59 >> 3) & 0x1FF));
          if ( (v33 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v33 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        else
        {
          v18 = v59;
        }
      }
      v19 = (v18 >> 12) & 0xFFFFFFFFFLL;
      if ( v7 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v34 = ZeroPte;
        v35 = 0;
        if ( MiPteInShadowRange(v4) )
        {
          if ( (unsigned int)MiPteHasShadow(v37, v36, v38, v39) )
          {
            v35 = 1;
            if ( !HIBYTE(word_140C4DE88) )
            {
              v40 = (ZeroPte & 1) == 0;
              goto LABEL_52;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v40 = (ZeroPte & 1) == 0;
LABEL_52:
            if ( !v40 )
              v34 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v4 = v34;
        if ( v35 )
          MiWritePteShadow(v4, v34);
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        v41 = (unsigned __int8)v67;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v67 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v67 + 1));
              v40 = (v45 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v45;
              if ( v40 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v41);
        v8 = v4;
        v7 = v57;
        if ( v63 )
          v8 = v64;
        v62 = v4;
        goto LABEL_33;
      }
      v20 = MiPteInShadowRange(v4);
      v23 = 1LL;
      v24 = 0;
      if ( v7 >= 1 )
      {
        v25 = v14;
        if ( !v20 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v21, v14, 0LL, v22) )
        {
          v24 = v23;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v47 = ((unsigned __int8)v14 & (unsigned __int8)v23) == 0;
      }
      else
      {
        v25 = ZeroPte;
        if ( !v20 )
          goto LABEL_9;
        if ( (unsigned int)MiPteHasShadow(v21, ZeroPte, 0LL, v22) )
        {
          v24 = v23;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_9;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_9;
        }
        v47 = ((unsigned __int8)v25 & (unsigned __int8)v23) == 0;
      }
      if ( !v47 )
        v25 |= 0x8000000000000000uLL;
LABEL_9:
      *(_QWORD *)v4 = v25;
      if ( v24 )
        MiWritePteShadow(v4, v25);
      if ( v7 < (int)v23 )
      {
        MiInsertTbFlushEntry(v68, v60, v23, (unsigned int)v7);
        goto LABEL_13;
      }
LABEL_33:
      MiInsertLargeTbFlushEntry(v68, (unsigned int)v7, v4);
LABEL_13:
      if ( (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
        if ( v9 && (v26 = v69[2 * v9 - 1], v26 == v19) )
        {
          v69[2 * v9 - 1] = v5 + v26;
        }
        else
        {
          v30 = 2LL * v9++;
          v69[v30] = v19;
          v69[v30 + 1] = v19 + v5;
          if ( v9 == 16 )
          {
            MiFlushTbList(v68, v15);
            v48 = v69;
            v49 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v48, v48[1] - *v48);
              v48 += 2;
              --v49;
            }
            while ( v49 );
            v7 = v57;
            v9 = 0;
          }
        }
      }
      v4 += 8LL;
      v3 = v65 + v60;
      v60 += v65;
    }
    while ( (_KSPIN_LOCK_QUEUE *volatile)v4 < LockHandle.LockQueue.Next );
    v13 = v61;
LABEL_19:
    if ( v13 )
    {
      v7 = 0;
      v57 = 0;
      v5 = 1LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    LeafVa = MiGetLeafVa(v62, v15, v11, v12);
    v53 = MiGetLeafVa(v8, v51, v52, ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiReplicatePteChange(v55 + (v54 & (v53 >> 9)), v56);
  }
  result = MiFlushTbList(v68, v15);
  v28 = v9;
  if ( v9 )
  {
    v29 = v69;
    do
    {
      result = MiDereferenceIoPages(1LL, *v29, v29[1] - *v29);
      v29 += 2;
      --v28;
    }
    while ( v28 );
  }
  return result;
}
