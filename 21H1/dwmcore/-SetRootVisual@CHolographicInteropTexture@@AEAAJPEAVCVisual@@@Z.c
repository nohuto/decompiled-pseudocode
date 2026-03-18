/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18025A700
 * Callers:
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x18025A4A0 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICIN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x18009BCC8 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B619C (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18025A6CC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(CHolographicInteropTexture *this, struct CVisual *a2)
{
  struct CDesktopTree *v2; // rbx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  struct _LUID v8; // [rsp+48h] [rbp+10h]
  struct CDesktopTree *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v8.LowPart = *((_DWORD *)this + 52);
    v8.HighPart = -2;
    v4 = CDesktopTree::Create(*((struct CComposition **)this + 2), a2, v8, &v9);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xE6u, 0LL);
      return v6;
    }
    v2 = v9;
  }
  if ( v2 != *((struct CDesktopTree **)this + 11) )
  {
    CHolographicInteropTexture::ReleaseVisualTree(this);
    if ( v2 )
    {
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (struct CDesktopTree *)((char *)v2 + 5728),
                   (__int64)(*((_QWORD *)v2 + 717) - *((_QWORD *)v2 + 716)) >> 3) = (char *)this + 56;
      *((_BYTE *)v2 + 5893) = 1;
      *((_QWORD *)this + 11) = v2;
      (*(void (__fastcall **)(struct CDesktopTree *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v6 = 0;
  if ( v2 )
    (*(void (__fastcall **)(struct CDesktopTree *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
