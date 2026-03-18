/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C000E0C0
 * Callers:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C (-IsTokenManagerReady@@YAHXZ.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C000DA80 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtTokenManagerThread @ 0x1C000DE80 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C000EA40 (NtUnBindCompositionSurface.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0062050 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0062610 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0062880 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0064C20 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0064FC0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0065180 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0065DF8 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C0066078 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00ED954 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // edi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v6)(_QWORD); // rbx

  v3 = -1073741823;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2340);
    if ( v6 )
    {
      (**v6)(*((_QWORD *)SessionData + 2340));
      v3 = 0;
      *a1 = v6;
    }
  }
  return v3;
}
