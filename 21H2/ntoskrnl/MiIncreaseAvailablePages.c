/*
 * XREFs of MiIncreaseAvailablePages @ 0x1402FEEE0
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiReplenishPageSlist @ 0x140318700 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140318F30 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403B6A44 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  signed int v5; // r14d
  unsigned __int64 v6; // rbx
  int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  struct _KEVENT *v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  struct _KEVENT *v13; // rbx
  unsigned __int64 v14; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 != 1 )
  {
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
    v5 = 0;
    v6 = a2 + v4;
    v7 = 0;
    if ( v4 < 0xA0 && v6 >= 0xA0 )
      v7 = 2;
    if ( v4 < 0x22 && v6 >= 0x22 )
      v7 |= 1u;
    if ( v4 < 0x420 && v6 >= 0x420 )
      v7 |= 4u;
    if ( v7 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3);
      v10 = (struct _KEVENT *)(a1 + 4960);
      do
      {
        if ( _bittest(&v7, v5) )
        {
          KeSetEvent(v10 - 1, 0, 0);
          ++v10->Header.LockNV;
        }
        ++v5;
        v10 = (struct _KEVENT *)((char *)v10 + 32);
      }
      while ( v5 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v8 = *(_QWORD *)(a1 + 5176);
    if ( v4 <= v8 && v6 > v8 )
      goto LABEL_34;
    v9 = *(_QWORD *)(a1 + 5168);
    if ( v4 <= v9 && v6 > v9 )
      goto LABEL_34;
    return;
  }
  v11 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 7104));
  if ( v11 <= 0x420 )
  {
    switch ( v11 )
    {
      case 0xA0uLL:
        v12 = 4968LL;
LABEL_23:
        v13 = (struct _KEVENT *)(a1 + v12);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3);
        KeSetEvent(v13, 0, 0);
        ++v13[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v12 = 5000LL;
        goto LABEL_23;
      case 0x22uLL:
        v12 = 4936LL;
        goto LABEL_23;
    }
  }
  v14 = v11 - 1;
  if ( v14 == *(_QWORD *)(a1 + 5168) || v14 == *(_QWORD *)(a1 + 5176) )
LABEL_34:
    MiUpdateAvailableEvents(a1);
}
