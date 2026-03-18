/*
 * XREFs of ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1800CA7F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800CA814 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgress(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS *a3)
{
  CKeyframeAnimation::SetProgress(this, *((float *)a3 + 2));
  return 0LL;
}
