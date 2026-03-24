/*
 * XREFs of CmCheckNoTxContext @ 0x14066F600
 * Callers:
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140728950 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x140868000 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1408682E0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140869140 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1408694D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697A0 (NtSaveMergedKeys.c)
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
