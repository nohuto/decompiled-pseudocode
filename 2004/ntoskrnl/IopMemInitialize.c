/*
 * XREFs of IopMemInitialize @ 0x1407A8E54
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x140751410 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1407A9080 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1407A928C (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x1407A9480 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C44558 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44560 = (__int64)IopGenericPackResource;
  qword_140C44568 = (__int64)IopGenericUnpackResource;
  qword_140C44570 = (__int64)IopGenericScoreRequirement;
  qword_140C445D8 = (__int64)IopMemFindSuitableRange;
  qword_140C445A8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C44508, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C44508);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C44508);
    }
  }
  return result;
}
