/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18009B46C
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180097B50 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x18009B0BC (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18016C8A4 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801BE8D4 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801C5F94 (--0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1802027D8 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 64, 0, 0x40uLL);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 18;
  *((_BYTE *)this + 140) = 0;
  *((_BYTE *)this + 208) |= 1u;
  *((_QWORD *)this + 19) = -1LL;
  *((_QWORD *)this + 20) = -1LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 27) = (char *)this + 248;
  *((_QWORD *)this + 28) = (char *)this + 248;
  *((_DWORD *)this + 58) = 2;
  *((_DWORD *)this + 59) = 2;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
