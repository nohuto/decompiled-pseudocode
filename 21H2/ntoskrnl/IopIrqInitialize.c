/*
 * XREFs of IopIrqInitialize @ 0x1407A1F90
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C44458 = (__int64)IopIrqUnpackRequirement;
  qword_140C44460 = (__int64)IopIrqPackResource;
  qword_140C44468 = (__int64)IopIrqUnpackResource;
  qword_140C44470 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
