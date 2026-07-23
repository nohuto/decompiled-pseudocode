/*
 * XREFs of MiIncreaseAvailablePages @ 0x140309C30
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  signed int v6; // r14d
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  struct _KEVENT *v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  struct _KEVENT *v14; // rbx
  unsigned __int64 v15; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 != 1 )
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
    v6 = 0;
    v7 = a2 + v5;
    v8 = 0;
    if ( v5 < 0xA0 && v7 >= 0xA0 )
      v8 = 2;
    if ( v5 < 0x22 && v7 >= 0x22 )
      v8 |= 1u;
    if ( v5 < 0x420 && v7 >= 0x420 )
      v8 |= 4u;
    if ( v8 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3, a4);
      v11 = (struct _KEVENT *)(a1 + 4960);
      do
      {
        if ( _bittest(&v8, v6) )
        {
          KeSetEvent(v11 - 1, 0, 0);
          ++v11->Header.LockNV;
        }
        ++v6;
        v11 = (struct _KEVENT *)((char *)v11 + 32);
      }
      while ( v6 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v9 = *(_QWORD *)(a1 + 5176);
    if ( v5 <= v9 && v7 > v9 )
      goto LABEL_34;
    v10 = *(_QWORD *)(a1 + 5168);
    if ( v5 <= v10 && v7 > v10 )
      goto LABEL_34;
    return;
  }
  v12 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 7104));
  if ( v12 <= 0x420 )
  {
    switch ( v12 )
    {
      case 0xA0uLL:
        v13 = 4968LL;
LABEL_23:
        v14 = (struct _KEVENT *)(a1 + v13);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3, a4);
        KeSetEvent(v14, 0, 0);
        ++v14[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v13 = 5000LL;
        goto LABEL_23;
      case 0x22uLL:
        v13 = 4936LL;
        goto LABEL_23;
    }
  }
  v15 = v12 - 1;
  if ( v15 == *(_QWORD *)(a1 + 5168) || v15 == *(_QWORD *)(a1 + 5176) )
LABEL_34:
    MiUpdateAvailableEvents(a1);
}
