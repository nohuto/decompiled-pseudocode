/*
 * XREFs of ndisIfQuerySetMiniport @ 0x1C0127C88
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C00FA8E0 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C00FD658 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AF54 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000EAC0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000ECC0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 */

__int64 __fastcall ndisIfQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  unsigned int SetMiniport; // ebx

  SetMiniport = -1073741823;
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, 4u, 0x3Du) )
  {
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, a2, 0, a3);
    ndisDereferenceMiniportForNsi(a1, NSIREF_IFOID, 0x3Du);
  }
  return SetMiniport;
}
