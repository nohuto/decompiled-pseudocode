/*
 * XREFs of ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC
 * Callers:
 *     _UmfdQueryFontTree@20 @ 0x858C8 (_UmfdQueryFontTree@20.c)
 *     ??0QueryTrueTypeTableRequest@@QAE@KKKJKPAEPAPAEPAK@Z @ 0x86CB0 (--0QueryTrueTypeTableRequest@@QAE@KKKJKPAEPAPAEPAK@Z.c)
 *     ??0QueryAdvanceWidthsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x86FB6 (--0QueryAdvanceWidthsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z.c)
 *     ??0QueryFontDataRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x876A6 (--0QueryFontDataRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 *     _UmfdDestroyFont@4 @ 0xD0BEA (_UmfdDestroyFont@4.c)
 *     _UmfdTrueTypeFreeGlyphset@12 @ 0xD3248 (_UmfdTrueTypeFreeGlyphset@12.c)
 *     _UmfdQueryFont@16 @ 0xDC592 (_UmfdQueryFont@16.c)
 *     ??0LoadFontFileRequest@@QAE@KPAKPAPAX0PAUtagDESIGNVECTOR@@KK@Z @ 0xDEAFE (--0LoadFontFileRequest@@QAE@KPAKPAPAX0PAUtagDESIGNVECTOR@@KK@Z.c)
 *     _UmfdQueryFontFile@16 @ 0xDEBA2 (_UmfdQueryFontFile@16.c)
 *     ??0QueryGlyphMetricsPlusBitsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF880E (--0QueryGlyphMetricsPlusBitsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAPAU_GLYPHDATA@@PAPAU_GL.c)
 *     ??0FontManagementRequest@@QAE@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x24A62E (--0FontManagementRequest@@QAE@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ??0QueryTrueTypeOutlineRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x24A683 (--0QueryTrueTypeOutlineRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONH.c)
 *     _UmfdDrvFreeInternal@12 @ 0x24A6EA (_UmfdDrvFreeInternal@12.c)
 *     _UmfdEscape@24 @ 0x24A72A (_UmfdEscape@24.c)
 *     _UmfdGetTrueTypeFile@8 @ 0x24A7D5 (_UmfdGetTrueTypeFile@8.c)
 *     _UmfdQueryGlyphAttrs@8 @ 0x24A82E (_UmfdQueryGlyphAttrs@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

_DWORD *__thiscall FontDriverDdiRequest::FontDriverDdiRequest(_DWORD *this, int a2)
{
  int ThreadInformation; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]

  *this = &FontDriverDdiRequest::`vftable';
  this[1] = a2;
  this[2] = KeGetCurrentThread();
  *((_BYTE *)this + 20) = 0;
  ThreadInformation = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0) >= 0 )
  {
    this[3] = ThreadInformation;
    this[4] = v5;
    *((_BYTE *)this + 20) = 1;
  }
  return this;
}
