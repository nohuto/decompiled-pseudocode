/*
 * XREFs of CmpLockTwoKcbsShared @ 0x140672100
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086C160 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140708A7C (CmpGetCorrectKcbLockOrder.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v7, &v8);
        v6 = v7;
        ExAcquirePushLockSharedEx(v7 + 48, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 56));
        v3 = v8;
      }
      v5 = v3 + 48;
    }
    else
    {
      v5 = a1 + 48;
    }
    result = ExAcquirePushLockSharedEx(v5, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 56));
  }
  else if ( a2 )
  {
    result = ExAcquirePushLockSharedEx(a2 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
  }
  return result;
}
