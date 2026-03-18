/*
 * XREFs of HvlpSetPowerProperty @ 0x14054A3D8
 * Callers:
 *     HvlConfigureIdleStates @ 0x140549824 (HvlConfigureIdleStates.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x140549E34 (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x140549E8C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetLogicalProcessorHwpRequest @ 0x140549F30 (HvlSetLogicalProcessorHwpRequest.c)
 *     HvlSetPlatformIdleState @ 0x140549F88 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x14054A2E0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 1, 0LL, 408LL);
  v3 = 3LL;
  do
  {
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    v2[6] = a1[6];
    v2 += 8;
    v4 = a1[7];
    a1 += 8;
    *(v2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *v2 = *a1;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a1 + 2);
  v5 = (unsigned __int16)HvcallInitiateHypercall(156) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v7);
  return v5;
}
