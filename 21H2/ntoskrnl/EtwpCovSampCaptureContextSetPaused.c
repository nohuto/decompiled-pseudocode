/*
 * XREFs of EtwpCovSampCaptureContextSetPaused @ 0x140942418
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140942FBC (EtwpCovSampContextAddSamples.c)
 *     EtwpCoverageSamplerQuery @ 0x1409465F4 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall EtwpCovSampCaptureContextSetPaused(__int64 a1, __int64 a2, int a3)
{
  LONG result; // eax
  __int64 *i; // rcx

  if ( *(_DWORD *)(a2 + 916) != a3 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
      {
        *(_DWORD *)(a2 + 916) = 1;
        result = KeSetEvent(*(PRKEVENT *)(a1 + 1160), 0, 0);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 916) = 0;
    }
    for ( i = *(__int64 **)(a2 + 576); i != (__int64 *)(a2 + 576); i = (__int64 *)*i )
    {
      result = *(_DWORD *)(a2 + 916);
      *((_DWORD *)i + 7) = result;
    }
  }
  return result;
}
