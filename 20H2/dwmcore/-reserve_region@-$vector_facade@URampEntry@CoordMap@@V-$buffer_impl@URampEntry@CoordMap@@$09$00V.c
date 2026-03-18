/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180008D68
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180008CAC (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18006C9A4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18019BFAC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180255870 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  char *v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rax
  _OWORD *v24; // r9
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v2 = (char *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 4) )
  {
    v14 = (__int64)&v2[-*(_QWORD *)a1] >> 4;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v15);
    v17 = operator new(saturated_mul(v16, 0x10uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    *(_QWORD *)&v26 = v17;
    v20 = v17;
    *((_QWORD *)&v26 + 1) = v14;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v26,
      v19,
      v18,
      &v28);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2 = (char *)(*(_QWORD *)a1 + 16 * v14);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v16;
    *((_QWORD *)a1 + 1) = v2;
  }
  v6 = *(char **)a1;
  v7 = (__int64)&v2[-*(_QWORD *)a1];
  *((_QWORD *)&v26 + 1) = 1LL;
  v8 = v7 >> 4;
  v27 = 0LL;
  v9 = v8 - a2;
  v10 = &v6[16 * v8];
  v29 = 0LL;
  *(_QWORD *)&v26 = v10;
  v28 = v26;
  if ( !v10 )
    goto LABEL_25;
  v29 = 1LL;
  v11 = 1LL;
  if ( v9 <= 1 )
    v11 = v8 - a2;
  v12 = 16 * v11;
  v10 = &v2[-v12];
  v27 = 1LL;
  if ( v2 != &v2[-v12] )
  {
    v23 = v27;
    v24 = (_OWORD *)(v28 + 16);
    do
    {
      v2 -= 16;
      if ( !(_QWORD)v26 )
        goto LABEL_25;
      if ( !v23 )
        goto LABEL_25;
      --v23;
      --v24;
      if ( v23 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_25;
      *v24 = *(_OWORD *)v2;
    }
    while ( v2 != v10 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = v8;
    v25 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_25;
      v25 = v8 < 0;
    }
    if ( !v25 || !v8 )
    {
      v29 = v8;
      v26 = v28;
      v27 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
        &v28,
        &v6[16 * a2],
        &v6[16 * v8 - 16],
        &v26);
      goto LABEL_7;
    }
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(v10, v9);
    __debugbreak();
    JUMPOUT(0x1800FDB96LL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 16LL;
  return &v6[16 * a2];
}
