/*
 * XREFs of ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18015B5E4
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18015D150 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023610 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     WPP_SF_Sd @ 0x180160318 (WPP_SF_Sd.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnActivationRequested(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  if ( (*((_BYTE *)this + 212) & 0x20) != 0 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        27,
        (unsigned int)&WPP_05fc2d62e6f6302a16b19b31c4fc753f_Traceguids,
        *(_QWORD *)(*((_QWORD *)this + 20) + 592LL),
        *(_DWORD *)(*((_QWORD *)this + 20) + 600LL));
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 32);
  }
}
