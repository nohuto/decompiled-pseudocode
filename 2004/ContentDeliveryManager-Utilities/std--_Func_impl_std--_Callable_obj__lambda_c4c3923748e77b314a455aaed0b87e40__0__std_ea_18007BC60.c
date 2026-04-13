/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18007BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180074EB8 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B05D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 a2,
        Windows::Services::TargetedContent::Internal *a3)
{
  HSTRING *v5; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int128 v10; // [rsp+38h] [rbp-18h] BYREF
  HSTRING string; // [rsp+60h] [rbp+10h] BYREF
  __int128 *v12; // [rsp+68h] [rbp+18h]

  v10 = 0LL;
  if ( &v10 != (__int128 *)a2 )
  {
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)&v10 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v12 = &v10;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         a3,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
         (const wchar_t *)&string,
         v5) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(**(LPCWCH **)(a1 + 8), -1, StringRawBuffer, -1, 1) == 2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
      if ( !v7 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, Windows::Services::TargetedContent::Internal *))(*(_QWORD *)v7 + 16LL))(v7, a3);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  v8 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return 1;
}
