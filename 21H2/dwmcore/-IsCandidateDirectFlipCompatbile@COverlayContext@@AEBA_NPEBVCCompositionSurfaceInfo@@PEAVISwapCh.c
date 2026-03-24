/*
 * XREFs of ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1800EBDFC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017A340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800D19A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x1800EBF9C (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayContext::IsCandidateDirectFlipCompatbile(
        COverlayContext *this,
        const struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a4,
        enum DXGI_MODE_ROTATION a5,
        char a6)
{
  char v10; // bl
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, int *); // rcx
  _DWORD *v13; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+38h] [rbp-8h]
  int v18; // [rsp+3Ch] [rbp-4h]
  int v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+84h] [rbp+44h]

  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 80LL))(a3) )
  {
    if ( *((int *)a4 + 5) >= 0 && *((int *)a4 + 6) >= 0 )
    {
      v11 = *(_QWORD *)this;
      v15[0] = *((_DWORD *)a4 + 9);
      v15[1] = *((_DWORD *)a4 + 10);
      v15[2] = *((_DWORD *)a4 + 11);
      v15[3] = *((_DWORD *)a4 + 12);
      v12 = (void (__fastcall ***)(_QWORD, int *))(v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 12LL));
      (**v12)(v12, &v19);
      v17 = v19;
      v18 = v20;
      v16 = 0LL;
      if ( *((int *)this + 2806) <= 0
        && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 48LL))(a3)
        && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 64LL))(a3)
        && (*((_DWORD *)this + 18) || EqualRect((const RECT *)((char *)a4 + 4), (const RECT *)((char *)a4 + 20))) )
      {
        if ( EqualRect((const RECT *)((char *)a4 + 20), (const RECT *)((char *)a4 + 36)) )
        {
          v13 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
          if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(v13, v15) )
          {
            if ( (*((_DWORD *)this + 18)
               || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(&v16, v15))
              && a5 == DXGI_MODE_ROTATION_IDENTITY
              && (a6 & 3) == 0 )
            {
              return COverlayContext::IsDirectFlipSupportedOnTarget(this, a2, a3);
            }
          }
        }
      }
    }
  }
  return v10;
}
