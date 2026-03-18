/*
 * XREFs of ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E42D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18004524C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x1800E438C (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::SetSourceSize(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  unsigned int v3; // edi
  char v6; // si
  char v7; // bp

  v3 = 0;
  v6 = 1;
  if ( *((float *)this + 22) <= 0.0 || (v7 = 1, *((float *)this + 23) <= 0.0) )
    v7 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    if ( !*((_BYTE *)this + 200) )
      CVisualSurface::ClearAllRenderTargets(this);
    if ( *((float *)this + 22) <= 0.0 || *((float *)this + 23) <= 0.0 )
      v6 = 0;
    if ( v7 == v6 )
      v3 = 6;
    CResource::NotifyOnChanged((__int64)this, v3, 0LL);
  }
  return 0LL;
}
