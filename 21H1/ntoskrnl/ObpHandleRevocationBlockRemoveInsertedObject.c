/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D8070
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406B8120 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D2B64 (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x140764EFC (ObRevokeHandles.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[2], 0LL);
    }
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( !a4 )
    {
      ExReleasePushLockEx((ULONG_PTR)&a2[2], 0LL);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection_0(a2 + 3);
    a1[2] = a3;
  }
}
