/*
 * XREFs of ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E83C0
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F0050 (-Render@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x18007AE10 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18007AE4C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D353C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018C080 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::Render(
        CLocalAppRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // edi
  char v5; // r10
  CDesktopTree *v9; // rcx
  CDirtyRegion *DirtyRegion; // rax
  CDirtyRegion *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  *((_BYTE *)this - 56) = 0;
  if ( *((_QWORD *)this - 8) )
  {
    v9 = (CDesktopTree *)*((_QWORD *)this - 14);
    if ( v9 )
    {
      DirtyRegion = CDesktopTree::GetDirtyRegion(v9);
      v5 = 0;
      v11 = DirtyRegion;
      if ( DirtyRegion )
      {
        if ( !CDirtyRegion::IsEmpty(DirtyRegion) )
        {
          CDirtyRegion::CalcOcclusion(v11);
          v12 = CLocalAppRenderTarget::RenderDirtyRegion((CLocalAppRenderTarget *)((char *)this - 216), a2, v11);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x79u, 0LL);
            v5 = *((_BYTE *)this - 56);
          }
          else
          {
            v5 = 1;
            *((_BYTE *)this - 56) = 1;
          }
        }
      }
    }
  }
  result = v4;
  *a4 = v5;
  return result;
}
