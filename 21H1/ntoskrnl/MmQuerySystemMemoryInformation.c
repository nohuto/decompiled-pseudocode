/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14031D268
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A3160 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1409393B0 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C4EE68;
  *((_QWORD *)&v2 + 1) = qword_140C4C808;
  *(_QWORD *)&v3 = qword_140C4EEF8;
  *((_QWORD *)&v3 + 1) = qword_140C529A8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
