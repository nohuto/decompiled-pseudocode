/*
 * XREFs of TppStartThreadData @ 0x1800205F0
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070B70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071570 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800760B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800784F0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x18007FD90 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180112F60 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *v5; // r11
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8

  result = NtCurrentTeb();
  v5 = 0LL;
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v5 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v5 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *a1 = v5;
  return result;
}
