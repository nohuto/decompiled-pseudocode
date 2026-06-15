/*
 * XREFs of ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800216E0
 * Callers:
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005C230 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180021728 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002174C (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(_QWORD *a1, __int64 a2)
{
  void *v3; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v5, a2, 16LL) < 0 )
    return 0;
  v3 = ATL::CComAllocator::Allocate(v5);
  *a1 = v3;
  return v3 != 0LL;
}
