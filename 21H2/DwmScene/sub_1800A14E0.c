/*
 * XREFs of sub_1800A14E0 @ 0x1800A14E0
 * Callers:
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A8A74 @ 0x1800A8A74 (sub_1800A8A74.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A14E0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
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
  sub_180020B7C(v9, a2);
  sub_1800A8A74(a1 + 16, v9, v8, &v7);
  return a1;
}
