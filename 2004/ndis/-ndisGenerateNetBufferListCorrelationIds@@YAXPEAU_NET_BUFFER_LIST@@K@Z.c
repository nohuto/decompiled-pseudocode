/*
 * XREFs of ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE0A0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0003650 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003B10 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0003E20 (NdisAllocateNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004990 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0007FE0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0075558 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C00AC9E0 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C00ACC00 (NdisCopySendNetBufferListInfo.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1C00AE07C (ndisGenerateCorrelationIds.c)
 */

void __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1, unsigned int a2)
{
  _QWORD *i; // r8
  unsigned int v3; // eax
  unsigned int CorrelationIds; // eax
  _QWORD *v5; // r8
  __int64 v6; // rcx

  if ( (__int64)a1->NetBufferListInfo[13] <= 0 )
  {
    CorrelationIds = ndisGenerateCorrelationIds(a2);
    do
    {
      if ( (__int64)v5[31] <= 0 )
      {
        v6 = CorrelationIds++;
        v5[31] = v6;
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  else
  {
    for ( i = (_QWORD *)a1->Link.Alignment; i; i = (_QWORD *)*i )
    {
      if ( (__int64)i[31] <= 0 )
      {
        v3 = ndisGenerateCorrelationIds(1u);
        i[31] = v3;
      }
    }
  }
}
