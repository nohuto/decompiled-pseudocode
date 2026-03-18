/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180036E84
 * Callers:
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180036DF0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180037EE8 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AAEC8 (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AC8C4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v5; // rdx
  detail::liberal_expansion_policy *v7; // rcx
  char *v9; // rdi
  __int64 v10; // rbx
  signed __int64 v11; // rbx
  unsigned __int64 v12; // r13
  char *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  void *v20; // rax
  void *v21; // r8
  void *v22; // rdx
  void *v23; // rbx
  void *v24; // rcx
  bool v25; // zf
  char *v26; // rcx
  char *v27; // r8
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF

  v3 = (__int64)a1[1];
  v5 = a1[2];
  v7 = (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[-v3] >> 2) < a3 )
  {
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
    v18 = v17 + a3;
    if ( v17 + a3 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(v7, (_QWORD)v7 * ((v5 - (_BYTE *)*a1) >> 2), v18);
    v20 = operator new(saturated_mul(v19, 0xCuLL));
    v21 = a1[1];
    v22 = *a1;
    *(_QWORD *)&v28 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v23 = v20;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v28,
      v22,
      v21,
      &v30);
    v24 = *a1;
    v25 = *a1 == a1 + 3;
    *a1 = v23;
    if ( v25 )
      v24 = 0LL;
    DefaultHeap::Free(v24);
    v26 = (char *)*a1;
    v3 = (__int64)*a1 + 12 * v17;
    a1[1] = (void *)v3;
    a1[2] = &v26[12 * v19];
  }
  v9 = (char *)*a1;
  v10 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v28 + 1) = a3;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (v10 >> 2);
  v12 = v11 - a2;
  v13 = &v9[12 * v11];
  *(_QWORD *)&v28 = v13;
  if ( a3 && (!v13 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v13);
    __debugbreak();
LABEL_20:
    v29 = v11;
    v30 = v28;
    v31 = v11;
    v27 = &v9[12 * (v11 - a3)];
    v15 = 12 * a2;
    std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v28,
      &v9[12 * a2],
      v27,
      &v30);
    goto LABEL_9;
  }
  v32 = v3;
  v29 = a3;
  v14 = a3;
  v30 = v28;
  if ( a3 >= v12 )
    v14 = v11 - a2;
  v31 = a3;
  v33 = v3 - 12 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v33,
    &v32,
    &v30);
  if ( v12 > a3 )
  {
    *(_QWORD *)&v28 = v9;
    *((_QWORD *)&v28 + 1) = v11;
    if ( !v11 || v9 && v11 >= 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v15 = 12 * a2;
LABEL_9:
  a1[1] = (char *)a1[1] + 12 * a3;
  return &v9[v15];
}
