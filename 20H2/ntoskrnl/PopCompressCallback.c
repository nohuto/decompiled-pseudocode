/*
 * XREFs of PopCompressCallback @ 0x140996D90
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
