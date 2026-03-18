/*
 * XREFs of CmpInvalidateSubtree @ 0x14076EB60
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140878930 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406A3680 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v7 = 0;
  v6 = a2;
  v8 = a3;
  result = CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpInvalidateSubtreeWorker, (__int64)&v6);
  if ( a4 )
  {
    result = v7;
    *a4 = v7;
  }
  return result;
}
