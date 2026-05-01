/*
 * XREFs of ??$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@@Z @ 0x180323EB4
 * Callers:
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x180324C24 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x18032817C (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802ED044 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802EF208 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall std::call_once<_lambda_0e64988457575224279dcb6d61e61bdd_,>(__int64 a1, __int64 a2)
{
  std::exception_ptr *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+40h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v4);
  v5[0] = v4;
  v5[1] = a2;
  if ( std::_Execute_once(
         (struct std::once_flag *)&`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_Flag,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0e64988457575224279dcb6d61e61bdd_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v5) )
  {
    __ExceptionPtrDestroy(v4);
  }
  else
  {
    if ( __ExceptionPtrToBool(v4) )
    {
      v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v6, (const struct std::exception_ptr *)v4);
      std::rethrow_exception(v3);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    std::call_once__lambda_0e64988457575224279dcb6d61e61bdd____::_1_::dtor_0();
  }
}
