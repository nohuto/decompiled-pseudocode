/*
 * XREFs of CcSetLogHandleForFileEx @ 0x1402381B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  __int64 Partition; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v34; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v36; // [rsp+48h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v38[10]; // [rsp+68h] [rbp-71h] BYREF

  v36 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&v37.OldIrql = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(*(_QWORD *)(v5 + 8), a2, a3);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x325uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v37.LockQueue.Next = 0LL;
  v37.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&v37, Partition + 128, v11, v12);
  if ( *(_QWORD *)(v9 + 240) )
  {
    v22 = *(_QWORD *)(v9 + 120);
    v23 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v22 + 8) != v9 + 120 || *v23 != v9 + 120 )
      goto FatalListEntryError_11;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 240) = 0LL;
    goto LABEL_13;
  }
  v13 = (__int64 *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
    v14 = Partition + 96;
  else
    v14 = Partition + 32;
  v15 = *(__int64 ***)(v14 + 8);
  if ( *v15 != (__int64 *)v14 )
FatalListEntryError_11:
    __fastfail(3u);
  *v13 = v14;
  *(_QWORD *)(v9 + 128) = v15;
  *v15 = v13;
  *(_QWORD *)(v14 + 8) = v13;
  v16 = *(_QWORD *)(v9 + 504);
  if ( !*(_QWORD *)(v16 + 40) )
  {
    memset(v38, 0, 0x98uLL);
    *(_QWORD *)&v38[1] = a4;
    *((_QWORD *)&v38[0] + 1) = a3;
    *(_QWORD *)&v38[0] = a2;
    *((_QWORD *)&v38[8] + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v16 = *(_QWORD *)(v9 + 504);
      *((_QWORD *)&v38[7] + 1) = Object;
    }
    v24 = v38[1];
    *(_OWORD *)(v16 + 40) = v38[0];
    v25 = v38[2];
    *(_OWORD *)(v16 + 56) = v24;
    v26 = v38[3];
    *(_OWORD *)(v16 + 72) = v25;
    v27 = v38[4];
    *(_OWORD *)(v16 + 88) = v26;
    v28 = v38[5];
    *(_OWORD *)(v16 + 104) = v27;
    v29 = v38[6];
    *(_OWORD *)(v16 + 120) = v28;
    v30 = v38[8];
    *(_OWORD *)(v16 + 136) = v29;
    v31 = *(_QWORD *)&v38[9];
    *(_OWORD *)(v16 + 152) = v38[7];
    *(_OWORD *)(v16 + 168) = v30;
    *(_QWORD *)(v16 + 184) = v31;
  }
  v17 = *(_DWORD *)(v9 + 152);
  v18 = *(_QWORD *)(v9 + 504) + 40LL;
  *(_QWORD *)(v9 + 240) = v18;
  if ( (v17 & 0x1000000) == 0 )
  {
    v19 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v19 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 24), v19);
      v17 = *(_DWORD *)(v9 + 152);
    }
  }
  *(_DWORD *)(v9 + 152) = v17 | 0x1000000;
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v37);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  result = (unsigned int)KiIrqlFlags;
  v21 = (unsigned __int8)v36;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v36 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v34 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v34 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v21);
  return result;
}
