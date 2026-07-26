/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x1C00AC330
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C00AD360 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C00AD430 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C00078F0 (NdisAdvanceNetBufferDataStart.c)
 */

void __stdcall NdisAdvanceNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlMdlHandler)
{
  struct _NET_BUFFER *i; // rbx

  for ( i = NetBufferList->FirstNetBuffer; i; i = (struct _NET_BUFFER *)i->Link.Alignment )
    NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, FreeMdl, FreeMdlMdlHandler);
}
