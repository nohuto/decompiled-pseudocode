/*
 * XREFs of ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x18017CD50
 * Callers:
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x18017CCA4 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x18017E1D0 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

MagnifierRecognizer::GestureState *__fastcall MagnifierRecognizer::GestureState::GestureState(
        MagnifierRecognizer::GestureState *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax

  v1 = (_QWORD *)((char *)this + 16);
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v1 = v3;
  return this;
}
