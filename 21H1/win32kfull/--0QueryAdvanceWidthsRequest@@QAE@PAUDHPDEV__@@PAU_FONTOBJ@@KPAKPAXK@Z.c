/*
 * XREFs of ??0QueryAdvanceWidthsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x86FB6
 * Callers:
 *     _UmfdQueryAdvanceWidths@24 @ 0x86F74 (_UmfdQueryAdvanceWidths@24.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

QueryAdvanceWidthsRequest *__thiscall QueryAdvanceWidthsRequest::QueryAdvanceWidthsRequest(
        QueryAdvanceWidthsRequest *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6,
        unsigned int a7)
{
  FontDriverDdiRequest::FontDriverDdiRequest(this, 8);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 9) = a5;
  *((_DWORD *)this + 10) = a6;
  *((_DWORD *)this + 11) = a7;
  *(_DWORD *)this = &QueryAdvanceWidthsRequest::`vftable';
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 12) = (a4 != 1) - 1;
  return this;
}
