/*
 * XREFs of _RtlRandomEx@4 @ 0x4B2AECC0
 * Callers:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     _RtlpGenerateIFEOKeyFilterId@4 @ 0x4B3424DE (_RtlpGenerateIFEOKeyFilterId@4.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x4B36481D (RtlpHeapTrkGenerateHashRandoms.c)
 * Callees:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 */

ULONG __cdecl RtlRandomEx(PULONG Seed)
{
  unsigned __int64 v1; // kr08_8
  int v2; // edi
  int v3; // eax
  __int32 v4; // edx
  unsigned int i; // ecx
  unsigned int v8; // edx

  RtlRunOnceExecuteOnce(&RtlpRandomExInit, RtlpInitRandomExVector, 0, 0);
  v1 = 2147483629LL * *Seed + 2147483587;
  v2 = (v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF);
  v3 = RtlpRandomExAuxVarY & 0x7F;
  *Seed = (((HIDWORD(v1) >> 30) + v2) & 0x7FFFFFFF)
        + (unsigned int)(((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31) != 0x7FFFFFFF
        ? (((HIDWORD(v1) >> 30) + v2) & 0x7FFFFFFF)
        + (((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31)
        : 0;
  v4 = _InterlockedExchange(
         &RtlpRandomExConstantVector[v3],
         (((HIDWORD(v1) >> 30) + v2) & 0x7FFFFFFF)
       + (unsigned int)(((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31) != 0x7FFFFFFF
       ? (((HIDWORD(v1) >> 30) + v2) & 0x7FFFFFFF)
       + (((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31)
       : 0);
  if ( MEMORY[0x7FFE0290] )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  esi }
      if ( _CF )
        break;
    }
  }
  v8 = v1 ^ v4;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v8);
  return v8;
}
