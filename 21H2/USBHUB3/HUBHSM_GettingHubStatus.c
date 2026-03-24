/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x1C0009090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002F36C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 952) = *(_BYTE *)(v1 + 952) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 953) = 0;
  *(_DWORD *)(v1 + 954) = 0;
  *(_WORD *)(v1 + 958) = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 4u, 3u, 0x17u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids);
  v2 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 248),
         v1,
         (int)v1 + 800,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 796,
         2,
         0,
         *(_BYTE *)(v1 + 2272));
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 2520),
        2u,
        3u,
        0x18u,
        (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
        v4);
    }
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  }
  return 1000LL;
}
