/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_5306e8013c9084f1ba6b78d0c08c093f_@@CAXXZ @ 0x140032BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
