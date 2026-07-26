/*
 * XREFs of ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0038F14
 * Callers:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C00068A8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF14 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009F158 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMQueueOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UCHAR *NdisReserved; // rdx
  unsigned int v3; // r8d
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY **p_Flink; // rcx

  *(_QWORD *)&a2->NdisReserved[8] = 0LL;
  NdisReserved = a2->NdisReserved;
  v3 = -1073741823;
  *(_QWORD *)NdisReserved = 0LL;
  if ( (a1->PnPFlags & 0x100) == 0 )
  {
    p_OidRequestList = &a1->OidRequestList;
    for ( i = a1->OidRequestList.Flink; i != p_OidRequestList; i = i->Flink )
    {
      if ( i == (_LIST_ENTRY *)NdisReserved )
        return v3;
    }
    p_Flink = &p_OidRequestList->Blink->Flink;
    v3 = 0;
    if ( *p_Flink != p_OidRequestList )
      __fastfail(3u);
    *(_QWORD *)NdisReserved = p_OidRequestList;
    *((_QWORD *)NdisReserved + 1) = p_Flink;
    *p_Flink = (_LIST_ENTRY *)NdisReserved;
    p_OidRequestList->Blink = (_LIST_ENTRY *)NdisReserved;
  }
  return v3;
}
