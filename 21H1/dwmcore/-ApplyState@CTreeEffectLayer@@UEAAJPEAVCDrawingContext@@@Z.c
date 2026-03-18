/*
 * XREFs of ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE840 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 */

int __fastcall CTreeEffectLayer::ApplyState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  CExternalLayer *v4; // r8
  struct CDrawingContext *v5; // rdx

  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 5956);
  v2 = *((unsigned int *)a2 + 68);
  *((_BYTE *)a2 + 5956) = 0;
  v3 = D2DInterpolationModeFromMilInterpolationMode(v2);
  *((_DWORD *)v4 + 31) = v3;
  *((_DWORD *)v5 + 68) = 1;
  return CExternalLayer::ApplyState(v4, v5);
}
