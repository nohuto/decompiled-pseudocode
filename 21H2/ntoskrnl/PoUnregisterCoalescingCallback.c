/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x14098EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140281930 (ExDereferenceCallBackBlock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x1403C7678 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 8;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  if ( ExCompareExchangeCallBack(v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock(v3, v4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
    v5 = a1[6];
    if ( *(_QWORD **)(v5 + 8) != a1 + 6 || (v6 = (_QWORD *)a1[7], (_QWORD *)*v6 != a1 + 6) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v3, v4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
}
