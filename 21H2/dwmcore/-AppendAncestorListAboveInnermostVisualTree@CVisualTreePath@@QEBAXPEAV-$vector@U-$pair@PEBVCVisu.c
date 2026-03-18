/*
 * XREFs of ?AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@@Z @ 0x1800D8FC8
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x18008B550 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x18005ED90 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180064698 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?at@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBAAEBUVisualTreePathUnit@CVisualTreePath@@_K@Z @ 0x1800DE304 (-at@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVis.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CVisualTreePath::AppendAncestorListAboveInnermostVisualTree(__int128 **a1, __int64 *a2)
{
  __int128 *v2; // rdi
  __int128 *v3; // rbx
  __int128 **v5; // r12
  char *v6; // rax
  __int128 v7; // xmm0
  int i; // esi
  __int128 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int128 *v13; // rdi
  __int128 *v14; // rbx
  char *v15; // rax
  __int128 v16; // xmm0
  _QWORD *v17; // rdx
  __int128 *v18; // rdi
  __int128 *v19; // rbx
  char *v20; // rax
  __int128 v21; // xmm0
  __int128 *v22; // rcx
  __int64 v23; // rax
  __int128 *v24; // rdi
  __int128 *v25; // rbx
  char *v26; // rax
  __int128 v27; // xmm0
  _QWORD *v28; // rdx
  __int128 *v29; // rdi
  __int128 *v30; // rbx
  char *v31; // rax
  __int128 v32; // xmm0
  __int128 *v33; // rcx
  __int64 v34; // rax
  __int64 v36; // [rsp+28h] [rbp-61h] BYREF
  __int128 *v37; // [rsp+30h] [rbp-59h] BYREF
  __int128 *v38; // [rsp+38h] [rbp-51h]
  __int128 **v39; // [rsp+40h] [rbp-49h]
  _BYTE v40[32]; // [rsp+48h] [rbp-41h] BYREF
  __int128 *v41; // [rsp+68h] [rbp-21h] BYREF
  __int128 *v42; // [rsp+70h] [rbp-19h]
  __int64 *v43; // [rsp+78h] [rbp-11h]
  _BYTE v44[32]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+17h] BYREF

  v2 = a1[1];
  v3 = *a1;
  v41 = (__int128 *)v44;
  v5 = a1;
  v42 = (__int128 *)v44;
  v43 = &v45;
  v6 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
         (detail::liberal_expansion_policy *)&v41,
         0LL,
         v2 - v3);
  while ( v3 != v2 )
  {
    v7 = *v3++;
    *(_OWORD *)v6 = v7;
    v6 += 16;
  }
  for ( i = v5[1] - *v5 - 1; i > 0; --i )
  {
    v11 = *(_QWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                       v5,
                       i);
    v12 = *(_QWORD *)(detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
                        v5,
                        i - 1LL)
                    + 8);
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v41,
      v42 - 1 - v41,
      1LL);
    if ( v11 != *(_QWORD *)(v12 + 64) )
    {
      do
      {
        v13 = v42;
        v14 = v41;
        v37 = (__int128 *)v40;
        v36 = v11;
        v38 = (__int128 *)v40;
        v39 = &v41;
        v15 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                (detail::liberal_expansion_policy *)&v37,
                0LL,
                v42 - v41);
        while ( v14 != v13 )
        {
          v16 = *v14++;
          *(_OWORD *)v15 = v16;
          v15 += 16;
        }
        v17 = (_QWORD *)a2[1];
        if ( v17 == (_QWORD *)a2[2] )
        {
          std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
            a2,
            (__int64)v17,
            &v36);
        }
        else
        {
          *v17 = v36;
          v17[1] = v17 + 4;
          v17[2] = v17 + 4;
          v17[3] = v17 + 8;
          v18 = v38;
          v19 = v37;
          v20 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                  (detail::liberal_expansion_policy *)(v17 + 1),
                  0LL,
                  v38 - v37);
          while ( v19 != v18 )
          {
            v21 = *v19++;
            *(_OWORD *)v20 = v21;
            v20 += 16;
          }
          a2[1] += 64LL;
        }
        v22 = v37;
        v23 = v38 - v37;
        if ( v23 )
          v38 -= v23;
        v37 = 0LL;
        if ( v22 == (__int128 *)v40 )
          v22 = 0LL;
        DefaultHeap::Free(v22);
        v11 = *(_QWORD *)(v11 + 88);
      }
      while ( v11 != *(_QWORD *)(v12 + 64) );
      v5 = a1;
    }
    v24 = v42;
    v25 = v41;
    v37 = (__int128 *)v40;
    v36 = v11;
    v38 = (__int128 *)v40;
    v39 = &v41;
    v26 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
            (detail::liberal_expansion_policy *)&v37,
            0LL,
            v42 - v41);
    while ( v25 != v24 )
    {
      v27 = *v25++;
      *(_OWORD *)v26 = v27;
      v26 += 16;
    }
    v28 = (_QWORD *)a2[1];
    if ( v28 == (_QWORD *)a2[2] )
    {
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        a2,
        (__int64)v28,
        &v36);
    }
    else
    {
      *v28 = v36;
      v28[1] = v28 + 4;
      v28[2] = v28 + 4;
      v28[3] = v28 + 8;
      v29 = v38;
      v30 = v37;
      v31 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
              (detail::liberal_expansion_policy *)(v28 + 1),
              0LL,
              v38 - v37);
      while ( v30 != v29 )
      {
        v32 = *v30++;
        *(_OWORD *)v31 = v32;
        v31 += 16;
      }
      a2[1] += 64LL;
    }
    v33 = v37;
    v34 = v38 - v37;
    if ( v34 )
      v38 -= v34;
    v37 = 0LL;
    if ( v33 == (__int128 *)v40 )
      v33 = 0LL;
    DefaultHeap::Free(v33);
  }
  v9 = v41;
  v10 = v42 - v41;
  if ( v10 )
    v42 -= v10;
  v41 = 0LL;
  if ( v9 == (__int128 *)v44 )
    v9 = 0LL;
  DefaultHeap::Free(v9);
}
