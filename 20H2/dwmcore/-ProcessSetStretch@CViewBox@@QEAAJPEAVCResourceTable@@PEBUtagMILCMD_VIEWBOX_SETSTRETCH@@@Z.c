/*
 * XREFs of ?ProcessSetStretch@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETSTRETCH@@@Z @ 0x1801F0B24
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044140 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CViewBox::ProcessSetStretch(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETSTRETCH *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 60) != v3 )
  {
    *((_DWORD *)this + 60) = v3;
    CResource::NotifyOnChanged((__int64)this, 2u, (__int64)this);
  }
  return 0LL;
}
