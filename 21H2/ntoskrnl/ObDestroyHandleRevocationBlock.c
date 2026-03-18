/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x14069BF4C
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140984460 (ObpHandleRevocationBlockRemoveInsertedObject.c)
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
