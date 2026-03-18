/*
 * XREFs of IopMemInitialize @ 0x140838FBC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1408391E8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14083A5A0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C45BB8 = (__int64)&IopGenericUnpackRequirement;
  qword_140C45BC0 = (__int64)IopGenericPackResource;
  qword_140C45BC8 = (__int64)IopGenericUnpackResource;
  qword_140C45BD0 = (__int64)IopGenericScoreRequirement;
  qword_140C45C38 = (__int64)IopMemFindSuitableRange;
  qword_140C45C08 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C45B68, 0, 4095, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C45B68);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C45B68);
    }
  }
  return result;
}
