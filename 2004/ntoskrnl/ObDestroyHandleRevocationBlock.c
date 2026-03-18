/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x1406F5734
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D93E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  struct _EX_RUNDOWN_REF *Count; // rdi
  struct _EX_RUNDOWN_REF *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v5 = Count;
    LOBYTE(v3) = 1;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    ObpHandleRevocationBlockRemoveInsertedObject(v5, a1, 0LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)&a1[2], 0LL);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
