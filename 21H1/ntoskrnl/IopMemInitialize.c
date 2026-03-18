/*
 * XREFs of IopMemInitialize @ 0x1407890FC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlAddRange @ 0x14074CD80 (RtlAddRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140789328 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140789534 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x140789728 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopMemInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C44898 = (__int64)&IopGenericUnpackRequirement;
  qword_140C448A0 = (__int64)IopGenericPackResource;
  qword_140C448A8 = (__int64)IopGenericUnpackResource;
  qword_140C448B0 = (__int64)IopGenericScoreRequirement;
  qword_140C44918 = (__int64)IopMemFindSuitableRange;
  qword_140C448E8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((unsigned int)&IopRootMemArbiter, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C44848, 0LL, 0xFFFuLL, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange(&IopRootMemArbiter, qword_140C44848);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&IopRootMemArbiter, qword_140C44848);
    }
  }
  return result;
}
