/*
 * XREFs of sub_18009ECAC @ 0x18009ECAC
 * Callers:
 *     sub_180018B10 @ 0x180018B10 (sub_180018B10.c)
 * Callees:
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009ECAC(__int64 a1)
{
  _QWORD *v2; // rax
  signed __int64 v3; // rdi

  sub_180067B20((_QWORD *)a1, 1, 0xBu);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 112) = v2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v3 = _InterlockedExchangeAdd64(&qword_180220CA0, 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v3 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}
