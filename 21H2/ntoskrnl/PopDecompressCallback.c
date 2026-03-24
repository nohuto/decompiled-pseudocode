/*
 * XREFs of PopDecompressCallback @ 0x1409B1270
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1409B1854 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
