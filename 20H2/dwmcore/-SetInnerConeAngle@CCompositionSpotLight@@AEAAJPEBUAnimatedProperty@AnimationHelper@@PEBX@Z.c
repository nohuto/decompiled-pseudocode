/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CCDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800CCEF0 (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 93) != *(float *)a3 )
  {
    *((_DWORD *)this + 93) = *a3;
    CResource::InvalidateAnimationSources(this, 8);
    CResource::InvalidateAnimationSources(this, 9);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
