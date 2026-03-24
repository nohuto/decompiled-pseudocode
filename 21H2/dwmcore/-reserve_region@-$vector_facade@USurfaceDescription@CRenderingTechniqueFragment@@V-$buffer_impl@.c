/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180049080
 * Callers:
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180048FE4 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x18004AD48 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061594 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180268FC0 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18026A368 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v5; // rcx
  __int64 v7; // r10
  __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  char *v14; // rcx
  bool v15; // sf
  __int64 v16; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  void *v21; // rax
  void *v22; // r8
  void *v23; // rdx
  void *v24; // rbx
  void *v25; // rcx
  bool v26; // zf
  char *v27; // rdx
  bool v28; // sf
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+50h] BYREF

  v5 = a1[2];
  v7 = 0x2AAAAAAAAAAAAAABLL;
  v8 = (__int64)a1[1];
  if ( (__int64)&v5[-v8] / 12 < (unsigned __int64)a3 )
  {
    v18 = (v8 - (__int64)*a1) / 12;
    v19 = v18 + a3;
    if ( v18 + a3 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(v5 - (_BYTE *)*a1),
            ((unsigned __int64)((unsigned __int128)((v5 - (_BYTE *)*a1) * (__int128)v7) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((v5 - (_BYTE *)*a1) * (__int128)v7) >> 64) >> 1),
            v19);
    v21 = operator new(saturated_mul(v20, 0xCuLL));
    v22 = a1[1];
    v23 = *a1;
    *(_QWORD *)&v29 = v21;
    v24 = v21;
    *((_QWORD *)&v29 + 1) = v18;
    v30 = 0LL;
    v31 = v29;
    v32 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v29,
      v23,
      v22,
      &v31);
    v25 = *a1;
    v26 = *a1 == a1 + 3;
    *a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v27 = (char *)*a1;
    v8 = (__int64)*a1 + 12 * v18;
    a1[1] = (void *)v8;
    a1[2] = &v27[12 * v20];
  }
  v9 = (char *)*a1;
  v10 = v8 - (_QWORD)*a1;
  v30 = 0LL;
  v11 = (unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v32 = 0LL;
  *((_QWORD *)&v29 + 1) = a3;
  v12 = v10 / 12;
  v13 = v10 / 12 - a2;
  v14 = &v9[12 * (v10 / 12)];
  *(_QWORD *)&v29 = v14;
  v15 = a3 < 0;
  if ( a3 )
  {
    if ( !v14 )
      goto LABEL_22;
    v15 = a3 < 0;
  }
  if ( v15 && a3 )
    goto LABEL_22;
  v33 = v8;
  v32 = a3;
  v16 = a3;
  if ( a3 >= v13 )
    v16 = v13;
  v30 = a3;
  v34 = v8 - 12 * v16;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v34,
    &v33,
    &v29);
  if ( v13 > a3 )
  {
    *(_QWORD *)&v29 = v9;
    *((_QWORD *)&v29 + 1) = v12;
    v28 = v12 < 0;
    if ( !v12 )
    {
LABEL_20:
      if ( !v28 || !v12 )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( v9 )
    {
      v28 = v12 < 0;
      goto LABEL_20;
    }
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v14, v11);
    __debugbreak();
LABEL_23:
    v30 = v12;
    v31 = v29;
    v32 = v12;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v29,
      &v9[12 * a2],
      &v9[12 * (v12 - a3)],
      &v31);
  }
  a1[1] = (char *)a1[1] + 12 * a3;
  return &v9[12 * a2];
}
