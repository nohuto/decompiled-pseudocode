/*
 * XREFs of NtSaveKey @ 0x140864E10
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 */

__int64 __fastcall NtSaveKey(void *a1, void *a2)
{
  return NtSaveKeyEx(a1, a2, 1);
}
