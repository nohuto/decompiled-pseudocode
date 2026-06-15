/*
 * XREFs of ?GetDataFlow@EndpointDevice@@UEAAJPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18013F5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetDataFlow(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = this[28];
  return result;
}
