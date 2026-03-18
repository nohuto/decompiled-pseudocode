/*
 * XREFs of PopCompressCallback @ 0x14098FFD0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
