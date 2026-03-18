/*
 * XREFs of ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180208638
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800981D8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x180099870 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlElasticInterpolation::Create(int a1, unsigned int a2, int a3, float a4, float **a5)
{
  float v5; // xmm6_4
  int v6; // esi
  float *v9; // rax
  float *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) )
    v5 = 0.0;
  v9 = (float *)KeyframeInterpolation::operator new(0x28uLL);
  v10 = v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = 0LL;
    *((_OWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *(_QWORD *)v9 = &XamlElasticInterpolation::`vftable';
    v9[2] = 0.0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (**(void (__fastcall ***)(float *))v10)(v10);
  v10[9] = v5;
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v10 + 6) = a2;
  *((_DWORD *)v10 + 4) = a1;
  *((_DWORD *)v10 + 8) = v6;
  *a5 = v10;
  return 0LL;
}
