/*
 * XREFs of ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18001F78C
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x18001F1B0 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x18004DAA0 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180062698 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180086EB8 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18017C700 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017D4D0 (-GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x18017D530 (-GetPIDForRotation@CImmersiveApp@@UEAAKXZ.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x18017E130 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180181410 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18018329C (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180183648 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  HWND result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 22) )
    return (HWND)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 32LL))(**((_QWORD **)this + 21));
  return result;
}
