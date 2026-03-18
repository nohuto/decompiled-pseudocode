/*
 * XREFs of CmpInvalidateSubtree @ 0x140760550
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140872DE0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x140652A70 (CmpEnumerateAllOpenSubKeys.c)
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
