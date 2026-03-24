/*
 * XREFs of PopCompressCallback @ 0x140993D90
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
