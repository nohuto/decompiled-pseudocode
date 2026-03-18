/*
 * XREFs of PpmParkReportSoftParkChange @ 0x140577E1C
 * Callers:
 *     PpmPerfAction @ 0x14026E680 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140573968 (PpmEventCoreParkingSoftParkedStateChange.c)
 */

char __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v2 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = ((unsigned __int64)qword_140C12908[v2 >> 6] >> (v2 & 0x3F)) & 1;
  KeTransitionProcessorParkState(a1, v3 + 1);
  v4 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6;
  v5 = 1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F);
  if ( (_BYTE)v3 )
    _InterlockedOr64(&qword_140C129B8[v4], v5);
  else
    _InterlockedAnd64(&qword_140C129B8[v4], ~v5);
  *(_BYTE *)(a1 + 32819) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v3);
}
