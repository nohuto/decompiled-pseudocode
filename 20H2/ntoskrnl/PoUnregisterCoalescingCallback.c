/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1408E8F10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140233750 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x1403ADEBC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
}
