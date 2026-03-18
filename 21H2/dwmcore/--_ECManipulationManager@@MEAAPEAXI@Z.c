/*
 * XREFs of ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180272630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x1802723BC (--1CManipulationManager@@MEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::`vector deleting destructor'(
        CManipulationManager *this,
        char a2)
{
  CManipulationManager::~CManipulationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
