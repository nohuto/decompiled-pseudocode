/*
 * XREFs of ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800DD590
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800590A4 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CQPCStopWatch::Start(LARGE_INTEGER *this)
{
  BOOL result; // eax

  result = QueryPerformanceCounter(this);
  if ( result )
    this[1] = *this;
  return result;
}
