/*
 * XREFs of ObRevokeHandles @ 0x1407668BC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D93E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

_QWORD *__fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v4 = *a1;
  while ( v4 != a1 )
  {
    v6 = v4;
    LOBYTE(v3) = 1;
    v4 = (_QWORD *)*v4;
    ObpHandleRevocationBlockRemoveInsertedObject(v6, a1, 1LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(a1 + 2), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
