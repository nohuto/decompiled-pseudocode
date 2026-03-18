/*
 * XREFs of ??0LoadFontFileRequest@@QAE@KPAKPAPAX0PAUtagDESIGNVECTOR@@KK@Z @ 0xDEAFE
 * Callers:
 *     _UmfdLoadFontFile@28 @ 0xDE9A6 (_UmfdLoadFontFile@28.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

LoadFontFileRequest *__thiscall LoadFontFileRequest::LoadFontFileRequest(
        LoadFontFileRequest *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  LoadFontFileRequest *result; // eax

  FontDriverDdiRequest::FontDriverDdiRequest(this, 4);
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = -1;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 11) = a4;
  *((_DWORD *)this + 15) = a5;
  *((_DWORD *)this + 23) = a6;
  *((_DWORD *)this + 19) = a7;
  *((_DWORD *)this + 20) = a8;
  result = this;
  *(_DWORD *)this = &LoadFontFileRequest::`vftable';
  return result;
}
