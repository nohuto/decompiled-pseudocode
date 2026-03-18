/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180026F60
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x180027060 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 95) != *(float *)a3 )
  {
    *((_DWORD *)this + 95) = *a3;
    CResource::InvalidateAnimationSources(this, 8u);
    CResource::InvalidateAnimationSources(this, 9u);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
