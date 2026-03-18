/*
 * XREFs of ??0QueryTrueTypeOutlineRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x24A683
 * Callers:
 *     _UmfdQueryTrueTypeOutline@28 @ 0x24A8B3 (_UmfdQueryTrueTypeOutline@28.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

QueryTrueTypeOutlineRequest *__thiscall QueryTrueTypeOutlineRequest::QueryTrueTypeOutlineRequest(
        QueryTrueTypeOutlineRequest *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  FontDriverDdiRequest::FontDriverDdiRequest(this, 11);
  *(_DWORD *)this = &QueryTrueTypeOutlineRequest::`vftable';
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *((_DWORD *)this + 10) = a6;
  *((_DWORD *)this + 11) = a7;
  *((_DWORD *)this + 12) = a8;
  return this;
}
