/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1408E6870
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExCompareExchangeCallBack @ 0x1403A8BFC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 8;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  if ( ExCompareExchangeCallBack(v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock(v3, v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
    v8 = a1[6];
    if ( *(_QWORD **)(v8 + 8) != a1 + 6 || (v9 = (_QWORD *)a1[7], (_QWORD *)*v9 != a1 + 6) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v3, v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  }
}
