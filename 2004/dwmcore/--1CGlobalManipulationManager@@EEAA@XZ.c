/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802206C0
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x180220950 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801651D4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180225D68 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  CManipulationManager::~CManipulationManager(this);
}
