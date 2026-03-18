/*
 * XREFs of HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C0022030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0027774 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedPropertyDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v3,
                            1,
                            a3,
                            5,
                            *(_QWORD *)(v3 + 2112),
                            *(unsigned int *)(v3 + 1732));
  if ( MsOsFeatureDescriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = MsOsFeatureDescriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x5Fu,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        v6);
    }
    HUBSM_AddEvent(v3 + 504, 4004);
  }
  return 1000LL;
}
