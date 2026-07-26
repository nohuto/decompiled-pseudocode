/*
 * XREFs of ?ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D704
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C0061E80 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005BB38 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C005BB7C (ndisMSendPmParametersOidForSx.c)
 */

void __fastcall ndisWdfSendPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // eax
  struct _NDIS_PM_PARAMETERS v3; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v4; // [rsp+58h] [rbp-30h] BYREF

  v4 = *ndisMInitializePmParametersForAoAc(&v3, a1);
  v2 = ndisMSendPmParametersOidForSx(a1, &v4);
  if ( v2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xEu,
        0x22u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        v2,
        a1);
  }
}
