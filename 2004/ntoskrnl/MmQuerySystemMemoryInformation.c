/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14035AE48
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A3850 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x14093A650 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C4ED28;
  *((_QWORD *)&v2 + 1) = qword_140C4C6C8;
  *(_QWORD *)&v3 = qword_140C4EDB8;
  *((_QWORD *)&v3 + 1) = qword_140C528A8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
