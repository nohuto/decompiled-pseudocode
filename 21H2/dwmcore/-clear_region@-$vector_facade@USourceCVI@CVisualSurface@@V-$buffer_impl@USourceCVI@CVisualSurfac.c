/*
 * XREFs of ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E40BC
 * Callers:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x180063D04 (--1CVisualSurface@@UEAA@XZ.c)
 *     ?clear@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180063E44 (-clear@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 *     ?erase@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@2@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@2@@Z @ 0x180203188 (-erase@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 * Callees:
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x1800E428C (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x18019C038 (--$move@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iterator@PEAUSourc.c)
 */

__int64 __fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v5 = *a1;
  v7 = (a1[1] - *a1) >> 4;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v5 + 16 * v7;
    if ( v8 == v7 )
      goto LABEL_3;
  }
  *(_QWORD *)&v11 = v5;
  *((_QWORD *)&v11 + 1) = v7;
  if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18017028FLL);
  }
  v12 = a2;
  v13 = v11;
  v14 = a2;
  std::move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
    &v11,
    v5 + 16 * v8,
    v3,
    &v13);
LABEL_3:
  v9 = 16 * a3;
  result = detail::destruct_range<CVisualSurface::SourceCVI>((void *)(v3 - v9));
  a1[1] -= v9;
  return result;
}
