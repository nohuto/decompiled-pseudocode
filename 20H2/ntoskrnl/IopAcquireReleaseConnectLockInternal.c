/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1407C03E8
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x14075DE60 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14075DFCC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14075DFF0 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14075E014 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
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
