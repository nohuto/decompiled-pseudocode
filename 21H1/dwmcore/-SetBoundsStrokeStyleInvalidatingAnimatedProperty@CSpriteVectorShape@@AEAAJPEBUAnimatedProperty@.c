/*
 * XREFs of ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F18A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180095F4C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSpriteVectorShape::SetBoundsStrokeStyleInvalidatingAnimatedProperty(
        CSpriteVectorShape *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
