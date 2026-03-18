/*
 * XREFs of ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x180083124
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180083218 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180099B10 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18026848C (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802687EC (--$uninitialized_copy@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  _BYTE *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r9
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  void *v19; // r8
  void *v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  char *v24; // rdx
  __int64 v25; // r10
  bool v26; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v4 = a1[2];
  v5 = 0x2AAAAAAAAAAAAAABLL;
  v6 = (__int64)a1[1];
  if ( !((__int64)&v4[-v6] / 12) )
  {
    v15 = (v6 - (__int64)*a1) / 12;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(v4 - (_BYTE *)*a1),
            ((unsigned __int64)((unsigned __int128)((v4 - (_BYTE *)*a1) * (__int128)v5) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((v4 - (_BYTE *)*a1) * (__int128)v5) >> 64) >> 1),
            v16);
    v18 = operator new(saturated_mul(v17, 0xCuLL));
    v19 = a1[1];
    v20 = *a1;
    *(_QWORD *)&v28 = v18;
    v21 = v18;
    *((_QWORD *)&v28 + 1) = v15;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v28,
      v20,
      v19,
      &v30);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v24 = (char *)*a1;
    v6 = (__int64)*a1 + 12 * v15;
    a1[1] = (void *)v6;
    a1[2] = &v24[12 * v17];
  }
  v7 = (char *)*a1;
  v8 = v6 - (_QWORD)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v29 = 0LL;
  v31 = 0LL;
  v9 = v8 / 12;
  v10 = v8 / 12 - a2;
  v11 = (unsigned __int64)&v7[12 * (v8 / 12)];
  *(_QWORD *)&v28 = v11;
  v30 = v28;
  if ( !v11 )
    goto LABEL_25;
  v31 = 1LL;
  v12 = 1LL;
  if ( v10 <= 1 )
    v12 = v10;
  v29 = 1LL;
  v13 = 12 * v12;
  v14 = v6 - v13;
  if ( v6 != v6 - v13 )
  {
    v11 = v29;
    v25 = v30 + 12;
    do
    {
      v6 -= 12LL;
      if ( !(_QWORD)v28 )
        goto LABEL_25;
      if ( !v11 )
        goto LABEL_25;
      --v11;
      v25 -= 12LL;
      if ( v11 >= *((_QWORD *)&v28 + 1) )
        goto LABEL_25;
      *(_QWORD *)v25 = *(_QWORD *)v6;
      *(_DWORD *)(v25 + 8) = *(_DWORD *)(v6 + 8);
    }
    while ( v6 != v14 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = v9;
    v26 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_25;
      v26 = v9 < 0;
    }
    if ( !v26 || !v9 )
    {
      v31 = v9;
      v28 = v30;
      v29 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v30,
        &v7[12 * a2],
        &v7[12 * v9 - 12],
        &v28);
      goto LABEL_24;
    }
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(v11, v10);
    __debugbreak();
    JUMPOUT(0x180121584LL);
  }
LABEL_24:
  a1[1] = (char *)a1[1] + 12;
  return &v7[12 * a2];
}
