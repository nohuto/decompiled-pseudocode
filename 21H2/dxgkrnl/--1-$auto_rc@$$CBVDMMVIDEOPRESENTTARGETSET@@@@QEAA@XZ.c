/*
 * XREFs of ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C004D070
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01AE150 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01E8CE0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmSetVidPnTargetPowerComponentIndex@@YAJPEAVVIDPN_MGR@@II@Z @ 0x1C0215CE4 (-DmmSetVidPnTargetPowerComponentIndex@@YAJPEAVVIDPN_MGR@@II@Z.c)
 *     ?DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z @ 0x1C039A3E8 (-DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v2 + 64));
  *a1 = 0LL;
  return result;
}
