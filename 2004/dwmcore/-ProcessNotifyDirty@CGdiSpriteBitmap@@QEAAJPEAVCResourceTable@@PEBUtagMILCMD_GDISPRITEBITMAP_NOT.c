/*
 * XREFs of ?ProcessNotifyDirty@CGdiSpriteBitmap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x1801C3590
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18003F4BC (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessNotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY *a3)
{
  CGdiSpriteBitmap::NotifyDirty(this, *((_QWORD *)a3 + 1));
  return 0LL;
}
