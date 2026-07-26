/*
 * XREFs of ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0038304
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037760 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037E00 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0038124 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisShouldCacheRSSParameters(const struct _NDIS_OID_REQUEST *a1)
{
  char v1; // dl

  v1 = 1;
  if ( ((*(_DWORD *)&a1->NdisReserved[16] & 0x4000) != 0 || a1->Header.Revision >= 2u)
    && (a1[1].RequestType & 1) != 0
    && (unsigned int)(*(_DWORD *)&a1[1].Header - 1) <= 0xFFFFFFFD )
  {
    return 0;
  }
  return v1;
}
