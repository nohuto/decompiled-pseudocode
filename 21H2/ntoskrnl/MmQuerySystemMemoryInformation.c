/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x140257E80
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14062F040 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1409EA348 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C534A8;
  *((_QWORD *)&v2 + 1) = qword_140C4F048;
  *(_QWORD *)&v3 = qword_140C53530;
  *((_QWORD *)&v3 + 1) = qword_140C592E8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
