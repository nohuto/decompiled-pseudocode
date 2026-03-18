/*
 * XREFs of NtOpenKeyTransacted @ 0x140864F20
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140653510 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(int a1, int a2, int a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
