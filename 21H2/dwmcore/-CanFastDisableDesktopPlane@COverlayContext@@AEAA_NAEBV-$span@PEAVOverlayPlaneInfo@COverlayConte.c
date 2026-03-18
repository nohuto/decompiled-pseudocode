/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18003ECAC
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003E884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18000CF50 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180016D18 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall COverlayContext::CanFastDisableDesktopPlane(__int64 *a1, gsl::details *a2)
{
  char v2; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( *(_QWORD *)a2 )
  {
    v5 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
    v6 = *a1;
    v7 = *(_QWORD *)v5;
    v8[0] = *(_DWORD *)(*(_QWORD *)v5 + 68LL);
    v8[1] = *(_DWORD *)(v7 + 72);
    v8[2] = *(_DWORD *)(v7 + 76);
    v8[3] = *(_DWORD *)(v7 + 80);
    v9 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6) + 20);
    if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(v8, &v9) )
      return *(_BYTE *)(v7 + 179) != 0;
  }
  return v2;
}
