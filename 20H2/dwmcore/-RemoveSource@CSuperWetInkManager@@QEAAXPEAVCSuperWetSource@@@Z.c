/*
 * XREFs of ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180194F84
 * Callers:
 *     ??1CGenericInk@@UEAA@XZ @ 0x1801C197C (--1CGenericInk@@UEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EE82C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x180194EDC (IsSuperWetInkCompatibleVailContainer.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180194FC4 (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180195040 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSource(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer() )
    CSuperWetInkManager::RemoveSourceHost(this, a2);
  else
    CSuperWetInkManager::RemoveSourceLocal(this, a2);
}
