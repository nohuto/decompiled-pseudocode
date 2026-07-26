/*
 * XREFs of ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C008861C
 * Callers:
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0087FB0 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089388 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsTargetNonDefaultVPort(const struct _NDIS_OID_REQUEST *a1, NDIS_OBJECT_HEADER *a2)
{
  bool v3; // cf
  NDIS_OBJECT_HEADER Header; // edx
  NDIS_REQUEST_TYPE RequestType; // eax
  char v6; // cl

  if ( a1 != (const struct _NDIS_OID_REQUEST *)-72LL && (*(_DWORD *)&a1->NdisReserved[16] & 0x4000) != 0 )
    a1 = *(const struct _NDIS_OID_REQUEST **)&a1->NdisReserved[24];
  v3 = a1->Header.Revision < 2u;
  Header = a1[1].Header;
  *a2 = Header;
  if ( v3 )
    return 0;
  RequestType = a1[1].RequestType;
  v6 = 1;
  if ( (RequestType & 1) == 0 || (unsigned int)(*(_DWORD *)&Header - 1) > 0xFFFFFFFD )
    return 0;
  return v6;
}
