/*
 * XREFs of ??0ButtonRecognizer@@QEAA@XZ @ 0x18017304C
 * Callers:
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x180173360 (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
ButtonRecognizer *__fastcall ButtonRecognizer::ButtonRecognizer(ButtonRecognizer *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &ButtonRecognizer::`vftable';
  v2 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x70uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v2 = v3;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  memset_0((char *)this + 80, 0, 0x48uLL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  return this;
}
