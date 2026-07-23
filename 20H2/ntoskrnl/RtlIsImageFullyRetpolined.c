/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1403713B0
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140755E0C (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x1408D32F4 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4E0B0 (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A4EAA0 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A95690 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(void *a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
