/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18008A3B4
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int v2; // edx
  int v3; // eax
  __int64 v4; // rcx

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 84);
    if ( !v2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)(v2 - 1)) == 12 )
    {
      *((_DWORD *)this + 84) = v2 - 1;
      return;
    }
    v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 96LL))((char *)this + 16);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x100Au);
  }
}
