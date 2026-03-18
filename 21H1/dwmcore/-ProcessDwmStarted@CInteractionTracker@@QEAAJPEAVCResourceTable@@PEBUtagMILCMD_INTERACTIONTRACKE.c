/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x1801CE248
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 12);
  if ( *((_BYTE *)a3 + 8) )
  {
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 76) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    *((_BYTE *)this + 532) |= 0x22u;
  }
  return 0LL;
}
