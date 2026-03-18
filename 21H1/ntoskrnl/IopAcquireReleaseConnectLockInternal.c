/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x14074AE60 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14074AFCC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14074AFF0 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14074B014 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
}
