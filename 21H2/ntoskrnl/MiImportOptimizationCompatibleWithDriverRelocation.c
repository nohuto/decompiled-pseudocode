/*
 * XREFs of MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B058D4
 * Callers:
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B0593C (MiDoesDriverProvideImportsForDriver.c)
 */

_BOOL8 __fastcall MiImportOptimizationCompatibleWithDriverRelocation(__int64 a1)
{
  return (KiSpeculationFeatures & 0x40000000000LL) == 0
      || (KiSpeculationFeatures & 0x20000000000LL) != 0
      && !(unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48))
      || !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140D68718)
      && !(unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry);
}
