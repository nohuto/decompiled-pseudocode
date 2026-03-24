/*
 * XREFs of ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180206878
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800AA898 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800AC380 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBounceInterpolation::Create(int a1, unsigned int a2, int a3, float a4, _QWORD *a5)
{
  float v5; // xmm6_4
  int v6; // esi
  _OWORD *v9; // rax
  _OWORD *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) || a4 < 1.0 )
    v5 = *(float *)&FLOAT_1_0;
  v9 = KeyframeInterpolation::operator new(0x28uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *(_QWORD *)v9 = &XamlBounceInterpolation::`vftable';
    *((_DWORD *)v9 + 2) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (**(void (__fastcall ***)(_OWORD *))v10)(v10);
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v10 + 4) = a1;
  *((_DWORD *)v10 + 6) = a2;
  *((_DWORD *)v10 + 8) = v6;
  *((float *)v10 + 9) = fmaxf(1.01, v5);
  *a5 = v10;
  return 0LL;
}
