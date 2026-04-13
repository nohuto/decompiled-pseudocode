/*
 * XREFs of _std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch$2 @ 0x1800D756E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 104); i != *(_QWORD *)(a2 + 96); i += 56LL )
  {
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      operator delete(*(void **)i);
    *(_QWORD *)(i + 24) = 7LL;
    *(_QWORD *)(i + 16) = 0LL;
    *(_WORD *)i = 0;
  }
  throw;
}
