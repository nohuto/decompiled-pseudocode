/*
 * XREFs of NtLoadKey @ 0x140781B80
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14066E520 (NtLoadKeyEx.c)
 */

__int64 __fastcall NtLoadKey(int a1, int a2)
{
  return NtLoadKeyEx(a1, a2, 0, 0, 0LL, 0, 0LL, 0LL);
}
