/*
 * XREFs of InitAcpi3ThrottleStates @ 0x1C0030764
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0030C68 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_PCT_PTC @ 0x1C00247A8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_TSS @ 0x1C00254AC (AcpiEval_TSS.c)
 */

__int64 __fastcall InitAcpi3ThrottleStates(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1129599071, a1 + 464);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x13u,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x14u,
        (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
        v3);
    }
    v2 = v4;
  }
  v5 = AcpiEval_TSS(a1, (_QWORD *)(a1 + 488));
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x15u,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x16u,
        (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
        v8);
    }
    return v6;
  }
  return v2;
}
