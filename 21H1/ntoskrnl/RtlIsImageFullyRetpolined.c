/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x14036E830
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x1407456AC (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x1408CC164 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A42FB0 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A903A0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
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
