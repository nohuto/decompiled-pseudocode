/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x180114772
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233140 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180114836 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180201810 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180201840 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
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

  CProjectedShadowCaster::GetColor(this[10], retstr);
  v6 = (float)(CProjectedShadowCaster::GetEffectiveAlpha(
                 this[10],
                 *(const struct CVisualTree **)(v5 + 7928),
                 (bool *)v5)
             * *((float *)this + 25))
     * retstr->a;
  retstr->a = v6;
  v7 = *((_DWORD *)this + 82);
  if ( v7 == 1 )
  {
    v8 = this[10];
    v9 = (float *)*((_QWORD *)v8 + 16);
    if ( !v9 )
      v9 = *(float **)(*((_QWORD *)v8 + 2) + 328LL);
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v9 + 56LL))(v9, 20LL) )
    {
      v10 = v9[25] * retstr->a;
LABEL_8:
      retstr->a = v10;
    }
  }
  else if ( v7 == 5 )
  {
    v10 = (float)(CProjectedShadow::GetBlurForBoundary(this, 3LL) / *((float *)this + 24)) * v6;
    goto LABEL_8;
  }
  return retstr;
}
