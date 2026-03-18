/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C017A928
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C017A434 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01809E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0180EC8 (RIMCmRemoveContactSuppressionReasons.c)
 */

char __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // edx
  _UNKNOWN **v5; // rax
  int v6; // r9d

  v3 = *(_DWORD *)(a2 + 2420);
  if ( (v3 & 0x1000002) == 0x1000000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 64LL);
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 43;
LABEL_7:
      LOBYTE(v4) = 4;
      LOBYTE(v5) = WPP_RECORDER_SF_d(
                     (_DWORD)gRimLog,
                     v4,
                     1,
                     v6,
                     (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
                     *(_DWORD *)a2);
    }
  }
  else
  {
    LOBYTE(v5) = (v3 & 2) != 0;
    if ( (((*(_BYTE *)(a2 + 8) & 0x40) != 0) & (unsigned __int8)v5) != 0 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 64LL);
      v5 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 44;
        goto LABEL_7;
      }
    }
  }
  return (char)v5;
}
