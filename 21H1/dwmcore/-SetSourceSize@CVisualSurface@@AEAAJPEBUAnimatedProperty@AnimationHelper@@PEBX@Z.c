/*
 * XREFs of ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F6890
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180095F4C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CVisualSurface::SetSourceSize(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  unsigned int v3; // ebx
  char v5; // si
  char v6; // bp

  v3 = 0;
  v5 = 1;
  if ( *((float *)this + 18) <= 0.0 || (v6 = 1, *((float *)this + 19) <= 0.0) )
    v6 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this);
    if ( *((float *)this + 18) <= 0.0 || *((float *)this + 19) <= 0.0 )
      v5 = 0;
    if ( v6 == v5 )
      v3 = 6;
    CResource::NotifyOnChanged((__int64)this, v3, 0LL);
  }
  return 0LL;
}
