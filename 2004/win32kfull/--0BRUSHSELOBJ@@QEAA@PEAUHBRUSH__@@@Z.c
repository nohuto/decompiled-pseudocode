/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00FF340
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
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00FF38C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  HBRUSH v2; // rax
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = a2;
  LOBYTE(a2) = 16;
  v4 = HmgShareLockCheck(v2, a2);
  *(_QWORD *)this = v4;
  if ( v4 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
