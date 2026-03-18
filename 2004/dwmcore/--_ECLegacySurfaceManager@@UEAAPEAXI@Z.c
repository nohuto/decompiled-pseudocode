/*
 * XREFs of ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180165E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180165C58 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::`vector deleting destructor'(
        CLegacySurfaceManager *this,
        char a2)
{
  CLegacySurfaceManager::~CLegacySurfaceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
