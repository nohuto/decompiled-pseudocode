/*
 * XREFs of ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180205BDC
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008A548 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18008BBE0 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlCircleInterpolation::Create(int a1, unsigned int a2, _QWORD *a3)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  __int64 result; // rax

  v6 = KeyframeInterpolation::operator new(0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &XamlCircleInterpolation::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(_OWORD *))v7)(v7);
  *((_DWORD *)v7 + 4) = a1;
  if ( a2 > 2 )
    a2 = 0;
  result = 0LL;
  *((_DWORD *)v7 + 6) = a2;
  *a3 = v7;
  return result;
}
