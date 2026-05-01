/*
 * XREFs of LambdaHelpers::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___ @ 0x180229448
 * Callers:
 *     LambdaHelpers::CTimer::Create__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___ @ 0x180226C4C (LambdaHelpers--CTimer--Create__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LambdaHelpers::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILambda>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_180484650;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  *(_QWORD *)(a1 + 40) = a2[3];
  return a1;
}
