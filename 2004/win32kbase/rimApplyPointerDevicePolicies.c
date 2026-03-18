/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C017A434
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C017D71C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RIMIsInputSuppressed @ 0x1C01687B8 (RIMIsInputSuppressed.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C017A6A4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C017A928 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C017A9DC (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C017CA7C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017CB20 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C017CC20 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C017CD1C (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C017D044 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01809E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180E1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180E4C (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  _DWORD *v10; // rbx
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // esi
  int v15; // ecx
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v10 = a2;
  if ( a3 && (a2[605] & 0x1000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        40,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        v12);
    }
    RIMCmAddContactSuppressionReasons(a1, v10, 4LL);
    v10[605] |= 0x8000u;
  }
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (v10[2] & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, v10, 1024LL);
    v10[605] |= 0x8000u;
  }
  rimDisplayOffPolicyUpdateStateAndApply(a1, v10);
  rimLidClosedPolicyUpdateStateAndApply(a1, v10);
  v13 = a5;
  rimNullXYPolicyUpdateStateAndApply(a1, v10, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, v10, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, v10);
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(a1, v10, a3);
  if ( a4 || v13 || (v10[2] & 0x40) != 0 )
  {
    v14 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, (_DWORD)v10, a7, a8, (__int64)&v17);
    v14 = v17;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(v10) && (unsigned int)RIMCmIsContactDeliveringPointerData(v10) )
    v10[605] &= 0xFFFFFFE9;
  v15 = v10[665];
  if ( (v15 & 4) != 0 && (v10[605] & 4) == 0 || (v15 & 2) != 0 && (v10[605] & 2) == 0 )
  {
    v14 = 1;
    *((_QWORD *)v10 + 307) = *((_QWORD *)v10 + 337);
    *((_QWORD *)v10 + 308) = *((_QWORD *)v10 + 338);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, v10, a3, v14);
}
