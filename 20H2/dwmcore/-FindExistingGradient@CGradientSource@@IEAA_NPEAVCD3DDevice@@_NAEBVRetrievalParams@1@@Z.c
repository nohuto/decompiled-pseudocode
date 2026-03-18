/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1802071E8
 * Callers:
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801E60DC (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801E61A8 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E6274 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180165690 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x180189C6C (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     ??$emplace@AEAPEAVCD3DDevice@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDevice@@$$QEAUCache@CGradientSource@@@Z @ 0x1802070CC (--$emplace@AEAPEAVCD3DDevice@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDevice@@U.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDevice *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v7; // si
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r11
  __int64 *v12; // rdi
  _BYTE *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-10h] BYREF
  struct CD3DDevice *v20; // [rsp+80h] [rbp+40h] BYREF
  struct CD3DDevice *v21; // [rsp+88h] [rbp+48h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+58h] BYREF

  v21 = a2;
  v7 = 1;
  if ( a3 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 1);
    v9 = *v8;
    v20 = (struct CD3DDevice *)*v8;
    while ( (__int64 *)v9 != v8 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      if ( v10 )
      {
        *(_QWORD *)(v10 + 56) = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v9 + 40));
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v9 + 48));
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v20);
      v9 = (__int64)v20;
    }
  }
  v20 = a2;
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
    (__int64 **)this + 1,
    &v22,
    &v20);
  v12 = v22;
  if ( v22 == (__int64 *)*v11 )
  {
    v18 = 0LL;
    std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDevice * &,CGradientSource::Cache>(
      v11,
      (__int64)&v19,
      &v21,
      &v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18 + 1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    v12 = v19;
  }
  if ( *(_QWORD *)a4 )
  {
    v13 = (_BYTE *)v12[5];
    if ( v13 && v13[73] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v12[5]);
      v14 = *(_QWORD **)a4;
      v21 = 0LL;
      *v14 = v13;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    v15 = v12[6];
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v12[6]);
      v16 = (__int64 *)*((_QWORD *)a4 + 1);
      v21 = 0LL;
      *v16 = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
