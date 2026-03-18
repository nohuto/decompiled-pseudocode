/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140676600
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140762F80 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406DAE2C (CmpGetCorrectKcbLockOrder.c)
 */

char __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  bool v3; // di
  char result; // al
  ULONG_PTR v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v6, &v5);
      CmpUnlockKcb(v5);
      a1 = v6;
    }
    return CmpUnlockKcb(a1);
  }
  else if ( a2 )
  {
    v3 = (*(_DWORD *)(a2 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 56));
    result = ExReleasePushLockEx(a2 + 48, 0LL);
    if ( v3 && (*(_DWORD *)(a2 + 8) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(a2);
  }
  return result;
}
