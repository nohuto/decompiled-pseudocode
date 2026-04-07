/*
 * XREFs of ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8290
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000F780 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8324 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8574 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A88F8 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate3DVisual(CAnimatedTransitionVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int updated; // eax
  int v5; // eax
  int v6; // eax

  v1 = *((_DWORD *)this + 22);
  v2 = 0;
  if ( (v1 & 0x1000) != 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateAnimated3DResources(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x5DCu);
      return v2;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x2000) != 0 )
  {
    v5 = CAnimatedTransitionVisual::_Ensure3DRenderData(this);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = CAnimatedTransitionVisual::_Update3DResources(this);
      v2 = v6;
      if ( v6 >= 0 )
        *((_DWORD *)this + 22) &= ~0x2000u;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5E5u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5E4u);
    }
  }
  return v2;
}
