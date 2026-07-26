/*
 * XREFs of ndisWdmSendOidPmParametersForSx @ 0x1C0084070
 * Callers:
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012AE18 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C005BE0C (ndisMSendPmParametersOidForSx.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060308 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForSx(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 v3; // rcx
  unsigned int v4; // edi
  char v6[16]; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  v1 = *(__m128i *)(a1 + 1120);
  v7 = *(_DWORD *)(a1 + 1136);
  *(__m128i *)v6 = v1;
  *(_DWORD *)&v6[12] = _mm_srli_si128(v1, 8).m128i_i32[1] & 0xFFFFFFFE;
  v4 = ndisMSendPmParametersOidForSx((struct _NDIS_MINIPORT_BLOCK *)a1, v6);
  if ( v4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x82u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1,
        *(_DWORD *)&v6[4]);
    if ( (byte_1C00E6182 & 0x40) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v3,
        &PowerPolicyError,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        1);
  }
  else if ( *(_DWORD *)&v6[4] )
  {
    *(_DWORD *)(a1 + 124) |= 0x400u;
  }
  return v4;
}
