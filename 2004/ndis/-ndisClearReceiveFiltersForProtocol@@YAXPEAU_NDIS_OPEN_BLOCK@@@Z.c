/*
 * XREFs of ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011E898
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0096E28 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0015380 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C00851F8 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00854E8 (-ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisClearReceiveFiltersForProtocol(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  struct _NDIS_OPEN_BLOCK *v2; // rsi
  int v3; // edi
  unsigned int NumReceiveFilters; // r14d
  struct _NDIS_RECEIVE_FILTER_BLOCK *FirstReceiveFilterByOpen; // rbx
  __int64 v6; // [rsp+38h] [rbp-10h]

  MiniportHandle = a1->MiniportHandle;
  v2 = a1;
  v3 = 0;
  NumReceiveFilters = MiniportHandle->NumReceiveFilters;
  while ( 1 )
  {
    FirstReceiveFilterByOpen = ndisFindFirstReceiveFilterByOpen(a1);
    if ( !FirstReceiveFilterByOpen )
      break;
    if ( ++v3 > NumReceiveFilters )
      break;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = FirstReceiveFilterByOpen->FilterId;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Bu,
        (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
        (char)v2,
        (char)MiniportHandle,
        v6);
    }
    ndisDereferenceReceiveFilter(FirstReceiveFilterByOpen);
    a1 = v2;
  }
}
