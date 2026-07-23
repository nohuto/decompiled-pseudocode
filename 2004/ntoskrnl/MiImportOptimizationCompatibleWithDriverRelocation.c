/*
 * XREFs of MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A48810
 * Callers:
 *     MiHandleBootImage @ 0x140A47F38 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x14036F460 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A48874 (MiDoesDriverProvideImportsForDriver.c)
 */

_BOOL8 __fastcall MiImportOptimizationCompatibleWithDriverRelocation(__int64 a1)
{
  return (KiSpeculationFeatures & 0x4000000) == 0
      || (KiSpeculationFeatures & 0x2000000) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48))
      || !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140D56720)
      && !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry);
}
