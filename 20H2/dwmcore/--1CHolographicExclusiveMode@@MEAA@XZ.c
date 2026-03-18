/*
 * XREFs of ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x180253C70
 * Callers:
 *     ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x180253CC0 (--_ECHolographicExclusiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180251480 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::~CHolographicExclusiveMode(CHolographicExclusiveMode *this)
{
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  CHolographicManager::RemoveExclusiveModeProxy(*((CHolographicManager **)this + 8), this);
  *((_QWORD *)this + 8) = 0LL;
  CResource::~CResource(this);
}
