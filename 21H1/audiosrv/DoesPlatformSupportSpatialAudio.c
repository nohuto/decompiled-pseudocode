/*
 * XREFs of DoesPlatformSupportSpatialAudio @ 0x18005CEE8
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C43C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall DoesPlatformSupportSpatialAudio(__int64 a1)
{
  int v1; // eax

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1) )
    v1 = IsSpatialAllowedOnPlatform();
  else
    v1 = 1;
  return v1 != 0;
}
