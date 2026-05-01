/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@XPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@34@@Details@Platform@@UEAAPEAXI@Z @ 0x1803252B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_,void,Windows::Foundation::IAsyncOperation<bool> __gc *,enum Windows::Foundation::AsyncStatus>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
