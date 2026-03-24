/*
 * XREFs of CcSetLogHandleForFileEx @ 0x1402B9FA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  __int64 Partition; // rdi
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 result; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v33; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+48h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v37[10]; // [rsp+68h] [rbp-71h] BYREF

  v35 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&v36.OldIrql = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(*(_QWORD *)(v5 + 8));
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x325uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v36.LockQueue.Next = 0LL;
  v36.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&v36, Partition + 128, v11);
  if ( *(_QWORD *)(v9 + 240) )
  {
    v21 = *(_QWORD *)(v9 + 120);
    v22 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v21 + 8) != v9 + 120 || *v22 != v9 + 120 )
      goto FatalListEntryError_18;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 240) = 0LL;
    goto LABEL_13;
  }
  v12 = (__int64 *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
    v13 = Partition + 96;
  else
    v13 = Partition + 32;
  v14 = *(__int64 ***)(v13 + 8);
  if ( *v14 != (__int64 *)v13 )
FatalListEntryError_18:
    __fastfail(3u);
  *v12 = v13;
  *(_QWORD *)(v9 + 128) = v14;
  *v14 = v12;
  *(_QWORD *)(v13 + 8) = v12;
  v15 = *(_QWORD *)(v9 + 504);
  if ( !*(_QWORD *)(v15 + 40) )
  {
    memset(v37, 0, 0x98uLL);
    *(_QWORD *)&v37[1] = a4;
    *((_QWORD *)&v37[0] + 1) = a3;
    *(_QWORD *)&v37[0] = a2;
    *((_QWORD *)&v37[8] + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v15 = *(_QWORD *)(v9 + 504);
      *((_QWORD *)&v37[7] + 1) = Object;
    }
    v23 = v37[1];
    *(_OWORD *)(v15 + 40) = v37[0];
    v24 = v37[2];
    *(_OWORD *)(v15 + 56) = v23;
    v25 = v37[3];
    *(_OWORD *)(v15 + 72) = v24;
    v26 = v37[4];
    *(_OWORD *)(v15 + 88) = v25;
    v27 = v37[5];
    *(_OWORD *)(v15 + 104) = v26;
    v28 = v37[6];
    *(_OWORD *)(v15 + 120) = v27;
    v29 = v37[8];
    *(_OWORD *)(v15 + 136) = v28;
    v30 = *(_QWORD *)&v37[9];
    *(_OWORD *)(v15 + 152) = v37[7];
    *(_OWORD *)(v15 + 168) = v29;
    *(_QWORD *)(v15 + 184) = v30;
  }
  v16 = *(_DWORD *)(v9 + 152);
  v17 = *(_QWORD *)(v9 + 504) + 40LL;
  *(_QWORD *)(v9 + 240) = v17;
  if ( (v16 & 0x1000000) == 0 )
  {
    v18 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v18 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), v18);
      v16 = *(_DWORD *)(v9 + 152);
    }
  }
  *(_DWORD *)(v9 + 152) = v16 | 0x1000000;
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  result = (unsigned int)KiIrqlFlags;
  v20 = (unsigned __int8)v35;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v35 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v33 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v33 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v20);
  return result;
}
