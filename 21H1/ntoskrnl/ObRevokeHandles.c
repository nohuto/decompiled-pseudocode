/*
 * XREFs of ObRevokeHandles @ 0x140764EFC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D8070 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

_QWORD *__fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v4 = *a1;
  while ( v4 != a1 )
  {
    v9 = v4;
    LOBYTE(v3) = 1;
    v4 = (_QWORD *)*v4;
    ObpHandleRevocationBlockRemoveInsertedObject(v9, a1, 1LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(a1 + 2), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
