/*
 * XREFs of NtSaveKey @ 0x140866130
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 */

__int64 __fastcall NtSaveKey(void *a1, void *a2)
{
  return NtSaveKeyEx(a1, a2, 1);
}
