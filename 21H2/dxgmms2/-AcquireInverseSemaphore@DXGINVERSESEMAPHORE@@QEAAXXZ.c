/*
 * XREFs of ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C0023464
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00ADD94 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGINVERSESEMAPHORE::AcquireInverseSemaphore(struct _KEVENT *this)
{
  volatile LONG Lock; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  Lock = this[2].Header.Lock;
  if ( !Lock )
  {
    KeClearEvent(this + 1);
    Lock = this[2].Header.Lock;
  }
  this[2].Header.LockNV = Lock + 1;
  this->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
