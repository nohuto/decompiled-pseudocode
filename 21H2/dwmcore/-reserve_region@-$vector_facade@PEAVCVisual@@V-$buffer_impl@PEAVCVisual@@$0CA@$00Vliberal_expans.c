/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18008F2F4
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800C6B2C (--$move@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  char *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v13; // rdi
  LPVOID v14; // rax
  __int64 v15; // r8
  char *v16; // rdx
  LPVOID v17; // rbx
  char *v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rdx
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 1);
  if ( !((__int64)(*((_QWORD *)a1 + 2) - v3) >> 3) )
  {
    v3 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
    if ( v3 + 1 < v3 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_13:
      v21 = v25;
      v22 = v26;
      while ( 1 )
      {
        v3 -= 8LL;
        if ( !v21 )
          goto LABEL_23;
        if ( !v22 )
          goto LABEL_23;
        if ( (unsigned __int64)--v22 >= *((_QWORD *)&v25 + 1) )
          goto LABEL_23;
        *(_QWORD *)(v21 + 8 * v22) = *(_QWORD *)v3;
        if ( v3 == v11 )
          goto LABEL_6;
      }
    }
    v13 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v3 + 1);
    v14 = operator new(saturated_mul(v13, 8uLL));
    v15 = *((_QWORD *)a1 + 1);
    v16 = *(char **)a1;
    *(_QWORD *)&v23 = v14;
    v17 = v14;
    *((_QWORD *)&v23 + 1) = v3;
    v24 = 0LL;
    v25 = v23;
    v26 = 0LL;
    std::move<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
      &v23,
      v16,
      v15,
      &v25);
    v18 = *(char **)a1;
    v19 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v17;
    if ( v19 )
      v18 = 0LL;
    DefaultHeap::Free(v18);
    v3 = *(_QWORD *)a1 + 8 * v3;
    v20 = *(_QWORD *)a1 + 8 * v13;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v20;
  }
  v2 = *(char **)a1;
  v6 = v3 - *(_QWORD *)a1;
  *((_QWORD *)&v23 + 1) = 1LL;
  v7 = v6 >> 3;
  v8 = v7 - a2;
  *(_QWORD *)&v23 = &v2[8 * v7];
  if ( !(_QWORD)v23 )
    goto LABEL_23;
  v24 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v25 = v23;
  v10 = 8 * v9;
  v11 = v3 - v10;
  v26 = 1LL;
  if ( v3 != v3 - v10 )
    goto LABEL_13;
LABEL_6:
  if ( v8 > 1 )
  {
    *(_QWORD *)&v25 = v2;
    *((_QWORD *)&v25 + 1) = v7;
    if ( !v7 || v2 && v7 >= 0 )
    {
      v26 = v7;
      v23 = v25;
      v24 = v7;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v25,
        &v2[8 * a2],
        &v2[8 * v7 - 8],
        &v23);
      goto LABEL_7;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x1801473AELL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  return &v2[8 * a2];
}
