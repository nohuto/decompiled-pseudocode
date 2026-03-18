/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@_N777771@Z @ 0x180179B9C
 * Callers:
 *     ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N88888$$QEA$$T@Z @ 0x1801791C8 (--$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180032770 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

_QWORD *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int128 *a7,
        _QWORD *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        __int64 a15)
{
  __int128 v19; // xmm1
  _QWORD *result; // rax

  memset_0(a1, 0, 0xE0uLL);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    a1 + 2,
    a4);
  a1[20] = 0LL;
  a1[21] = 0LL;
  a1[20] = *a8;
  a1[21] = a8[1];
  *a8 = 0LL;
  a8[1] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[3] = a5;
  *a1 = a2;
  *((_OWORD *)a1 + 2) = *a6;
  *((_OWORD *)a1 + 3) = a6[1];
  *((_OWORD *)a1 + 4) = a6[2];
  *((_OWORD *)a1 + 5) = a6[3];
  *((_OWORD *)a1 + 6) = a6[4];
  *((_OWORD *)a1 + 7) = a6[5];
  *((_OWORD *)a1 + 8) = a6[6];
  v19 = *a7;
  *((_BYTE *)a1 + 176) = a9;
  *((_BYTE *)a1 + 177) = a10;
  *((_BYTE *)a1 + 178) = a11;
  *((_BYTE *)a1 + 179) = a12;
  *((_BYTE *)a1 + 180) = a13;
  *((_BYTE *)a1 + 181) = a14;
  a1[23] = a15;
  result = a1;
  *((_OWORD *)a1 + 9) = v19;
  return result;
}
