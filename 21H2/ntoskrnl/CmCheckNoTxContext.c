/*
 * XREFs of CmCheckNoTxContext @ 0x14067DE4C
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x14090E310 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x14090F3F0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
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
