/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180037DE0
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180037CEC (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180037EE8 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AAEC8 (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AC8C4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v5; // rdx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  signed __int64 v10; // rbx
  unsigned __int64 v11; // r12
  char *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  void *v19; // rax
  void *v20; // r8
  void *v21; // rdx
  void *v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rcx
  signed __int64 v26; // xmm1_8
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF

  v32 = a3;
  v3 = (__int64)a1[1];
  v5 = a1[2];
  v7 = 1LL;
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[-v3] >> 2)) )
  {
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            0xAAAAAAAAAAAAAAABuLL * ((v5 - (_BYTE *)*a1) >> 2),
            v17);
    v19 = operator new(saturated_mul(v18, 0xCuLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v27 = v19;
    v22 = v19;
    *((_QWORD *)&v27 + 1) = v16;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v27,
      v21,
      v20,
      &v29);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v25 = (char *)*a1;
    v3 = (__int64)*a1 + 12 * v16;
    a1[1] = (void *)v3;
    a1[2] = &v25[12 * v18];
    v7 = 1LL;
  }
  v8 = (char *)*a1;
  v9 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v27 + 1) = 1LL;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 2);
  v11 = v10 - a2;
  v12 = &v8[12 * v10];
  *(_QWORD *)&v27 = v12;
  if ( !v12 )
    goto LABEL_17;
  v28 = 1LL;
  v32 = v3;
  v13 = v10 - a2;
  v29 = v27;
  if ( v11 > 1 )
    v13 = 1LL;
  v30 = 1LL;
  v31 = v3 - 12 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v31,
    &v32,
    &v29);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v27 = v8;
    *((_QWORD *)&v27 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
    {
      v28 = v10;
      v26 = v10;
      v14 = 12 * a2;
      v29 = v27;
      v30 = v26;
      std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        &v27,
        &v8[12 * a2],
        v12 - 12,
        &v29);
      goto LABEL_7;
    }
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x18012BE99LL);
  }
  v14 = 12 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 12;
  return &v8[v14];
}
