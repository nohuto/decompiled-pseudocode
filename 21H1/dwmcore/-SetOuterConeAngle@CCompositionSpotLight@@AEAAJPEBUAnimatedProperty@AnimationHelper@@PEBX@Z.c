/*
 * XREFs of ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800D2130
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800932BC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 94) != *(float *)a3 )
  {
    *((_DWORD *)this + 94) = *a3;
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
