/*
 * XREFs of ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0
 * Callers:
 *     ?GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x180002310 (-GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180002B80 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1800045E0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x1800046E0 (-OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180005040 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180005730 (-SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z.c)
 *     ?SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180005810 (-SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 *     ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x1800058F0 (-SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 *     ?SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x1800059D0 (-SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 *     ?GetIsActivated@BamoActivatableEntityPrincipal@@UEAA_NXZ @ 0x180005AB0 (-GetIsActivated@BamoActivatableEntityPrincipal@@UEAA_NXZ.c)
 *     ?SetIsActivated@BamoActivatableEntityPrincipal@@UEAAX_N@Z @ 0x180005B70 (-SetIsActivated@BamoActivatableEntityPrincipal@@UEAAX_N@Z.c)
 *     ?Thunk_Materialize_BamoActivationControllerProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005C50 (-Thunk_Materialize_BamoActivationControllerProxy_10@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamo.c)
 *     ?GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x180005D90 (-GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ.c)
 *     ?GetId@BamoActivationControllerProxy@@UEAA_KXZ @ 0x180005E50 (-GetId@BamoActivationControllerProxy@@UEAA_KXZ.c)
 *     ?Thunk_Materialize_BamoInputSiteElementProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005F20 (-Thunk_Materialize_BamoInputSiteElementProxy_10@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeer.c)
 *     ?Thunk_RegisterInputSiteElement_10@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180006020 (-Thunk_RegisterInputSiteElement_10@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPri.c)
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180006170 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 *     ?GetAutoForwardId@BamoActivationControllerProxy@@UEAA_KXZ @ 0x180006270 (-GetAutoForwardId@BamoActivationControllerProxy@@UEAA_KXZ.c)
 *     ?GetParentId@BamoActivatableEntityPrincipal@@UEAA_KXZ @ 0x180006340 (-GetParentId@BamoActivatableEntityPrincipal@@UEAA_KXZ.c)
 *     ?GetWindowId@BamoActivatableEntityPrincipal@@UEAA_KXZ @ 0x180006400 (-GetWindowId@BamoActivatableEntityPrincipal@@UEAA_KXZ.c)
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180007210 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 *     ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000B7B0 (-BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 42) != GetCurrentThreadId() )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x679,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v2);
    JUMPOUT(0x180051AA6LL);
  }
  *((_DWORD *)this + 42) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
}
