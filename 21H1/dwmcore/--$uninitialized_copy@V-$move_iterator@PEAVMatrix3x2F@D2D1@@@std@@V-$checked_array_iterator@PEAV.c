/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18026CD74
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18026CED0 (-ensure_extra_capacity@-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
  }
  v8 = *a4;
  v9 = *a4 + 24 * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v9 = *(_OWORD *)v4;
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(v4 + 16);
    v9 += 24LL;
    v4 += 24LL;
  }
  v10 = (__int64)((unsigned __int128)((v9 - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  result = a1;
  a4[2] = (v10 >> 63) + v10;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
