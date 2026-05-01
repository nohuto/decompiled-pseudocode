/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18015F874
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180159D50 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180159F70 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0004@@@Z @ 0x18015C890 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0004@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18015D150 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023590 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023D6C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180023E48 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180027980 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801571F4 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x18015F558 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     WPP_SF_Sd @ 0x180160318 (WPP_SF_Sd.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  HWND v1; // rsi
  CImmersiveApp::CImmersiveWindowCollection *v2; // rdi
  int v4; // r8d
  int v5; // edx
  int v6; // r8d

  v1 = (HWND)*((_QWORD *)this + 54);
  v2 = (CImmersiveApp *)((char *)this + 296);
  if ( v1
    && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp *)((char *)this + 296)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14,
        (unsigned int)&WPP_05fc2d62e6f6302a16b19b31c4fc753f_Traceguids,
        *((_QWORD *)this + 74),
        *((_DWORD *)this + 150));
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v1, v4, *((_DWORD *)this + 110));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v2);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v2)
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v2, v5, v6) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15,
        (unsigned int)&WPP_05fc2d62e6f6302a16b19b31c4fc753f_Traceguids,
        *((_QWORD *)this + 74),
        *((_DWORD *)this + 150));
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v2);
  }
}
