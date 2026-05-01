/*
 * XREFs of _lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180313848
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1803148D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  *(_OWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*a3);
  *(_QWORD *)(a1 + 24) = __abi_winrt_ptr_ctor(*a4);
  *(_QWORD *)(a1 + 32) = __abi_winrt_ptr_ctor(*a5);
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(*a6);
  return a1;
}
