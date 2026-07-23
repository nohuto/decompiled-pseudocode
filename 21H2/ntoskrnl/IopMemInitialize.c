/*
 * XREFs of IopMemInitialize @ 0x1407A1E34
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x1407645D0 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1407A2060 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1407A226C (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C44718 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44720 = (__int64)IopGenericPackResource;
  qword_140C44728 = (__int64)IopGenericUnpackResource;
  qword_140C44730 = (__int64)IopGenericScoreRequirement;
  qword_140C44798 = (__int64)IopMemFindSuitableRange;
  qword_140C44768 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C446C8, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C446C8);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C446C8);
    }
  }
  return result;
}
