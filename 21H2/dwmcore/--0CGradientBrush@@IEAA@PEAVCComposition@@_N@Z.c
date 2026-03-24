/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801E69D8
 * Callers:
 *     ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18016B118 (--0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801D27CC (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2, char a3)
{
  __int64 v5; // rax
  CGradientBrush *result; // rax

  CContent::CContent(this, a2);
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 11) = v5;
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_WORD *)this + 88) = 0;
  *((_BYTE *)this + 104) = 1;
  *((_DWORD *)this + 27) = 1;
  *((_DWORD *)this + 28) = 2;
  *((_BYTE *)this + 178) = a3;
  return result;
}
