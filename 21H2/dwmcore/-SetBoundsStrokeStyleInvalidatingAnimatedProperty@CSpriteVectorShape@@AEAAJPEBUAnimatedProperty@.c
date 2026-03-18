/*
 * XREFs of ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18023FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18004524C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::SetBoundsStrokeStyleInvalidatingAnimatedProperty(
        CSpriteVectorShape *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
