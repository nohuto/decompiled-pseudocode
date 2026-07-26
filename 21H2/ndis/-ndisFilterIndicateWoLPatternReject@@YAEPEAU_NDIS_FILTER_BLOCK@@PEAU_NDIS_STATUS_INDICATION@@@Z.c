/*
 * XREFs of ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008FE58
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A890 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008FCB4 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

char __fastcall ndisFilterIndicateWoLPatternReject(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v3; // di

  v3 = 1;
  if ( a2->StatusBufferSize >= 4 )
  {
    if ( LODWORD(a2->NdisReserved[2]) )
    {
      if ( ndisDeletePatternEntry(&a1->WOLPatternList, *(_DWORD *)a2->StatusBuffer) )
        --LODWORD(a2->NdisReserved[2]);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
