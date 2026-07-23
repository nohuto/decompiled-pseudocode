/*
 * XREFs of MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A513EC
 * Callers:
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x140371978 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A51464 (MiDoesDriverProvideImportsForDriver.c)
 */

_BOOL8 __fastcall MiImportOptimizationCompatibleWithDriverRelocation(__int64 a1)
{
  return (KiSpeculationFeatures & 0x40000000000LL) == 0
      || (KiSpeculationFeatures & 0x20000000000LL) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48))
      || !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140D58728)
      && !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry);
}
