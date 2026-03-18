/*
 * XREFs of PpmParkReportUnparkedCore @ 0x140577ED0
 * Callers:
 *     PpmPerfAction @ 0x14026E680 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x140573A88 (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1, 0);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 33212) = 0;
  _InterlockedAnd64(
    &qword_140C112F8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
  if ( *(_BYTE *)(a1 + 32819) )
  {
    _InterlockedAnd64(
      &qword_140C129B8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
      ~(1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F)));
    *(_BYTE *)(a1 + 32819) = 0;
  }
  PpmEventCoreParkingStateChange(a1);
  result = *(_BYTE **)(a1 + 0x8000);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 32829) = 1;
  }
  return result;
}
