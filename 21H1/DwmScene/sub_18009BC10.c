/*
 * XREFs of sub_18009BC10 @ 0x18009BC10
 * Callers:
 *     sub_18009E844 @ 0x18009E844 (sub_18009E844.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A31A4 @ 0x1800A31A4 (sub_1800A31A4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009BC10(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+40h] [rbp-30h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::ShaderFamily>::`vftable';
  v9[4] = &v7;
  v9[5] = v8;
  v7 = 0LL;
  v5 = a4[1];
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a4[1];
  }
  *(_QWORD *)&v7 = *a4;
  *((_QWORD *)&v7 + 1) = v5;
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001CDF8(v9, a2);
  sub_1800A31A4(a1 + 16, v9, v8, &v7);
  return a1;
}
