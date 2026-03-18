/*
 * XREFs of ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x18023A004
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801A5FAC (-UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CProxyGeometry::ProcessSetViewBox(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROXYGEOMETRY_SETVIEWBOX *a3)
{
  unsigned int v4; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType != this[19] )
  {
    if ( !ResourceWithoutType
      || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
           ResourceWithoutType,
           193LL) )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x6Au);
      }
      else
      {
        CResource::UnRegisterNotifierNoNULL((CResource *)this, this[19]);
        *((_DWORD *)this + 8) |= 1u;
        this[19] = v6;
        CResource::NotifyOnChanged((__int64)this, 0, 0LL);
        *((_BYTE *)this + 136) = this[19] != 0LL;
      }
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0x67u);
    }
  }
  return v4;
}
