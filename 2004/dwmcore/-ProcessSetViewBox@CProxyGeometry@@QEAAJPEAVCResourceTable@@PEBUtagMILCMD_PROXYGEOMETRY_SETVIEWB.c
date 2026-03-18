/*
 * XREFs of ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801E776C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A067C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A3DC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProxyGeometry::ProcessSetViewBox(
        CProxyGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROXYGEOMETRY_SETVIEWBOX *a3)
{
  unsigned int v4; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v9; // rcx

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
         ResourceWithoutType,
         193LL) )
  {
    *((_DWORD *)this + 8) |= 1u;
    *((_QWORD *)this + 18) = v6;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    Count = CPtrArrayBase::GetCount((CProxyGeometry *)((char *)this + 24));
    CPtrArrayBase::InsertAt(v9, *((_QWORD *)this + 18), Count);
    *((_BYTE *)this + 128) = *((_QWORD *)this + 18) != 0LL;
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x58u, 0LL);
  }
  return v4;
}
