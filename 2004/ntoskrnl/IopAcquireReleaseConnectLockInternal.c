/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1407B24A0
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x14074F280 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14074F3EC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14074F410 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14074F434 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 1) != 0 )
  {
    v3 = (struct _KEVENT *)(a1 + 40);
  }
  else if ( (a3 & 2) != 0 )
  {
    v3 = &ActiveConnectListLock;
  }
  else
  {
    v3 = *(struct _KEVENT **)(a1 + 24);
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
