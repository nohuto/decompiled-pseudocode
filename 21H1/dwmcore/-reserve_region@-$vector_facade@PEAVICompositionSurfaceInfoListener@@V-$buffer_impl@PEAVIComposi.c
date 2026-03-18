/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x18002C1C8
 * Callers:
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002C10C (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002C28C (-ensure_extra_capacity@-$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansi.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180158DE4 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

__int64 __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 v13; // r11
  bool v14; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  *((_QWORD *)&v15 + 1) = 1LL;
  v7 = ((__int64)v6 - v5) >> 3;
  v8 = v7 - a2;
  *(_QWORD *)&v15 = v5 + 8 * v7;
  if ( !(_QWORD)v15 )
    goto LABEL_19;
  v16 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v17 = v15;
  v10 = 8 * v9;
  v11 = &v6[v10 / 0xFFFFFFFFFFFFFFF8uLL];
  v18 = 1LL;
  if ( v6 != &v6[v10 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v13 = v17;
    v4 = v18;
    do
    {
      --v6;
      if ( !v13 )
        goto LABEL_19;
      if ( !v4 )
        goto LABEL_19;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v17 + 1) )
        goto LABEL_19;
      *(_QWORD *)(v13 + 8 * v4) = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v17 = v5;
    *((_QWORD *)&v17 + 1) = v7;
    v14 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_19;
      v14 = v7 < 0;
    }
    if ( !v14 || !v7 )
    {
      v18 = v7;
      v15 = v17;
      v16 = v7;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v17,
        v5 + 8 * a2,
        v5 + 8 * (v7 - 1),
        &v15);
      goto LABEL_6;
    }
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v4, v8);
    __debugbreak();
    JUMPOUT(0x180100226LL);
  }
LABEL_6:
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
