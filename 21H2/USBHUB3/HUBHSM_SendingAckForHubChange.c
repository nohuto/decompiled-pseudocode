/*
 * XREFs of HUBHSM_SendingAckForHubChange @ 0x1C0008780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002F36C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_SendingAckForHubChange(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 952) & 0x1C;
  *(_BYTE *)(v1 + 953) = 1;
  *(_BYTE *)(v1 + 952) = v2 | 0x20;
  v3 = *(unsigned __int16 *)(v1 + 788);
  *(_WORD *)(v1 + 954) = v3;
  *(_DWORD *)(v1 + 956) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2520),
      4u,
      3u,
      0xCu,
      (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
      v6);
  }
  v4 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 248),
         v1,
         (int)v1 + 800,
         (__int64)HUBHTX_HubControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(v1 + 2272));
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 2520),
        2u,
        3u,
        0xDu,
        (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
        v7);
    }
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  }
  return 1000LL;
}
