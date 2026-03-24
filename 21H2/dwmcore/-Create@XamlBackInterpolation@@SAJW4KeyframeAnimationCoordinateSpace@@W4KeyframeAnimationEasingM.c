/*
 * XREFs of ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1802067A4
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800AA898 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800AC380 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBackInterpolation::Create(int a1, unsigned int a2, float a3, float **a4)
{
  float v4; // xmm6_4
  float *v8; // rax
  float *v9; // rbx
  __int64 result; // rax

  v4 = a3;
  if ( !_finite(a3) || a3 < 0.0 )
    v4 = 0.0;
  v8 = (float *)KeyframeInterpolation::operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *((_OWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *(_QWORD *)v8 = &XamlBackInterpolation::`vftable';
    v8[2] = 0.0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(float *))v9)(v9);
  v9[8] = v4;
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v9 + 4) = a1;
  result = 0LL;
  *((_DWORD *)v9 + 6) = a2;
  *a4 = v9;
  return result;
}
