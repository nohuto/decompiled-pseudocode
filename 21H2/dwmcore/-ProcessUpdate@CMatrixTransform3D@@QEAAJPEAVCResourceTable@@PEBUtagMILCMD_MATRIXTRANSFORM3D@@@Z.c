/*
 * XREFs of ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM3D@@@Z @ 0x1800E0230
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800375A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::ProcessUpdate(
        CMatrixTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MATRIXTRANSFORM3D *a3)
{
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 40);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a3 + 56);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
