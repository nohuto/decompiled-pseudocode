/*
 * XREFs of _TppStartThreadData@16 @ 0x4B2B6F0C
 * Callers:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppTimerpExecuteCallback@8 @ 0x4B2B56A0 (_TppTimerpExecuteCallback@8.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _TppSimplepExecuteCallback@8 @ 0x4B2EB860 (_TppSimplepExecuteCallback@8.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 *     _RtlpTpTimerCallback@12 @ 0x4B385320 (_RtlpTpTimerCallback@12.c)
 *     _RtlpTpIoCallback@16 @ 0x4B385720 (_RtlpTpIoCallback@16.c)
 * Callees:
 *     <none>
 */

int *__fastcall TppStartThreadData(int *a1, int a2, int a3, int a4)
{
  _DWORD *ThreadPoolData; // esi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int *result; // eax
  int v9; // [esp+10h] [ebp-10h]

  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v5 = ThreadPoolData[2];
    ++ThreadPoolData[3];
    v6 = ((_BYTE)v5 - 1) & 1;
    ThreadPoolData[2] = v6;
    v9 = 6 * v6;
    ThreadPoolData[v9 + 7] = a3;
    ThreadPoolData[v9 + 8] = a4;
    ThreadPoolData[6 * v6 + 6] = a2;
    while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
      _mm_pause();
    v7 = (int)&ThreadPoolData[6 * v6 + 6];
    *(_QWORD *)&ThreadPoolData[v9 + 10] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v7 = 0;
  }
  result = a1;
  *a1 = v7;
  return result;
}
