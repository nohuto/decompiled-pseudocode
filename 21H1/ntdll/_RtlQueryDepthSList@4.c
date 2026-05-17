/*
 * XREFs of _RtlQueryDepthSList@4 @ 0x4B2E6D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Depth;
}
