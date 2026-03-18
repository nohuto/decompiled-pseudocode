/*
 * XREFs of IopPortInitialize @ 0x14079767C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140797D40 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C44758 = (__int64)IopPortFindSuitableRange;
  qword_140C44760 = (__int64)IopPortAddAllocation;
  qword_140C44768 = (__int64)IopPortBacktrackAllocation;
  qword_140C446D8 = (__int64)&IopGenericUnpackRequirement;
  qword_140C446E0 = (__int64)IopGenericPackResource;
  qword_140C446E8 = (__int64)IopGenericUnpackResource;
  qword_140C446F0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
