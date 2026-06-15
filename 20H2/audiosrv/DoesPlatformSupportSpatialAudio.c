/*
 * XREFs of DoesPlatformSupportSpatialAudio @ 0x18005C848
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005BD9C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
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
