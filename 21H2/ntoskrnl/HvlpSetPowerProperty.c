/*
 * XREFs of HvlpSetPowerProperty @ 0x1404F8698
 * Callers:
 *     HvlConfigureIdleStates @ 0x1404F79C4 (HvlConfigureIdleStates.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x1404F815C (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1404F81B4 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1404F824C (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1404F85A0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v7, 1, 0LL, 408LL);
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
  HvlpReleaseHypercallPage((__int64)v7);
  return v5;
}
