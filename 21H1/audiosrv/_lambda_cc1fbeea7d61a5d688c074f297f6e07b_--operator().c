/*
 * XREFs of _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x18011A5E0
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180116A98 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_071c4ef808d07fcecad551b2abbfec83___ @ 0x180116BF4 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_071c4ef808d07fcecad551b2abbfe.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180118808 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B740 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(__int64 a1, const struct tWAVEFORMATEX *a2)
{
  GUID v3; // xmm0
  int v4; // edx
  __int64 v5; // rcx
  GUID v7; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(GUID *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v3;
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
