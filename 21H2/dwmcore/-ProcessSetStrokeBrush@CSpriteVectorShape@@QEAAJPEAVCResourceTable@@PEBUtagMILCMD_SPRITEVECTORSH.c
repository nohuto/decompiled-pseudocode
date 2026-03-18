/*
 * XREFs of ?ProcessSetStrokeBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH@@@Z @ 0x18023F794
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
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
  v6 = (struct CResource *)*((_QWORD *)this + 14);
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType != v6 )
  {
    if ( !ResourceWithoutType )
    {
LABEL_9:
      CResource::UnRegisterNotifierInternal(this, v6);
      *((_QWORD *)this + 14) = v7;
      CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
      return v4;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            15LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x7Cu);
      return v4;
    }
    v9 = CResource::RegisterNotifier(this, v7);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v6 = (struct CResource *)*((_QWORD *)this + 14);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x7Fu);
  }
  return v4;
}
