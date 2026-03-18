/*
 * XREFs of CmpDoesKeyHaveOpenSubkeys @ 0x14069F770
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14069F7AC (CmpEnumerateAllOpenSubKeys.c)
 */

bool __fastcall CmpDoesKeyHaveOpenSubkeys(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  v2 = a1;
  v3 = 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    0LL,
    CmpDoesKeyHaveOpenSubkeysWorker,
    &v2);
  return (_DWORD)v3 != 0;
}
