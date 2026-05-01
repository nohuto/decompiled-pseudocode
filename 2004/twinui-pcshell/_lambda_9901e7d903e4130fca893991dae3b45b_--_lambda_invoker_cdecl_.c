/*
 * XREFs of _lambda_9901e7d903e4130fca893991dae3b45b_::_lambda_invoker_cdecl_ @ 0x1801E1A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9901e7d903e4130fca893991dae3b45b_::_lambda_invoker_cdecl_(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        _QWORD *a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  HMONITOR v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v5 = a4[8];
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, HMONITOR *, LPRECT))(*(_QWORD *)v5 + 16LL))(v5, &v9, a3) )
    *a4 = a1;
  else
    return 1;
  return v6;
}
