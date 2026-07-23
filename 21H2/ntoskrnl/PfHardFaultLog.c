/*
 * XREFs of PfHardFaultLog @ 0x140238C50
 * Callers:
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x140273ADC (PfLogEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1405A83F8 (EtwTraceSiloTimedEvent.c)
 */

struct _KTHREAD *__fastcall PfHardFaultLog(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  _DWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  result = KeGetCurrentThread();
  Process = result->Process;
  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v10 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v10 = 627;
LABEL_13:
        result = (struct _KTHREAD *)EtwTraceSiloTimedEvent(*(_QWORD *)&Process[2].Header.Lock, v10, a3, (int)a1 + 32);
        goto LABEL_3;
      }
    }
    v10 = 544;
    goto LABEL_13;
  }
LABEL_3:
  if ( a1[8] )
  {
    if ( a2 != 2 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v8 = MEMORY[0xFFFFF78000000320] - a1[8];
      a1[8] = v8;
      v9 = (__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink;
      v11[0] = 2 * v8;
      v11[1] = dword_140CEC390;
      v14 = a1[6];
      v12 = (unsigned int)(a1[4] >> 9);
      v13 = a1[5];
      v15 = v9 & 0x1FFFFFFFFFFFFFFFLL;
      return (struct _KTHREAD *)PfLogEvent(29LL, v7, v11);
    }
  }
  return result;
}
