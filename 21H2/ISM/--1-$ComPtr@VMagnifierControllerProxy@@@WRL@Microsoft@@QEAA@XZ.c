/*
 * XREFs of ??1?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18017CE2C
 * Callers:
 *     _MagnifierProcessor::OnHitTest_::_1_::dtor$0 @ 0x18017D5E5 (_MagnifierProcessor--OnHitTest_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MagnifierControllerProxy>::~ComPtr<MagnifierControllerProxy>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(result + 16))(result + 16);
  }
  return result;
}
