/*
 * XREFs of ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x1802209A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x180220714 (--1CManipulationManager@@MEAA@XZ.c)
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
