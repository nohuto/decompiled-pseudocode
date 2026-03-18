/*
 * XREFs of ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1800245F4
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x180026F38 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LinearInterpolation::Create(int a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax

  v4 = KeyframeInterpolation::operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *v4 = &LinearInterpolation::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))*v5)(v5);
  *((_DWORD *)v5 + 4) = a1;
  result = 0LL;
  *a2 = v5;
  return result;
}
