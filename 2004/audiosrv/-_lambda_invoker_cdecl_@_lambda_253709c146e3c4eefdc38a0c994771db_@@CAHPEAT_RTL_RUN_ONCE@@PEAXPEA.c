/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_253709c146e3c4eefdc38a0c994771db_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180053E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_253709c146e3c4eefdc38a0c994771db_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  __int64 result; // rax

  byte_18019F510 = 1;
  dword_18019F4E4 = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = (Microsoft::WRL::Details *)&qword_18019F4F8;
  qword_18019F508 = 0LL;
  Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::instance_ = (__int64)&Windows::Internal::SvcHostModule::`vftable'{for `Windows::Internal::ServiceModuleBase'};
  result = 1LL;
  qword_18019F4D8 = 0LL;
  qword_18019F4F8 = (__int64)&Windows::Internal::SvcHostModule::`vftable'{for `Microsoft::WRL::Module<2,Windows::Internal::SvcHostModule>'};
  dword_18019F4E0 = -2147467259;
  xmmword_18019F4E8 = 0LL;
  qword_18019F500 = 0LL;
  return result;
}
