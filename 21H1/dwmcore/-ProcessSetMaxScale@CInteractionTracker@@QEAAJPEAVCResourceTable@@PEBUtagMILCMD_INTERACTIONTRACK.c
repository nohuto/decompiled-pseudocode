/*
 * XREFs of ?ProcessSetMaxScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXSCALE@@@Z @ 0x1801CE858
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801CFCF4 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetMaxScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMAXSCALE *a3)
{
  CInteractionTracker::SetMaxScale(this, *((float *)a3 + 2));
  return 0LL;
}
