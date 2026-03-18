/*
 * XREFs of NtLoadKey @ 0x14076F7A0
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x140650E40 (NtLoadKeyEx.c)
 */

__int64 __fastcall NtLoadKey(int a1, int a2)
{
  return NtLoadKeyEx(a1, a2, 0, 0, 0LL, 0, 0LL, 0LL);
}
