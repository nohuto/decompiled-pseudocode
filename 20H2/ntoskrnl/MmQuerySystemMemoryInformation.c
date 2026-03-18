/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14032B8A8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A72F0 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x140940480 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C4EDA8;
  *((_QWORD *)&v2 + 1) = qword_140C4C748;
  *(_QWORD *)&v3 = qword_140C4EE38;
  *((_QWORD *)&v3 + 1) = qword_140C52928;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
