/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1407C300C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x14071B20C (CmpGetCorrectKcbLockOrder.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v3, &v4);
        CmpLockKcbShared(v3);
        a1 = v4;
      }
    }
  }
  else
  {
    if ( !a2 )
      return result;
    a1 = a2;
  }
  return CmpLockKcbShared(a1);
}
