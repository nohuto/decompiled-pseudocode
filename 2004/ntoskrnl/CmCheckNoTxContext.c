/*
 * XREFs of CmCheckNoTxContext @ 0x140651F20
 * Callers:
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140865AF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140865E80 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140866150 (NtSaveMergedKeys.c)
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
