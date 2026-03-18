/*
 * XREFs of PopDecompressCallback @ 0x140A4D480
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140A4D4A4 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
