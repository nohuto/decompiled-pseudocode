/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18001513C
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EEF50 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBU.c)
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B7874 (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800153AC (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015468 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180015638 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005799C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800621D0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AF580 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800BCB40 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  int Bounds; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  int CurrentRenderingRealization; // eax
  unsigned int v13; // ecx
  char *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  _QWORD v20[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v21[64]; // [rsp+40h] [rbp-59h] BYREF
  int v22; // [rsp+80h] [rbp-19h]
  struct IBitmapRealization *v23[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v24; // [rsp+A0h] [rbp+7h]

  *(_OWORD *)v23 = 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds(this, a3, v23);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x95u, 0LL);
  }
  else if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v23) )
  {
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this - 160))
      && (v10 = COcclusionContext::CollectRectangleForOcclusion(a2, v23, v9, 0LL), v8 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9Bu, 0LL);
    }
    else if ( *((_BYTE *)a2 + 1245)
           && CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 224)) )
    {
      v20[0] = 0LL;
      v22 = 0;
      v23[0] = 0LL;
      v24 = 0LL;
      CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                      (CCompositionSurfaceBitmap *)((char *)this - 160),
                                      v23);
      v8 = CurrentRenderingRealization;
      if ( CurrentRenderingRealization < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CurrentRenderingRealization, 0xA6u, 0LL);
      }
      else
      {
        v14 = (char *)v23[0] + *(int *)(*((_QWORD *)v23[0] + 1) + 4LL) + 8;
        v15 = (**(__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v14)(
                v14,
                &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
                v20);
        v8 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA8u, 0LL);
        }
        else
        {
          CCompositionSurfaceBitmap::CalcImageTransform(
            (CCompositionSurfaceBitmap *)((char *)this - 224),
            a3,
            (CMILMatrix *)v21);
          v17 = COcclusionContext::CheckAndRecordOverlayCandidate(
                  (_DWORD)a2,
                  *((_QWORD *)a2 + 154),
                  *((_QWORD *)this - 16),
                  (unsigned int)v21,
                  0LL,
                  0);
          v8 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xAEu, 0LL);
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v20);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v23);
    }
  }
  return v8;
}
