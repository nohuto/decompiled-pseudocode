/*
 * XREFs of ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024C6C
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A680 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0024864 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008E950 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisMAllocateMiniportOffload(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // ebx
  _NDIS_MINIPORT_OFFLOAD *PoolWithTag; // rax

  v2 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      a1);
  PoolWithTag = (_NDIS_MINIPORT_OFFLOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x538uLL, 0x666F444Eu);
  a1->Offload = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_MINIPORT_OFFLOAD));
    v2 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      a1->Offload);
  return v2;
}
