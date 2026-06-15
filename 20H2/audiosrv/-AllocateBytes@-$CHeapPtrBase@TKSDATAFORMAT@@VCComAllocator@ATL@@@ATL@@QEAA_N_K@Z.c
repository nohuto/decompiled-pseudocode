/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18011A14C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180116DD8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801173C4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x18011D1B0 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800210A8 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 */

bool __fastcall ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(_QWORD *a1)
{
  LPVOID v2; // rax

  v2 = ATL::CComAllocator::Allocate(0x68uLL);
  *a1 = v2;
  return v2 != 0LL;
}
