/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x180202E08
 * Callers:
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x1800E418C (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // cf
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a1;
  v5 = (a3 - a2) >> 4;
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < (unsigned __int64)-v5;
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = (_QWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
  {
    v8 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    *v7 = v8;
    v7[1] = *((_QWORD *)a2 + 1);
    v7 += 2;
    a2 += 16;
  }
  result = v4;
  a4[2] = ((__int64)v7 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v10;
  return result;
}
