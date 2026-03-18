/*
 * XREFs of PopDecompressCallback @ 0x1409AD5A0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
