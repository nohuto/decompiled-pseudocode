/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14037BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  _SLIST_ENTRY *Pool; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  _SLIST_ENTRY *Next; // rax
  unsigned int Alignment_low; // edi
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x1000uLL, 0x70526D4Du);
  v2 = Pool;
  if ( Pool )
  {
    Pool->Next = 0LL;
    Pool[2].Next = (_SLIST_ENTRY *)((char *)Pool + 72);
    *((_QWORD *)&Pool[2].Next + 1) = (char *)Pool + 4088;
    *((_DWORD *)&Pool->Next + 2) = 2;
    Pool[1].Next = v0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4E6C0;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4E6C0);
  v3 = P;
  if ( !dword_140C4E6A8 )
  {
LABEL_25:
    P = 0LL;
    goto LABEL_6;
  }
  if ( v2 )
  {
    P = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( P )
  {
    if ( ((__int64)P[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_25;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_27;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
      {
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        Next = v3[2].Next;
      }
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = (char *)Next - 8;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection_0(&stru_140CEC008) )
      goto LABEL_27;
    Alignment_low = LOWORD(ListHead.Alignment);
    if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CEC028 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FD50, 0x64u);
      v6 = 0;
    }
    else
    {
      RtlpInterlockedPushEntrySList(&ListHead, v3);
      if ( Alignment_low >= 8 && !Event.Header.SignalState )
        KeSetEvent(&Event, 0, 0);
      v6 = 1;
    }
    ExReleaseRundownProtection_0(&stru_140CEC008);
    if ( !v6 )
LABEL_27:
      ExFreePoolWithTag(v3, 0);
  }
}
