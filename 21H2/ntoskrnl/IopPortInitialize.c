/*
 * XREFs of IopPortInitialize @ 0x1407A1D9C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C448F8 = (__int64)IopPortFindSuitableRange;
  qword_140C44900 = (__int64)IopPortAddAllocation;
  qword_140C44908 = (__int64)IopPortBacktrackAllocation;
  qword_140C44878 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44880 = (__int64)IopGenericPackResource;
  qword_140C44888 = (__int64)IopGenericUnpackResource;
  qword_140C44890 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
