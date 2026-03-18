/*
 * XREFs of ??0QueryFontDataRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x876A6
 * Callers:
 *     _UmfdQueryFontData@28 @ 0x87310 (_UmfdQueryFontData@28.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

QueryFontDataRequest *__thiscall QueryFontDataRequest::QueryFontDataRequest(
        QueryFontDataRequest *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJEX *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  FontDriverDdiRequest::FontDriverDdiRequest(this, 2);
  *(_DWORD *)this = &QueryFontDataRequest::`vftable';
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 9) = a3;
  *((_DWORD *)this + 7) = a4;
  *((_DWORD *)this + 8) = a5;
  *((_DWORD *)this + 10) = a6;
  *((_DWORD *)this + 11) = a7;
  *((_DWORD *)this + 12) = a8;
  return this;
}
