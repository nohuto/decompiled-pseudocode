/*
 * XREFs of IopIrqInitialize @ 0x1407A8FB0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A9480 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C44298 = (__int64)IopIrqUnpackRequirement;
  qword_140C442A0 = (__int64)IopIrqPackResource;
  qword_140C442A8 = (__int64)IopIrqUnpackResource;
  qword_140C442B0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
