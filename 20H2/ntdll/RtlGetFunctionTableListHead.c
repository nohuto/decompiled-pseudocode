/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800E0E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *RtlGetFunctionTableListHead()
{
  return &RtlpDynamicFunctionTable;
}
