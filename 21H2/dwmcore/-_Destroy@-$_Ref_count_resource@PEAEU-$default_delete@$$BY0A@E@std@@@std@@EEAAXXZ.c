/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@EEAAXXZ @ 0x180241DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::_Destroy(__int64 a1)
{
  DefaultHeap::Free(*(void **)(a1 + 16));
}
