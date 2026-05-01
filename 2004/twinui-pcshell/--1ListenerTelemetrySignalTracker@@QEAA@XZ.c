/*
 * XREFs of ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800879EC
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18003E6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180041190 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$0 @ 0x180101B09 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--ReportTitleChange_-.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$1 @ 0x180102320 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_180102320.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$6 @ 0x1801025D8 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationView_ea_1801025D8.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x18023A868 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData_::_1_::dtor$1 @ 0x18023A987 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateSnapSign_ea_18023A987.c)
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18023A9D0 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged_::_1_::dtor$4 @ 0x18023AB48 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--WindowSnapStateCh_ea_18023AB48.c)
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x18023B8D0 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged_::_1_::dtor$0 @ 0x18023BA2A (_Windows--Internal--Shell--TaskFlow--DataEngine--UserPresenceListener--OnIdleStateChanged_--_1_-.c)
 * Callees:
 *     <none>
 */

void __fastcall ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker(ListenerTelemetrySignalTracker *this)
{
  if ( !*(_BYTE *)this )
  {
    if ( *((_BYTE *)this + 1) )
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    else
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_unknownFailureCounter);
  }
}
