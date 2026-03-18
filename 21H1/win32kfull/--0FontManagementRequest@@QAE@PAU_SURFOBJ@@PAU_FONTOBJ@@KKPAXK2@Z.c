/*
 * XREFs of ??0FontManagementRequest@@QAE@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x24A62E
 * Callers:
 *     _UmfdFontManagement@28 @ 0x24A78E (_UmfdFontManagement@28.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

FontManagementRequest *__thiscall FontManagementRequest::FontManagementRequest(
        FontManagementRequest *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  FontDriverDdiRequest::FontDriverDdiRequest(this, 13);
  *(_DWORD *)this = &FontManagementRequest::`vftable';
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
