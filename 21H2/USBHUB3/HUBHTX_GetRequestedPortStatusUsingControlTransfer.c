/*
 * XREFs of HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0005E34
 * Callers:
 *     HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x1C0008410 (HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetRequestedPortStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // al
  unsigned __int16 v4; // di
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 2584);
  v3 = *(_BYTE *)(a1 + 952) & 0x1C;
  *(_BYTE *)(a1 + 953) = 0;
  *(_BYTE *)(a1 + 952) = v3 | 0xA3;
  *(_WORD *)(a1 + 956) = *(_WORD *)(v1 + 200);
  v4 = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 8 : 4;
  *(_WORD *)(a1 + 954) = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 2 : 0;
  *(_WORD *)(a1 + 958) = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int16 *)(v1 + 200);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      4u,
      3u,
      0x70u,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v6);
  }
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 248),
             a1,
             (int)a1 + 800,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1 + 184,
             v4,
             0,
             *(_BYTE *)(a1 + 2272));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x71u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v7);
    }
    return HUBSM_AddEvent(a1 + 1264, 2004LL);
  }
  return result;
}
