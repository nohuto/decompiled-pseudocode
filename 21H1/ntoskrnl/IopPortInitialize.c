/*
 * XREFs of IopPortInitialize @ 0x140789064
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140789728 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C447B8 = (__int64)IopPortFindSuitableRange;
  qword_140C447C0 = (__int64)IopPortAddAllocation;
  qword_140C447C8 = (__int64)IopPortBacktrackAllocation;
  qword_140C44738 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44740 = (__int64)IopGenericPackResource;
  qword_140C44748 = (__int64)IopGenericUnpackResource;
  qword_140C44750 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
