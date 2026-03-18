/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CA380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180095ECC (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((float *)this + 56) != *(float *)a3 )
  {
    *((_DWORD *)this + 56) = *a3;
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xFu, *((float *)this + 56));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x166u, 0LL);
  }
  return v3;
}
