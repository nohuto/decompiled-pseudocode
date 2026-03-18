/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BD1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800BD2DC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x1801B5CEC (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rcx
  float v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  D3DXQuaternionNormalize((struct D2DQuaternion *)v8, a3);
  if ( *((float *)this + 52) != v8[0]
    || *((float *)this + 53) != v8[1]
    || *((float *)this + 54) != v8[2]
    || *((float *)this + 55) != v8[3] )
  {
    *((_OWORD *)this + 13) = *(_OWORD *)v8;
    CResource::InvalidateAnimationSources(this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           0x18u,
           (CComponentTransform3D *)((char *)this + 208));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19Bu, 0LL);
  }
  return v4;
}
