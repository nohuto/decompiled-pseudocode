/*
 * XREFs of ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180026FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x180027060 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 96) != *(float *)a3 )
  {
    *((_DWORD *)this + 96) = *a3;
    CResource::InvalidateAnimationSources(this, 0xDu);
    CResource::InvalidateAnimationSources(this, 0xEu);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
