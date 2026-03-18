/*
 * XREFs of ObpDeleteDirectoryObject @ 0x1406D9780
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall ObpDeleteDirectoryObject(_QWORD *a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  v2 = a1 + 37;
  if ( (*v2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v3 = (void *)a1[39];
  if ( v3 )
    ObDereferenceObjectDeferDelete(v3);
  v4 = (void *)a1[41];
  if ( v4 )
    ObDereferenceObjectDeferDelete(v4);
}
