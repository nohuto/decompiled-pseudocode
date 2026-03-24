/*
 * XREFs of IopPortInitialize @ 0x1407A1B9C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407A2260 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C447D8 = (__int64)IopPortFindSuitableRange;
  qword_140C447E0 = (__int64)IopPortAddAllocation;
  qword_140C447E8 = (__int64)IopPortBacktrackAllocation;
  qword_140C44758 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44760 = (__int64)IopGenericPackResource;
  qword_140C44768 = (__int64)IopGenericUnpackResource;
  qword_140C44770 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
