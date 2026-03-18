/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1405FA020
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074FCB0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406E4E1C (CmpGetCorrectKcbLockOrder.c)
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
