/*
 * XREFs of CmpDoesKeyHaveOpenSubkeys @ 0x140659678
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406596E8 (CmpEnumerateAllOpenSubKeys.c)
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
