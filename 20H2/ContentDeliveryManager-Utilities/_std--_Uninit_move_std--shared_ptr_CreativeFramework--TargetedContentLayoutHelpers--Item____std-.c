/*
 * XREFs of _std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch$0 @ 0x1800D75C4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 *v5; // rbx

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 != *(_QWORD *)(a2 + 80) )
  {
    v4 = (volatile signed __int32 **)(v3 + 8);
    do
    {
      v5 = *v4;
      if ( *v4 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v4 += 2;
    }
    while ( v4 - 1 != *(volatile signed __int32 ***)(a2 + 80) );
  }
  throw;
}
