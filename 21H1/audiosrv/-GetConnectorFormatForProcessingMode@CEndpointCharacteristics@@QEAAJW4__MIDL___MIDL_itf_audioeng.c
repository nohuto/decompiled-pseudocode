/*
 * XREFs of ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048C08
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001E30 (AudioServerGetDevicePeriod.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800020DC (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800499F4 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000EBF0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  __int64 result; // rax
  struct _GUID v8; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-30h]
  __m256i v10; // [rsp+50h] [rbp-20h]

  v8 = *a3;
  result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
             this,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
             &v8,
             a4);
  if ( (int)result < 0 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v8, a2, 1);
    v10.m256i_i64[0] = (__int64)this;
    v10.m256i_i32[2] = a2;
    *(struct _GUID *)((char *)&v10.m256i_u64[1] + 4) = v8;
    v8 = *(struct _GUID *)v10.m256i_i8;
    v9 = *(_OWORD *)&v10.m256i_u64[2];
    return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
             this,
             0,
             0,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
             (unsigned __int16 **)&v8,
             (LPVOID *)a4);
  }
  return result;
}
