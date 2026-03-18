/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreExtTextOutRect @ 0x1C0017C44 (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C001836C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GreGetAppClipBox @ 0x1C0019498 (GreGetAppClipBox.c)
 *     GreGradientFill @ 0x1C001967C (GreGradientFill.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086DC0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreGetBoundsRect @ 0x1C00F61E8 (GreGetBoundsRect.c)
 *     NtGdiFrameRgn @ 0x1C0131750 (NtGdiFrameRgn.c)
 *     NtGdiFastPolyPolyline @ 0x1C0136400 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0138270 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0138AC4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0139480 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013B8A8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027C708 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027D2F4 (GreDrawEscape.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B84F0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 *     NtGdiSwapBuffers @ 0x1C02BCD20 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
    return 1LL;
  v2 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v2 & 0x1000) != 0 && (v2 & 0x4000) == 0 )
    return 1LL;
  return result;
}
