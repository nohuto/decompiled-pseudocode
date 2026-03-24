/*
 * XREFs of ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1801D7270
 * Callers:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801D7A54 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 * Callees:
 *     <none>
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::CGravityBounceAccelerator(
        CGravityBounceAccelerator *this,
        float a2,
        float a3)
{
  float v3; // xmm2_4
  CGravityBounceAccelerator *result; // rax

  LODWORD(v3) = LODWORD(a3) & _xmm;
  *(_QWORD *)this = &CGravityBounceAccelerator::`vftable'{for `IAccelerator'};
  *((_DWORD *)this + 4) = 0;
  *((float *)this + 9) = v3;
  *((float *)this + 7) = a2;
  *((_QWORD *)this + 1) = &CGravityBounceAccelerator::`vftable'{for `CMILRefCountBase'};
  result = this;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((float *)this + 8) = COERCE_FLOAT(LODWORD(a2) & _xmm) / 0.0099999998;
  *((float *)this + 10) = (float)((float)(v3 + 1.0) * -1.0) / 0.0099999998;
  return result;
}
