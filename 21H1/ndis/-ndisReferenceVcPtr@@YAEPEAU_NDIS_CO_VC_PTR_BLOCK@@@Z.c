/*
 * XREFs of ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B7C7C
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00105F0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008CA2C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     NdisClCloseCall @ 0x1C00B6920 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C00B6BB0 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7090 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDDLq @ 0x1C00B9628 (WPP_RECORDER_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, __int64 a2, int a3)
{
  char v4; // di
  KIRQL v5; // al
  int v6; // r8d

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, a3, 28);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->CallFlags & 0x80000000) == 0 )
  {
    ++a1->References;
    v4 = 1;
  }
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, v6, 29);
  return v4;
}
