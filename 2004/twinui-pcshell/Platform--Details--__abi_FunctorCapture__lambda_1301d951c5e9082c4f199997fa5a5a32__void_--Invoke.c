/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x1802F5780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802EEF68 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  __int64 v4; // rbx
  int v5; // eax

  v4 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
