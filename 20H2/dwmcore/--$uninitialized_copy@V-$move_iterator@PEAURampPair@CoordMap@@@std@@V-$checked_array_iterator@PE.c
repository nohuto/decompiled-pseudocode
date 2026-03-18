/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x180267A0C
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18004F44C (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
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
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
  }
  v8 = *a4;
  v9 = *a4 + 12 * a4[2];
  while ( v4 != a3 )
  {
    *(_QWORD *)v9 = *(_QWORD *)v4;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(v4 + 8);
    v9 += 12LL;
    v4 += 12LL;
  }
  v10 = (__int64)((unsigned __int128)((v9 - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = a1;
  a4[2] = (v10 >> 63) + v10;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
