/*
 * XREFs of PopCompressCallback @ 0x140A4C590
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140A4C5B4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
