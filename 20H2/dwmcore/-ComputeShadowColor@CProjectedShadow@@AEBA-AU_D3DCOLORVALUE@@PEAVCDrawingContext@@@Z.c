/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x18000B52C
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AC58 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18000BAD0 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18000D838 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x18000DEC0 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::ComputeShadowColor(
        CProjectedShadowCaster **this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct CDrawingContext *a3)
{
  __int64 v5; // r8
  float v6; // xmm1_4
  int v7; // eax
  CProjectedShadowCaster *v8; // rax
  float *v9; // rbx
  float v10; // xmm0_4
  double BlurForBoundary; // xmm0_8

  CProjectedShadowCaster::GetColor(this[9], retstr);
  v6 = (float)(CProjectedShadowCaster::GetEffectiveAlpha(this[9], *(const struct CVisualTree **)(v5 + 5928), (bool *)v5)
             * *((float *)this + 23))
     * retstr->a;
  retstr->a = v6;
  v7 = *((_DWORD *)this + 80);
  if ( v7 != 1 )
  {
    if ( v7 != 5 )
      return retstr;
    BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 3LL);
    v10 = (float)(*(float *)&BlurForBoundary / *((float *)this + 22)) * v6;
    goto LABEL_6;
  }
  v8 = this[9];
  v9 = (float *)*((_QWORD *)v8 + 15);
  if ( !v9 )
    v9 = *(float **)(*((_QWORD *)v8 + 2) + 176LL);
  if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v9 + 56LL))(v9, 20LL) )
  {
    v10 = v9[23] * retstr->a;
LABEL_6:
    retstr->a = v10;
  }
  return retstr;
}
