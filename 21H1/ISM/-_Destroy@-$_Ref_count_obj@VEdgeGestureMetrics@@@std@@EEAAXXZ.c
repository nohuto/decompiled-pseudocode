/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x1800648D0
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$0 @ 0x180050526 (_InputProviderManager--InitializeHelper_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<EdgeGestureMetrics>::_Destroy(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(result + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
