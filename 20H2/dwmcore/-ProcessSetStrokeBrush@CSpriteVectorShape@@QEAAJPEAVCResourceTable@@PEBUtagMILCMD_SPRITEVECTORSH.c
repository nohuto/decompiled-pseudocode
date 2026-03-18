/*
 * XREFs of ?ProcessSetStrokeBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH@@@Z @ 0x1801ECDD8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044140 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeBrush(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH *a3)
{
  unsigned int v4; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdx
  struct CResource *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = (struct CResource *)*((_QWORD *)this + 13);
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType != v6 )
  {
    if ( !ResourceWithoutType )
    {
LABEL_9:
      CResource::UnRegisterNotifierInternal(this, v6);
      *((_QWORD *)this + 13) = v7;
      CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
      return v4;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            14LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x7Cu, 0LL);
      return v4;
    }
    v9 = CResource::RegisterNotifier(this, v7);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v6 = (struct CResource *)*((_QWORD *)this + 13);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Fu, 0LL);
  }
  return v4;
}
