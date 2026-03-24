/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1405F3950
 * Callers:
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140669674 (CmQueryMultipleValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766570 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F410 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406BA63C (CmpGetCorrectKcbLockOrder.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140719B20 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  bool v3; // di
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v5, &v4);
      CmpUnlockKcb(v4);
      a1 = v5;
    }
    CmpUnlockKcb(a1);
  }
  else if ( a2 )
  {
    v3 = (*(_DWORD *)(a2 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 56));
    ExReleasePushLockEx(a2 + 48, 0LL);
    if ( v3 && (*(_DWORD *)(a2 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(a2);
  }
}
