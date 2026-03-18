/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x18025ED10
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x18025FB70 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18025FF00 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18025F0E8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  double v6; // xmm0_8

  v1 = *((float *)this + 16);
  v3 = *((float *)this + 5);
  if ( v3 > *((float *)this + 9) || v1 > v3 )
  {
    if ( (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v4 = *((float *)this + 6);
      v5 = 0.0;
      if ( v4 != 0.0 )
      {
        v6 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
        v4 = *((float *)this + 6);
        v5 = *(float *)&v6;
        v1 = *((float *)this + 16);
      }
      if ( v1 <= v3 )
        v1 = *((float *)this + 9);
      CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v5, v1, v4);
    }
    else
    {
      return fminf(fmaxf(v3, v1), *((float *)this + 9));
    }
  }
  return v3;
}
