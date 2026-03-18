/*
 * XREFs of ??0QueryGlyphMetricsPlusBitsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF880E
 * Callers:
 *     _UmfdQueryGlyphMetricsPlusBits@24 @ 0xF886E (_UmfdQueryGlyphMetricsPlusBits@24.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

QueryGlyphMetricsPlusBitsRequest *__thiscall QueryGlyphMetricsPlusBitsRequest::QueryGlyphMetricsPlusBitsRequest(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJEX *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  QueryGlyphMetricsPlusBitsRequest *result; // eax

  FontDriverDdiRequest::FontDriverDdiRequest(this, 2);
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = a6;
  *((_DWORD *)this + 15) = a7;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 9) = a3;
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 12) = a5;
  result = this;
  *(_DWORD *)this = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  return result;
}
