/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x18007BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B2658 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
        __int64 a1,
        char *a2)
{
  char *result; // rax

  if ( !a2 )
  {
    a2 = (char *)operator new(0x28uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)a2 = off_1800EAB48;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 24);
  return result;
}
