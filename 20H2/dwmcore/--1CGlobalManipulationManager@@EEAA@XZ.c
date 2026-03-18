/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x18021E860
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x18021EAF0 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801633D4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18022490C (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  CManipulationManager::~CManipulationManager(this);
}
