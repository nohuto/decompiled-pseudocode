/*
 * XREFs of sub_1800BB768 @ 0x1800BB768
 * Callers:
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 * Callees:
 *     sub_180012974 @ 0x180012974 (sub_180012974.c)
 *     sub_18008CAD4 @ 0x18008CAD4 (sub_18008CAD4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800BB768(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180012974(a2, 0x20uLL);
  v6[0] = &std::_Func_impl_no_alloc<_lambda_750ab9e5186891eb31094975a637ff02_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v6[1] = a2;
  v7 = v6;
  sub_18008CAD4(a1, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
