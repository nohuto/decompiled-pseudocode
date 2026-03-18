/*
 * XREFs of ??0CScopedClipStack@@QEAA@XZ @ 0x180052FB0
 * Callers:
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180052CC0 (--0CDrawingContext@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CScopedClipStack *__fastcall CScopedClipStack::CScopedClipStack(CScopedClipStack *this)
{
  CScopedClipStack *result; // rax

  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 10;
  *(_QWORD *)((char *)this + 20) = 10LL;
  *((_QWORD *)this + 114) = (char *)this + 944;
  *((_QWORD *)this + 115) = (char *)this + 944;
  *((_DWORD *)this + 232) = 10;
  *(_QWORD *)((char *)this + 932) = 10LL;
  *((_QWORD *)this + 258) = 0LL;
  *((_QWORD *)this + 260) = 0LL;
  *((_DWORD *)this + 518) = 0;
  *((_DWORD *)this + 522) = 0;
  *((_QWORD *)this + 262) = 0LL;
  *((_QWORD *)this + 264) = 0LL;
  *((_DWORD *)this + 526) = 0;
  *((_DWORD *)this + 530) = 0;
  *((_QWORD *)this + 266) = (char *)this + 2160;
  *((_QWORD *)this + 267) = (char *)this + 2160;
  result = this;
  *((_DWORD *)this + 536) = 10;
  *(_QWORD *)((char *)this + 2148) = 10LL;
  return result;
}
