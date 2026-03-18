/*
 * XREFs of CmCheckNoTxContext @ 0x14068D8B0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x1408636A0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140863980 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1408647D0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140864B60 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140864E30 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
      return result;
    if ( v1 )
      return 3222863873LL;
  }
  return 0LL;
}
