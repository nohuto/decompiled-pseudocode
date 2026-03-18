/*
 * XREFs of ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x1801C9B00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C73A4 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmRestartCompleted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED *a3)
{
  int v3; // eax
  float v4; // xmm3_4
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  *((_BYTE *)this + 532) &= ~0x20u;
  if ( !*((_DWORD *)this + 42) )
  {
    v3 = *((_DWORD *)this + 20);
    v4 = *((float *)this + 32);
    v6 = *((_QWORD *)this + 9);
    v7 = v3;
    CInteractionTracker::AddPendingStateChange((__int64)this, 0, &v6, v4);
  }
  return 0LL;
}
