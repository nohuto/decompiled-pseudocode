/*
 * XREFs of ?ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x180174514
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800D2FBC (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateSDRToHDRMultiplier(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER *a3)
{
  CLegacyRenderTarget::SetSDRBoost(this, *((float *)a3 + 2));
  return 0LL;
}
