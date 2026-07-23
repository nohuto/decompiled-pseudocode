/*
 * XREFs of RtlRandomEx @ 0x180043CE0
 * Callers:
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E38AC (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE54C (RtlpHeapTrkGenerateHashRandoms.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043870 (RtlRunOnceExecuteOnce.c)
 */

ULONG __cdecl RtlRandomEx(PULONG Seed)
{
  __int64 v2; // r8
  unsigned __int32 v3; // r9d
  __int32 v4; // r9d
  int v5; // ecx
  unsigned int v8; // r9d

  RtlRunOnceExecuteOnce(&RtlpRandomExInit, RtlpInitRandomExVector, 0LL, 0LL);
  v2 = RtlpRandomExAuxVarY & 0x7F;
  v3 = (2147483629 * (unsigned __int64)*Seed + 2147483587) % 0x7FFFFFFF;
  *Seed = v3;
  v4 = _InterlockedExchange(&RtlpRandomExConstantVector[v2], v3);
  if ( MEMORY[0x7FFE0290] )
  {
    v5 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v5 >= 0xA )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    _EDX = 0;
  }
  v8 = _EDX ^ v4;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v8);
  return v8;
}
