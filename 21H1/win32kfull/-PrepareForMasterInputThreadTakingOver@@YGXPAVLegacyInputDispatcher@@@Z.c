/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YGXPAVLegacyInputDispatcher@@@Z @ 0xD5666
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     _ResetPointerDevices@0 @ 0xB08AE (_ResetPointerDevices@0.c)
 */

void __thiscall PrepareForMasterInputThreadTakingOver(LegacyInputDispatcher *this, struct LegacyInputDispatcher *a2)
{
  EnterCrit(0, 1);
  SetThreadPriority();
  if ( _gptiManipulationThread )
    SetThreadBasePriority(*_gptiManipulationThread, 16);
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2);
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0);
  LegacyInputDispatcher::PurgeInputDispatcherObjects(this);
  CBaseInput::RegisterDispatcherObject(_gpKeyboardSensor, this);
  gbDIT = 1;
  UserSessionSwitchLeaveCrit();
}
