/*
 * XREFs of PpmParkReportParkedCore @ 0x140577D24
 * Callers:
 *     PpmPerfAction @ 0x14026E680 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140573B7C (PpmEventCoreParkingStateChangeEx.c)
 */

char __fastcall PpmParkReportParkedCore(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v2 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = ((unsigned __int64)qword_140C12908[v2 >> 6] >> (v2 & 0x3F)) & 1;
  KeTransitionProcessorParkState(a1, v3 + 1);
  v4 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 33212) = 1;
  _InterlockedOr64(
    &qword_140C112F8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v4] >> 6],
    1LL << (KiProcessorIndexToNumberMappingTable[v4] & 0x3F));
  _disable();
  LODWORD(v4) = *(_DWORD *)(a1 + 32384);
  *(_DWORD *)(a1 + 11684) = 0;
  *(_DWORD *)(a1 + 11680) = v4;
  if ( (v6 & 0x200) != 0 )
    _enable();
  if ( (_BYTE)v3 )
  {
    _InterlockedOr64(
      &qword_140C129B8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F));
    *(_BYTE *)(a1 + 32819) = 1;
  }
  return PpmEventCoreParkingStateChangeEx(a1, v3);
}
