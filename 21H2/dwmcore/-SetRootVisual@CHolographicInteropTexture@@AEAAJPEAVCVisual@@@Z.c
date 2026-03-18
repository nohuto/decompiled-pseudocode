/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18029C0F8
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18029BB94 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x18029BE84 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICIN.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIVisualTreeClient@@_K0@Z @ 0x180025344 (-reserve_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801F5F68 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z @ 0x18029A8AC (--$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18029C0C4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(CHolographicInteropTexture *this, CVisual **a2)
{
  struct CDesktopTree *v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  struct CDesktopTree *v10; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  ReleaseInterface<CVisual>((__int64 *)this + 13);
  if ( a2 )
  {
    v5 = *((_DWORD *)this + 56);
    if ( v5 )
    {
      v6 = CDesktopTree::Create(
             *((struct CComposition **)this + 2),
             a2,
             (struct _LUID)(v5 | 0xFFFFFFFE00000000uLL),
             (struct _LUID **)&v10);
      v8 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x10Eu);
        return v8;
      }
      v4 = v10;
    }
    else
    {
      *((_QWORD *)this + 13) = a2;
      (*((void (__fastcall **)(CVisual **))*a2 + 1))(a2);
    }
  }
  if ( v4 != *((struct CDesktopTree **)this + 12) )
  {
    CHolographicInteropTexture::ReleaseVisualTree(this);
    if ( v4 )
    {
      *(_QWORD *)detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (struct CDesktopTree *)((char *)v4 + 4536),
                   (__int64)(*((_QWORD *)v4 + 568) - *((_QWORD *)v4 + 567)) >> 3) = (char *)this + 64;
      *((_BYTE *)v4 + 4712) = 1;
      *((_QWORD *)this + 12) = v4;
      (*(void (__fastcall **)(struct CDesktopTree *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_11:
      (*(void (__fastcall **)(struct CDesktopTree *))(*(_QWORD *)v4 + 16LL))(v4);
      return 0;
    }
  }
  v8 = 0;
  if ( v4 )
    goto LABEL_11;
  return v8;
}
