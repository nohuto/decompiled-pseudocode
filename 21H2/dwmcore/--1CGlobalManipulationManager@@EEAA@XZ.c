/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180272368
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x1802725E0 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18017F9F4 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801939A4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  CManipulationManager::~CManipulationManager(this);
}
