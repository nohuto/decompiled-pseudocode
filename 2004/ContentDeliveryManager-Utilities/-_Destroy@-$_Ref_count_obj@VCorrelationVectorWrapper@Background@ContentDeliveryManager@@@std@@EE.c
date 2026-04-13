/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EEAAXXZ @ 0x18003C370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Destroy(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    operator delete(v1);
}
