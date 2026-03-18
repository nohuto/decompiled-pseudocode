/*
 * XREFs of IopMemInitialize @ 0x140797714
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x14075FFF0 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140797940 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140797B4C (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x140797D40 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C44578 = (__int64)&IopGenericUnpackRequirement;
  qword_140C44580 = (__int64)IopGenericPackResource;
  qword_140C44588 = (__int64)IopGenericUnpackResource;
  qword_140C44590 = (__int64)IopGenericScoreRequirement;
  qword_140C445F8 = (__int64)IopMemFindSuitableRange;
  qword_140C445C8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C44528, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C44528);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C44528);
    }
  }
  return result;
}
