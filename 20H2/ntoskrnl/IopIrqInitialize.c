/*
 * XREFs of IopIrqInitialize @ 0x140797870
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140797D40 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C442B8 = (__int64)IopIrqUnpackRequirement;
  qword_140C442C0 = (__int64)IopIrqPackResource;
  qword_140C442C8 = (__int64)IopIrqUnpackResource;
  qword_140C442D0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
