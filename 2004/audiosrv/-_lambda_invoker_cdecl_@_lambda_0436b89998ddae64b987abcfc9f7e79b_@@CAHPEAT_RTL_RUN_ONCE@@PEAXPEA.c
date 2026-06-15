/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0436b89998ddae64b987abcfc9f7e79b_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180053EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_0436b89998ddae64b987abcfc9f7e79b_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  __int64 result; // rax

  byte_18019F550 = 1;
  dword_18019F52C = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = (Microsoft::WRL::Details *)&qword_18019F540;
  qword_18019F520 = 0LL;
  Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::instance_ = (__int64)&Windows::Internal::ServiceModule::`vftable'{for `Windows::Internal::ServiceModuleBase'};
  result = 1LL;
  dword_18019F528 = -2147467259;
  qword_18019F540 = (__int64)&Windows::Internal::ServiceModule::`vftable'{for `Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>'};
  xmmword_18019F530 = 0LL;
  qword_18019F548 = 0LL;
  return result;
}
