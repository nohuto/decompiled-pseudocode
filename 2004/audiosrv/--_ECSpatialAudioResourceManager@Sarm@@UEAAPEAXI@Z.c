/*
 * XREFs of ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x1801068A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180106550 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 */

Sarm::CSpatialAudioResourceManager *__fastcall Sarm::CSpatialAudioResourceManager::`vector deleting destructor'(
        Sarm::CSpatialAudioResourceManager *this,
        char a2)
{
  Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2F0);
  return this;
}
