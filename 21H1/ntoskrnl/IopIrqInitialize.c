/*
 * XREFs of IopIrqInitialize @ 0x140789258
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140789728 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C44478 = (__int64)IopIrqUnpackRequirement;
  qword_140C44480 = (__int64)IopIrqPackResource;
  qword_140C44488 = (__int64)IopIrqUnpackResource;
  qword_140C44490 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
