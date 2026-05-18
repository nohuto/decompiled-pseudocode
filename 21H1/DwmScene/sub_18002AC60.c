/*
 * XREFs of sub_18002AC60 @ 0x18002AC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800673E0 @ 0x1800673E0 (sub_1800673E0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002AC60(_QWORD *a1)
{
  double v2; // xmm0_8
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm6_4
  unsigned int (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  float v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+2Ch] [rbp-4Ch]
  float v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h]

  sub_1800673E0();
  v2 = (*(double (__fastcall **)(_QWORD *))(*a1 + 128LL))(a1);
  v3 = *(float *)&v2 * (*(float (__fastcall **)(_QWORD *))(*a1 + 112LL))(a1);
  v4 = (*(double (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1);
  v5 = *(float *)&v4 * (*(float (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
  if ( v3 != 0.0 && v5 != 0.0 )
  {
    v6 = (unsigned int (__fastcall ***)(_QWORD, void *, __int64 *))a1[63];
    if ( v6 )
    {
      v8 = 0LL;
      if ( !(**v6)(v6, &unk_18013CCC0, &v8) )
      {
        v10 = 0LL;
        v12 = 0LL;
        v9 = 1.0 / v3;
        v11 = 1.0 / v5;
        (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v8 + 272LL))(v8, &v9);
      }
      v7 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
}
