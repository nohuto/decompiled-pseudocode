/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1409843A0
 * Callers:
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140229AD4 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

void __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rdi
  BOOLEAN v5; // al
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v7; // r15
  struct _EX_RUNDOWN_REF **Count; // rax

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  v5 = ExAcquireRundownProtection(a1 + 3);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
  {
    Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
    if ( *Count != a1 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1;
    v3 = 1;
    *(_QWORD *)(v4 + 8) = Count;
    *Count = (struct _EX_RUNDOWN_REF *)v4;
    a1[1].Count = v4;
  }
  ExReleasePushLockEx((ULONG_PTR)&a1[2], 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( !v3 )
      ExReleaseRundownProtection(a1 + 3);
  }
}
