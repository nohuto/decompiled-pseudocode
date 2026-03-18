/*
 * XREFs of TR_Enable_Internal @ 0x1C00055F4
 * Callers:
 *     Endpoint_Enable @ 0x1C0007CC0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003A360 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003A630 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C000568C (WPP_RECORDER_SF_DDqd.c)
 *     TR_InitializeTransferRing @ 0x1C0005758 (TR_InitializeTransferRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // rdx

  TR_InitializeTransferRing();
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v4 = *(_QWORD *)(v3 + 24);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      v4,
      v3,
      18,
      (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(v3 + 144),
      *(_QWORD *)(v3 + 24),
      v2);
  }
  return v2;
}
