/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x14036F460
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x14074722C (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x1408CD4B4 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A48810 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140A5489C (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A8F990 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140747448 (LdrImageDirectoryEntryToLoadConfig.c)
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
