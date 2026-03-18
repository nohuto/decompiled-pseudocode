/*
 * XREFs of PopDecompressCallback @ 0x1409AE400
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1409AE9E4 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
