/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1406E3020
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x14065E494 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F570 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406197DC (CmpGetCorrectKcbLockOrder.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

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
