/*
 * XREFs of MiVolunteerForTrimFirst @ 0x140341F80
 * Callers:
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 **v9; // rbx
  __int64 **v10; // rax
  __int64 *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 174);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = *(_QWORD **)(qword_140C4E688 + 8 * v2);
  v4 = v3[856];
  if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v4 + 56) )
  {
    if ( a2 > 0 )
      return;
    v5 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v3[858] == v5 )
      return;
    v6 = 2;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, v2, 0LL);
    if ( *(_BYTE *)(v4 + 53) || (v7 = *v5) == 0 )
    {
      *(_BYTE *)(v4 + 54) = 1;
    }
    else
    {
      if ( *(__int64 **)(v7 + 8) != v5 )
        goto LABEL_20;
      v8 = (__int64 **)v5[1];
      if ( *v8 != v5 )
        goto LABEL_20;
      v9 = (__int64 **)(v3 + 857);
      *v8 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      if ( v6 != 1 )
      {
        v10 = (__int64 **)v9[1];
        if ( *v10 == (__int64 *)v9 )
        {
          *v5 = (__int64)v9;
          v5[1] = (__int64)v10;
          *v10 = v5;
          v9[1] = v5;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          return;
        }
LABEL_20:
        __fastfail(3u);
      }
      v11 = *v9;
      if ( (__int64 **)(*v9)[1] != v9 )
        goto LABEL_20;
      *v5 = (__int64)v11;
      v5[1] = (__int64)v9;
      v11[1] = (__int64)v5;
      *v9 = v5;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  if ( a2 >= 0 )
  {
    v5 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (__int64 *)v3[857] != v5 )
      {
        v6 = 1;
        goto LABEL_11;
      }
    }
  }
}
