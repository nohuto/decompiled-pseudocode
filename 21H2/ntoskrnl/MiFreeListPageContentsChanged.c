/*
 * XREFs of MiFreeListPageContentsChanged @ 0x14054F08C
 * Callers:
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // r8
  int v9; // esi
  unsigned __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 48 * a1 - 0x58000000000LL;
  v3 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(48 * a1) / 48) + 2);
  v4 = ((unsigned int)MiGetPfnChannel(v2) << byte_140C4DECD) | dword_140C4DF38 & (unsigned int)a1 | (v3 << byte_140C4DECC);
  v5 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v2 + 40) >> 39) & 0x3FFLL)) + 2184LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 8 * (v4 + 4 * (v4 + 1)));
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  if ( dword_140C4E70C == 1 )
  {
    v6 = a1 & 0x1F;
    LOBYTE(v7) = 1;
    v8 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (a1 >> 5));
    if ( (unsigned __int64)(v6 + 1) > 0x20 )
    {
      if ( (a1 & 0x1F) == 0 )
        goto LABEL_9;
      v9 = a1 & 0x1F;
      _InterlockedOr(v8++, ((1 << (32 - v9)) - 1) << v6);
      v7 = 1LL - (unsigned int)(32 - v9);
      if ( v7 >= 0x20 )
      {
        v10 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          *v8++ = -1;
          --v10;
        }
        while ( v10 );
      }
      if ( v7 )
LABEL_9:
        _InterlockedOr(v8, (1 << v7) - 1);
    }
    else
    {
      _InterlockedOr(v8, 1 << v6);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
