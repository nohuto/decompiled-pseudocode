/*
 * XREFs of RtlQueryDepthSList @ 0x18006C770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Alignment;
}
