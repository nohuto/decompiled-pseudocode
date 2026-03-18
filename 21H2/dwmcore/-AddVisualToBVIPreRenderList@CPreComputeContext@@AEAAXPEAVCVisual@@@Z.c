/*
 * XREFs of ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x1800899E8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180064698 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180089B0C (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18008B99C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expans.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800DB6AC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CPreComputeContext::AddVisualToBVIPreRenderList(CPreComputeContext *this, struct CVisual *a2)
{
  const struct CVisualTree *v3; // rsi
  CTreeData *TreeData; // rax
  struct CBackdropVisualImage *BackdropVisualImage; // rdi
  _BYTE *v6; // rbx
  __int64 v7; // r8
  HANDLE ProcessHeap; // rax
  struct CTreeData *v9; // rax
  __int128 v10; // [rsp+20h] [rbp-50h]
  _BYTE *v11; // [rsp+30h] [rbp-40h] BYREF
  const struct CVisualTree **v12; // [rsp+38h] [rbp-38h]
  __int64 *v13; // [rsp+40h] [rbp-30h]
  _BYTE v14[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h] BYREF

  *(_QWORD *)&v10 = 0LL;
  v3 = *(const struct CVisualTree **)(*(_QWORD *)this + 432LL);
  *((_QWORD *)&v10 + 1) = v3;
  v11 = v14;
  v12 = (const struct CVisualTree **)v14;
  v13 = &v15;
  *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
               &v11,
               0LL,
               1LL) = v10;
  TreeData = CVisual::FindTreeData(a2, *(v12 - 1));
  if ( TreeData )
    BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, (const struct CVisualTreePath *)&v11);
  else
    BackdropVisualImage = 0LL;
  v6 = v11;
  v7 = ((char *)v12 - v11) >> 4;
  if ( v7 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v11,
      0LL,
      v7);
    v6 = v11;
  }
  v11 = 0LL;
  if ( v6 == v14 )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  if ( BackdropVisualImage )
  {
    if ( *((_QWORD *)BackdropVisualImage + 18) != *((_QWORD *)v3 + 8) )
    {
      v9 = CVisual::FindTreeData(a2, v3);
      if ( v9 )
      {
        if ( (__int64)(*((_QWORD *)v9 + 25) - *((_QWORD *)v9 + 24)) >> 3 )
          detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
            (char *)v9 + 192,
            0LL);
      }
    }
  }
  *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::reserve_region(
               (char *)v3 + 5480,
               (__int64)(*((_QWORD *)v3 + 686) - *((_QWORD *)v3 + 685)) >> 3) = a2;
}
