/*
 * XREFs of ObRevokeHandles @ 0x14069D254
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140984460 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

char __fastcall ObRevokeHandles(_QWORD **a1)
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
