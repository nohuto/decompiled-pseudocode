/*
 * XREFs of ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C00849A4
 * Callers:
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087054 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveFilterToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RECEIVE_FILTER_BLOCK *a2)
{
  unsigned int v2; // r8d
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int FilterId; // r11d
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v7; // rax

  v2 = 0;
  Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveFilterList.Flink;
  if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveFilterList )
  {
LABEL_6:
    NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
    v7 = NextMiniport->Flink;
    if ( NextMiniport->Flink->Blink != NextMiniport )
      __fastfail(3u);
    a2->AdapterLink.Flink = v7;
    a2->AdapterLink.Blink = NextMiniport;
    v7->Blink = &a2->AdapterLink;
    NextMiniport->Flink = &a2->AdapterLink;
    ++a1->NumReceiveFilters;
  }
  else
  {
    FilterId = a2->FilterId;
    while ( Flink->PcwDatapathEventMask != FilterId )
    {
      if ( Flink->PcwDatapathEventMask <= FilterId )
      {
        Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
        if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveFilterList )
          continue;
      }
      goto LABEL_6;
    }
    return (unsigned int)-1073741270;
  }
  return v2;
}
