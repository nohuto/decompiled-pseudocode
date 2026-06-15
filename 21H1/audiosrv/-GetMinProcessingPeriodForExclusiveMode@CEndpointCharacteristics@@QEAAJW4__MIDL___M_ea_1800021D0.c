/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800021D0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800020DC (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B740 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics *this,
        int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        __int64 *a5)
{
  __int128 v5; // xmm0
  __int64 v7; // rax
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF

  v5 = (__int128)*a4;
  *a5 = 30000LL;
  v9 = v5;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(this, 0LL, a3, &v9) >= 0 )
  {
    v7 = (unsigned int)(int)((double)a2 * 10000000.0 / (double)(int)a3->nSamplesPerSec + 0.5);
    if ( v7 >= *a5 )
      v7 = *a5;
    *a5 = v7;
  }
  return 0LL;
}
