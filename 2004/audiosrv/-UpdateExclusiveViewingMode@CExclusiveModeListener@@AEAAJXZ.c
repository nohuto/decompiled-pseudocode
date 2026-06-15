/*
 * XREFs of ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010EDF0
 * Callers:
 *     ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x18010D9F4 (-OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010DC50 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010DEC0 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x18010E1D8 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 *     ?OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z @ 0x18010E3C0 (-OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18010E4F8 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@HH@Z @ 0x18010D6FC (-LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_G.c)
 *     ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x18010EE88 (-UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::UpdateExclusiveViewingMode(CExclusiveModeListener *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 377) )
    return 0LL;
  v2 = *((_DWORD *)this + 44);
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerUpdateSessionState(
    this,
    (const struct _GUID *)((char *)this + 136),
    *((unsigned __int8 *)this + 376),
    v2);
  v3 = 0LL;
  if ( v2 == 2 )
  {
    if ( *((_BYTE *)this + 376) )
      v3 = 3 - (unsigned int)(*((_DWORD *)this + 93) != 1);
    else
      v3 = 1LL;
  }
  updated = CExclusiveModeListener::UpdateSpatialSessionState(this, v3);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x172,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
