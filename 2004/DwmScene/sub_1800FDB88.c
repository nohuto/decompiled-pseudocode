/*
 * XREFs of sub_1800FDB88 @ 0x1800FDB88
 * Callers:
 *     sub_1800B796C @ 0x1800B796C (sub_1800B796C.c)
 * Callees:
 *     sub_1800EAE04 @ 0x1800EAE04 (sub_1800EAE04.c)
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800FDB88(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-38h]
  _QWORD *v7; // [rsp+58h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp-10h]

  v8 = a1;
  v6 = 15LL;
  v5[2] = 14LL;
  strcpy((char *)v5, "ColorTransform");
  sub_1800EAE04(a1, (__int64)v5, a2);
  if ( v6 >= 0x10 )
  {
    v3 = v5[0];
    if ( v6 + 1 >= 0x1000 )
    {
      v3 = *(_QWORD *)(v5[0] - 8LL);
      if ( (unsigned __int64)(v5[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, v6 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  *(_QWORD *)a1 = &Spectre::Engine::ColorTransform::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_dc8449eb0463ad9399da921d77f26178_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
  v7 = v5;
  sub_1800FE67C(a1, 8LL, v5);
  return a1;
}
