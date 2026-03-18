/*
 * XREFs of ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x18008B550
 * Callers:
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800534A0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800DD3F0 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x18005ED90 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18005F02C (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@@Z @ 0x1800D8FC8 (-AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV-$vector@U-$pair@PEBVCVisu.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801901A8 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

void __fastcall CBackdropVisualImage::EnsureAncestorList(CBackdropVisualImage *this)
{
  __int64 *v1; // r15
  __int64 v3; // rcx
  __int64 v4; // r13
  void *v5; // rsi
  __int128 *v6; // rsi
  _OWORD *v7; // rbx
  __int128 *v8; // rdi
  _OWORD *v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  _OWORD *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int128 *v17; // rdi
  __int128 *v18; // rbx
  _OWORD *v19; // rax
  _BYTE *v20; // rbx
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 *v24; // rdi
  __int128 *v25; // rbx
  _OWORD *v26; // rax
  _QWORD *v27; // rdx
  __int128 *v28; // rdi
  __int128 *v29; // rbx
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  _BYTE *v33; // r8
  __int64 v34; // rax
  SIZE_T v35; // r9
  unsigned __int64 v36; // r15
  SIZE_T v37; // rax
  void *v38; // rbx
  void *v39; // rcx
  bool v40; // zf
  unsigned __int64 v41; // r10
  HANDLE ProcessHeap; // rax
  __int64 v43; // [rsp+20h] [rbp-A9h]
  __int128 v44; // [rsp+28h] [rbp-A1h]
  __int128 v45; // [rsp+60h] [rbp-69h]
  __int64 v46; // [rsp+70h] [rbp-59h]
  __int128 v47; // [rsp+80h] [rbp-49h] BYREF
  __int64 v48; // [rsp+90h] [rbp-39h]
  _BYTE v49[24]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+C0h] [rbp-9h] BYREF
  _BYTE *v52; // [rsp+C8h] [rbp-1h]
  char *v53; // [rsp+D0h] [rbp+7h]
  _BYTE Src[32]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+F8h] [rbp+2Fh] BYREF

  v1 = (__int64 *)((char *)this + 1960);
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
    *((_QWORD **)this + 245),
    *((_QWORD **)this + 246));
  v1[1] = *v1;
  v3 = *(_QWORD *)(*((_QWORD *)this + 225) - 8LL);
  v43 = v3;
  v4 = *(_QWORD *)(*((_QWORD *)this + 223) + 88LL);
  if ( !v4 )
    goto LABEL_38;
  v5 = 0LL;
  while ( 1 )
  {
    v50 = v4;
    if ( v4 == *(_QWORD *)(v3 + 64) )
      break;
    v6 = (__int128 *)*((_QWORD *)this + 225);
    v7 = Src;
    v8 = (__int128 *)*((_QWORD *)this + 224);
    v9 = Src;
    lpMem = Src;
    v52 = Src;
    v10 = v6 - v8;
    v53 = (char *)&v55;
    if ( v10 > 2 )
    {
      v36 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v3, 2uLL, v10);
      v37 = 16 * v36;
      if ( !is_mul_ok(v36, 0x10uLL) )
        v37 = v35;
      v38 = operator new(v37);
      v47 = (unsigned __int64)v38;
      v48 = 0LL;
      std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        v49,
        lpMem,
        v52,
        &v47,
        v43,
        v44,
        *((_QWORD *)&v44 + 1));
      v39 = lpMem;
      v40 = lpMem == Src;
      lpMem = v38;
      if ( v40 )
        v39 = 0LL;
      DefaultHeap::Free(v39);
      v7 = lpMem;
      v9 = lpMem;
      v52 = lpMem;
      v53 = (char *)lpMem + 16 * v36;
      v1 = (__int64 *)((char *)this + 1960);
    }
    *((_QWORD *)&v44 + 1) = v6 - v8;
    v11 = v9 - v7;
    v12 = 16 * v11;
    v13 = &v7[v11];
    *(_QWORD *)&v44 = v13;
    if ( !v10 || v13 && (v10 & 0x8000000000000000uLL) == 0LL )
    {
      v14 = v9 - v7;
      if ( v10 < v11 )
        v14 = v6 - v8;
      v45 = v44;
      v3 = 16 * v14;
      v15 = (__int64)v9 - v3;
      v46 = v6 - v8;
      if ( v9 != (_OWORD *)((char *)v9 - v3) )
        goto LABEL_46;
      goto LABEL_11;
    }
LABEL_45:
    while ( 1 )
    {
      v15 = _o__invalid_parameter_noinfo_noreturn(v3);
      __debugbreak();
LABEL_46:
      v3 = (__int64)&v13[v10];
      v41 = v46;
      do
      {
        --v9;
        if ( !(_QWORD)v45 )
          goto LABEL_45;
        if ( !v41 )
          goto LABEL_45;
        --v41;
        v3 -= 16LL;
        if ( v41 >= *((_QWORD *)&v45 + 1) )
          goto LABEL_45;
        *(_OWORD *)v3 = *v9;
      }
      while ( v9 != (_OWORD *)v15 );
      v9 = v52;
LABEL_11:
      if ( v11 <= v10 )
        break;
      if ( !v11 || v7 && (v11 & 0x8000000000000000uLL) == 0LL )
      {
        v3 = -((__int64)(v12 - 16 * v10) >> 4);
        if ( ((__int64)(v12 - 16 * v10) >> 4 <= 0 || v11 >= (__int64)(v12 - 16 * v10) >> 4)
          && (__int64)(v12 - 16 * v10) >> 4 >= 0 )
        {
          memmove_0(&v7[v10], v7, v12 - 16 * v10);
          v9 = v52;
          break;
        }
      }
    }
    v52 = &v9[v10];
    while ( v8 != v6 )
    {
      v22 = *v8++;
      *v7++ = v22;
    }
    v16 = (_QWORD *)*((_QWORD *)this + 246);
    if ( v16 == *((_QWORD **)this + 247) )
    {
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        v1,
        (__int64)v16,
        &v50);
    }
    else
    {
      *v16 = v50;
      v16[1] = v16 + 4;
      v16[2] = v16 + 4;
      v16[3] = v16 + 8;
      v17 = (__int128 *)v52;
      v18 = (__int128 *)lpMem;
      v19 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                        v16 + 1,
                        0LL,
                        (v52 - (_BYTE *)lpMem) >> 4);
      while ( v18 != v17 )
      {
        v23 = *v18++;
        *v19++ = v23;
      }
      v1[1] += 64LL;
    }
    v20 = lpMem;
    v21 = (v52 - (_BYTE *)lpMem) >> 4;
    if ( v21 )
      v52 -= 16 * v21;
    v5 = 0LL;
    lpMem = 0LL;
    if ( v20 != Src && v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    v4 = *(_QWORD *)(v4 + 88);
    if ( !v4 )
      goto LABEL_38;
    v3 = v43;
  }
  v24 = (__int128 *)*((_QWORD *)this + 225);
  v25 = (__int128 *)*((_QWORD *)this + 224);
  lpMem = Src;
  v52 = Src;
  v53 = (char *)&v55;
  v26 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                    &lpMem,
                    0LL,
                    v24 - v25);
  while ( v25 != v24 )
  {
    v32 = *v25++;
    *v26++ = v32;
  }
  v27 = (_QWORD *)*((_QWORD *)this + 246);
  if ( v27 == *((_QWORD **)this + 247) )
  {
    std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
      v1,
      (__int64)v27,
      &v50);
  }
  else
  {
    *v27 = v50;
    v27[1] = v27 + 4;
    v27[2] = v27 + 4;
    v27[3] = v27 + 8;
    v28 = (__int128 *)v52;
    v29 = (__int128 *)lpMem;
    v30 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      v27 + 1,
                      0LL,
                      (v52 - (_BYTE *)lpMem) >> 4);
    while ( v29 != v28 )
    {
      v31 = *v29++;
      *v30++ = v31;
    }
    v1[1] += 64LL;
  }
  v33 = lpMem;
  v34 = (v52 - (_BYTE *)lpMem) >> 4;
  if ( v34 )
    v52 -= 16 * v34;
  lpMem = 0LL;
  if ( v33 != Src )
    v5 = v33;
  DefaultHeap::Free(v5);
LABEL_38:
  CVisualTreePath::AppendAncestorListAboveInnermostVisualTree((char *)this + 1792, v1);
}
