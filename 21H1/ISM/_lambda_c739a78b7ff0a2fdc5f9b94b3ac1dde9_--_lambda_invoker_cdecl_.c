/*
 * XREFs of _lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_ @ 0x18019C940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  char result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v5);
  result = 1;
  *(_OWORD *)(a2 + 4) = v3;
  return result;
}
