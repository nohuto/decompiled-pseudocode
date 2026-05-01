/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x180326E20
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void,>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &std::_Func_impl_no_alloc<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void,>::`vftable';
  a2[1] = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 8));
  return a2;
}
