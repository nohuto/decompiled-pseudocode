/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802AD488
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18003C180 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  bool v7; // cf
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a4;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 2);
  if ( v6 >= 0 )
  {
    if ( v6 <= 0 )
      goto LABEL_7;
    v7 = a4[1] - a4[2] < (unsigned __int64)v6;
  }
  else
  {
    v7 = a4[2] < (unsigned __int64)(0x5555555555555555LL * ((a3 - a2) >> 2));
  }
  if ( v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v8 = *a4;
  v9 = *a4 + 12LL * a4[2];
  while ( a2 != a3 )
  {
    *(_QWORD *)v9 = *(_QWORD *)a2;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(a2 + 8);
    v9 += 12LL;
    a2 += 12LL;
  }
  result = a1;
  v4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  v11 = v4[2];
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
