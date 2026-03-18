/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1408D7FB0
 * Callers:
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14023EF84 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
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
  v5 = ExAcquireRundownProtection_0(a1 + 3);
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
      ExReleaseRundownProtection_0(a1 + 3);
  }
}
