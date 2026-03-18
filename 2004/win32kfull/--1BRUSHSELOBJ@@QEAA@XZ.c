/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00FF2C0
 * Callers:
 *     GreMarkDeletableBrush @ 0x1C00FEE64 (GreMarkDeletableBrush.c)
 *     GreExtCreatePen @ 0x1C00FEF60 (GreExtCreatePen.c)
 *     NtGdiFrameRgn @ 0x1C0131750 (NtGdiFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0139330 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFillRgn @ 0x1C0139480 (NtGdiFillRgn.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B61EC (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B63E4 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C02B7768 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00FF2F0 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
}
