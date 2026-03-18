/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1801CC1F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801CB5C0 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801CDB08 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  int v5; // eax

  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2)) )
  {
    v5 = *((_DWORD *)this + 45);
    if ( v5 <= *((_DWORD *)a3 + 6) )
      v5 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 532) |= 4u;
    *((_DWORD *)this + 45) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
