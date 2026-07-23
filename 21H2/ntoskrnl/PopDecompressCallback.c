/*
 * XREFs of PopDecompressCallback @ 0x1409B21A0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
