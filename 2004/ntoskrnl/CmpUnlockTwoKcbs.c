/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140672190
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086C160 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140708A7C (CmpGetCorrectKcbLockOrder.c)
 */

unsigned __int8 __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  bool v3; // di
  unsigned __int8 result; // al
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
      return (unsigned __int8)CmpFreeKeyControlBlock(a2);
  }
  return result;
}
