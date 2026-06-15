/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18011FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001F790 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004AFCC (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18004BBA4 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call(
        __int64 a1,
        const struct tWAVEFORMATEX **a2)
{
  const struct tWAVEFORMATEX *v2; // rbx
  __int64 v5; // rcx
  GUID v6; // [rsp+50h] [rbp-18h] BYREF

  v2 = *a2;
  if ( IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(
         *(CEndpointCharacteristics **)(a1 + 8),
         (const struct _GUID *)((char *)&v2[1].nSamplesPerSec + 2)) )
  {
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(GUID *)(a1 + 16);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, 0, v2, &v6, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
