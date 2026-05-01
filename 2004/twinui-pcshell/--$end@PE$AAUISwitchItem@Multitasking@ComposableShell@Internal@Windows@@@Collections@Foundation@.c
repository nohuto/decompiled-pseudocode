/*
 * XREFs of ??$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@012@@Z @ 0x1802F9E58
 * Callers:
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1803067F0 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1802EF1D4 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Windows::Foundation::Collections::end<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx

  v4 = __abi_winrt_ptr_ctor(a2);
  v5 = (unsigned int)Windows::UI::Xaml::Interop::IBindableVector::Size::get(a2);
  *a1 = __abi_winrt_ptr_ctor(v4);
  a1[1] = v5;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
