/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1404F82A0
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1404F8410 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  _QWORD *v2; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v4, 1, 0LL, 40LL);
  v2[1] = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvcallInitiateHypercall(111) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)a1;
}
