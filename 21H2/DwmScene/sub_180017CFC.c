/*
 * XREFs of sub_180017CFC @ 0x180017CFC
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18008CBC4 @ 0x18008CBC4 (sub_18008CBC4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180017CFC(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rdx
  _QWORD v8[7]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v9[7]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v10; // [rsp+98h] [rbp+2Fh]
  __int64 *v11; // [rsp+A0h] [rbp+37h]

  v8[4] = a2;
  v11 = a3;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v9[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
  v9[1] = a2;
  v10 = v9;
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001277C(v8, (__int64)a3);
  sub_18008CBC4(a1, v9, v8);
  if ( v10 )
  {
    v6 = v9;
    LOBYTE(v6) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v6);
  }
  unknown_libname_103(a3);
  return a2;
}
