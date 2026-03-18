/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C0001E90
 * Callers:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C (-IsTokenManagerReady@@YAHXZ.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C0001850 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtTokenManagerThread @ 0x1C0001C50 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C0002250 (NtUnBindCompositionSurface.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0061100 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00616C0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0061930 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0063BC0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0063F60 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0064120 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0064D98 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C0065018 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01144D0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v5)(_QWORD); // rbx

  v2 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2340);
    if ( v5 )
    {
      (**v5)(*((_QWORD *)SessionData + 2340));
      v2 = 0;
      *a1 = v5;
    }
  }
  return v2;
}
