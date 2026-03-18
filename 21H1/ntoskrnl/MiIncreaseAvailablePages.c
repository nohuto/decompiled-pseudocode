/*
 * XREFs of MiIncreaseAvailablePages @ 0x140346350
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  signed int v4; // r14d
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct _KEVENT *v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  struct _KEVENT *v12; // rbx
  unsigned __int64 v13; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 != 1 )
  {
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
    v4 = 0;
    v5 = a2 + v3;
    v6 = 0;
    if ( v3 < 0xA0 && v5 >= 0xA0 )
      v6 = 2;
    if ( v3 < 0x22 && v5 >= 0x22 )
      v6 |= 1u;
    if ( v3 < 0x420 && v5 >= 0x420 )
      v6 |= 4u;
    if ( v6 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4928));
      v9 = (struct _KEVENT *)(a1 + 4960);
      do
      {
        if ( _bittest(&v6, v4) )
        {
          KeSetEvent(v9 - 1, 0, 0);
          ++v9->Header.LockNV;
        }
        ++v4;
        v9 = (struct _KEVENT *)((char *)v9 + 32);
      }
      while ( v4 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    v7 = *(_QWORD *)(a1 + 5176);
    if ( v3 <= v7 && v5 > v7 )
      goto LABEL_34;
    v8 = *(_QWORD *)(a1 + 5168);
    if ( v3 <= v8 && v5 > v8 )
      goto LABEL_34;
    return;
  }
  v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 7104));
  if ( v10 <= 0x420 )
  {
    switch ( v10 )
    {
      case 0xA0uLL:
        v11 = 4968LL;
LABEL_23:
        v12 = (struct _KEVENT *)(a1 + v11);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4928));
        KeSetEvent(v12, 0, 0);
        ++v12[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v11 = 5000LL;
        goto LABEL_23;
      case 0x22uLL:
        v11 = 4936LL;
        goto LABEL_23;
    }
  }
  v13 = v10 - 1;
  if ( v13 == *(_QWORD *)(a1 + 5168) || v13 == *(_QWORD *)(a1 + 5176) )
LABEL_34:
    MiUpdateAvailableEvents(a1);
}
