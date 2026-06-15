/*
 * XREFs of ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800486DC
 * Callers:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004877C (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058E30 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     _lambda_1cae16f642e2019a980ae53ef80da94f_::operator() @ 0x180119B50 (_lambda_1cae16f642e2019a980ae53ef80da94f_--operator().c)
 * Callees:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormat(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        __int32 a4,
        struct tWAVEFORMATEX **a5)
{
  GUID v10[2]; // [rsp+30h] [rbp-48h] BYREF
  __m256i v11; // [rsp+50h] [rbp-28h]

  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, v10, a4, 1);
  *(GUID *)((char *)&v11.m256i_u64[1] + 4) = v10[0];
  v11.m256i_i64[0] = (__int64)this;
  v11.m256i_i32[2] = a4;
  v10[1] = *(GUID *)&v11.m256i_u64[2];
  v10[0] = *(GUID *)v11.m256i_i8;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
           this,
           a2,
           a3,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4,
           (unsigned __int16 **)v10,
           (LPVOID *)a5);
}
