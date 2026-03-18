/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BD120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180096088 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800BD238 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DVector3 *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h]

  v4 = 0;
  D3DXVec3Normalize((struct D2DVector3 *)&v10, a3);
  v5 = v11;
  v6 = *((_QWORD *)this + 23) - v10;
  if ( !v6 )
    v6 = *((unsigned int *)this + 48) - (unsigned __int64)v11;
  if ( v6 )
  {
    *((_QWORD *)this + 23) = v10;
    *((_DWORD *)this + 48) = v5;
    CResource::InvalidateAnimationSources(this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(
           this,
           0x19u,
           (CComponentTransform3D *)((char *)this + 184));
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x181u, 0LL);
  }
  return v4;
}
