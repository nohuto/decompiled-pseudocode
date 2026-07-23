/*
 * XREFs of CmCheckNoTxContext @ 0x140665AE0
 * Callers:
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1408692A0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140869900 (NtSaveMergedKeys.c)
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
