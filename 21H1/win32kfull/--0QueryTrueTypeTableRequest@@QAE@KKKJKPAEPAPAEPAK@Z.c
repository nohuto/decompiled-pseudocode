/*
 * XREFs of ??0QueryTrueTypeTableRequest@@QAE@KKKJKPAEPAPAEPAK@Z @ 0x86CB0
 * Callers:
 *     _UmfdQueryTrueTypeTable@32 @ 0x86C4E (_UmfdQueryTrueTypeTable@32.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

QueryTrueTypeTableRequest *__thiscall QueryTrueTypeTableRequest::QueryTrueTypeTableRequest(
        QueryTrueTypeTableRequest *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  FontDriverDdiRequest::FontDriverDdiRequest(this, 10);
  *(_DWORD *)this = &QueryTrueTypeTableRequest::`vftable';
  *((_DWORD *)this + 14) = -1;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *((_DWORD *)this + 10) = a6;
  *((_DWORD *)this + 11) = a7;
  *((_DWORD *)this + 12) = a8;
  *((_DWORD *)this + 13) = a9;
  return this;
}
