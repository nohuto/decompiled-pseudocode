/*
 * XREFs of _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::operator() @ 0x1802EE754
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_61aef9b7069e9b07cc0657df3b99dbfa__void_::Invoke @ 0x1802F01E0 (Platform--Details--__abi_FunctorCapture__lambda_61aef9b7069e9b07cc0657df3b99dbfa__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802CA9D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802D26B0 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_61aef9b7069e9b07cc0657df3b99dbfa_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rbx
  __int64 v4; // rsi
  int v5; // eax

  result = Windows::UI::Xaml::IWindow::Content::get(*(_QWORD *)a1);
  if ( result )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(*(_QWORD *)a1);
    v4 = __abi_winrt_cast_to(0, v3, (__int64)&_uuidof__AVAltTab_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 128LL))(
           v4,
           _mm_unpacklo_ps((__m128)*(unsigned int *)(a1 + 8), (__m128)*(unsigned int *)(a1 + 12)).m128_u64[0]);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v3 )
      return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v3)[2])(v3);
  }
  return result;
}
