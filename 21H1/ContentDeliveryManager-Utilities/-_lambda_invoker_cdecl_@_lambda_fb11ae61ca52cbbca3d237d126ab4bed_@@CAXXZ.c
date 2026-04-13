/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fb11ae61ca52cbbca3d237d126ab4bed_@@CAXXZ @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
