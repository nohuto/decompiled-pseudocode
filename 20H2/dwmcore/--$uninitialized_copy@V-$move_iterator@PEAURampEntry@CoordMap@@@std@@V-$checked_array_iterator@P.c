/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180255870
 * Callers:
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180008D68 (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180257038 (-ensure_extra_capacity@-$buffer_impl@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  bool v5; // cc
  _OWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = a3 - a2;
  v5 = v4 <= 0;
  if ( v4 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v4 )
    {
LABEL_6:
      _o__invalid_parameter_noinfo_noreturn(a1, a2);
      __debugbreak();
      goto LABEL_7;
    }
    v5 = v4 <= 0;
  }
  if ( !v5 && a4[1] - a4[2] < (unsigned __int64)v4 )
    goto LABEL_6;
LABEL_7:
  v6 = (_OWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
    *v6++ = *a2++;
  a4[2] = ((__int64)v6 - *a4) >> 4;
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
