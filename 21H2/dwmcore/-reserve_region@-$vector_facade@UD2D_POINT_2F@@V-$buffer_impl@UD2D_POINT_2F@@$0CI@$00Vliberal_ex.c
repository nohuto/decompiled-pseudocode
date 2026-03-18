/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800CF3F4
 * Callers:
 *     ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1800CF350 (-BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1800CF3A0 (-AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180191D60 (-AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v3; // rsi
  __int64 v5; // rdx
  _QWORD *v7; // r15
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  char *v12; // r9
  unsigned __int64 v13; // rcx
  char *v14; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  char *v21; // rdx
  LPVOID v22; // rbx
  char *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  char *v26; // r10
  _QWORD *v27; // r9
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]

  v3 = (char *)a1[1];
  v5 = a1[2];
  v7 = a1;
  if ( (v5 - (__int64)v3) >> 3 < a3 )
  {
    v16 = (__int64)&v3[-*a1] >> 3;
    v17 = v16 + a3;
    if ( v17 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (v5 - *a1) >> 3, v17);
    v19 = operator new(saturated_mul(v18, 8uLL));
    v20 = v7[1];
    v21 = (char *)*v7;
    *(_QWORD *)&v28 = v19;
    v22 = v19;
    *((_QWORD *)&v28 + 1) = v16;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v28,
      v21,
      v20,
      &v30);
    v23 = (char *)*v7;
    v24 = *v7 == (_QWORD)(v7 + 3);
    *v7 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v3 = (char *)(*v7 + 8 * v16);
    v25 = *v7 + 8 * v18;
    v7[1] = v3;
    v7[2] = v25;
  }
  v8 = (char *)*v7;
  v9 = (__int64)&v3[-*v7];
  *((_QWORD *)&v28 + 1) = a3;
  v10 = v9 >> 3;
  v11 = v10 - a2;
  v12 = &v8[8 * v10];
  *(_QWORD *)&v28 = v12;
  if ( a3 && (!v12 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
LABEL_26:
    v31 = v10;
    v28 = v30;
    v29 = v10;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v30,
      &v8[8 * a2],
      &v8[8 * (v10 - a3)],
      &v28);
    goto LABEL_9;
  }
  v29 = a3;
  v13 = a3;
  if ( a3 >= v11 )
    v13 = v10 - a2;
  v30 = v28;
  a1 = (_QWORD *)(8 * v13);
  v14 = (char *)(v3 - (char *)a1);
  v31 = a3;
  if ( v3 != (char *)(v3 - (char *)a1) )
  {
    v26 = &v12[8 * a3];
    a1 = (_QWORD *)a3;
    v27 = (_QWORD *)v31;
    do
    {
      v3 -= 8;
      if ( !(_QWORD)v30 )
        goto LABEL_25;
      if ( !a1 )
        goto LABEL_25;
      a1 = (_QWORD *)((char *)v27 - 1);
      v26 -= 8;
      v27 = a1;
      if ( (unsigned __int64)a1 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_25;
      *(_QWORD *)v26 = *(_QWORD *)v3;
    }
    while ( v3 != v14 );
  }
  if ( v11 > a3 )
  {
    *(_QWORD *)&v30 = v8;
    *((_QWORD *)&v30 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_9:
  v7[1] += 8 * a3;
  return &v8[8 * a2];
}
