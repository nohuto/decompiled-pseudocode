/*
 * XREFs of CmCheckNoTxContext @ 0x1406FF270
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140724EC0 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x14086A3E0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x14086B510 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14086B8A0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14086BB70 (NtSaveMergedKeys.c)
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
