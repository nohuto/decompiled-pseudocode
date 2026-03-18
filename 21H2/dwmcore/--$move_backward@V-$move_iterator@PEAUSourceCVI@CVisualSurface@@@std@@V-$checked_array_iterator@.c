/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x180202D1C
 * Callers:
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x1800E418C (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  char *v7; // rbx
  bool v9; // cf
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v6 = (a3 - a2) >> 4;
  v7 = a3;
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    v9 = a4[1] - a4[2] < (unsigned __int64)-v6;
  }
  else
  {
    v9 = a4[2] < (unsigned __int64)v6;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v10 = (__int64 *)(*a4 + 16LL * a4[2]);
  while ( a2 != v7 )
  {
    v7 -= 16;
    v10 -= 2;
    v11 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
    v12 = *v10;
    *v10 = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10[1] = *((_QWORD *)v7 + 1);
  }
  result = a1;
  a4[2] = ((__int64)v10 - *a4) >> 4;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
