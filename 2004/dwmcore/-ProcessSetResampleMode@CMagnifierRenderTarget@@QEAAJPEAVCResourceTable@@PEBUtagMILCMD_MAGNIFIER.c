/*
 * XREFs of ?ProcessSetResampleMode@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE@@@Z @ 0x18018CE4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetResampleMode(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 38) != v3 )
  {
    *((_DWORD *)this + 38) = v3;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
