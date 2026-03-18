/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x14052EA40
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405300A8 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPasidGranularTranslationType(__int64 a1, char a2, char a3)
{
  if ( a2 )
    return 1LL;
  else
    return a3 != 0 ? 2 : 4;
}
