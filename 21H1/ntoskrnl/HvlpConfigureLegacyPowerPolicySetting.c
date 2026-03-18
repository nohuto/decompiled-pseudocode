/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1404F28C0
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1404F2A30 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6, 1, 0LL, 40LL);
  v3 = *((_QWORD *)&v7 + 1);
  v2[1] = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvcallInitiateHypercall(111, v3, 0LL, v4) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v6);
  return (unsigned int)a1;
}
