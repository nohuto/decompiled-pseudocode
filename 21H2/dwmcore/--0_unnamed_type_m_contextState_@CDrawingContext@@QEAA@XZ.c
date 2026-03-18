/*
 * XREFs of ??0_unnamed_type_m_contextState_@CDrawingContext@@QEAA@XZ @ 0x1800530A8
 * Callers:
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180052CC0 (--0CDrawingContext@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CDrawingContext::_unnamed_type_m_contextState_ *__fastcall CDrawingContext::_unnamed_type_m_contextState_::_unnamed_type_m_contextState_(
        CDrawingContext::_unnamed_type_m_contextState_ *this)
{
  char v1; // al
  char v2; // al
  CDrawingContext::_unnamed_type_m_contextState_ *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 1065353216;
  v1 = *((_BYTE *)this + 89);
  *((_BYTE *)this + 88) = 85;
  *((_BYTE *)this + 89) = v1 & 0xC0 | 0x17;
  *((_QWORD *)this + 3) = 1065353216LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 1065353216LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 1065353216LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1065353216;
  v2 = *((_BYTE *)this + 89);
  *((_BYTE *)this + 88) = 85;
  *((_BYTE *)this + 89) = v2 & 0xC0 | 0x17;
  *((_DWORD *)this + 5) &= ~1u;
  *((_BYTE *)this + 128) = 1;
  *((_DWORD *)this + 27) = 1;
  *((_QWORD *)this + 14) = 1LL;
  result = this;
  *(_QWORD *)((char *)this + 132) = 1068827891LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
