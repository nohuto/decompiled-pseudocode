/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14024B3B8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A8F50 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x14093DE24 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C4EF68;
  *((_QWORD *)&v2 + 1) = qword_140C4C908;
  *(_QWORD *)&v3 = qword_140C4EFF8;
  *((_QWORD *)&v3 + 1) = qword_140C52AE8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
