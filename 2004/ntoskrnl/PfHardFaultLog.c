/*
 * XREFs of PfHardFaultLog @ 0x14025F7B8
 * Callers:
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x14026C1B8 (PfLogEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1405A2CF8 (EtwTraceSiloTimedEvent.c)
 */

struct _KTHREAD *__fastcall PfHardFaultLog(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  result = KeGetCurrentThread();
  Process = result->Process;
  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v9 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v9 = 627;
LABEL_13:
        result = (struct _KTHREAD *)EtwTraceSiloTimedEvent(*(_QWORD *)&Process[2].Header.Lock, v9, a3, (int)a1 + 32);
        goto LABEL_3;
      }
    }
    v9 = 544;
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
      v10[0] = 2 * v8;
      v10[1] = dword_140CEBF90;
      v13 = a1[6];
      v11 = (unsigned int)(a1[4] >> 9);
      v14 = ((unsigned __int64)Process ^ (unsigned __int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
      v12 = a1[5];
      return (struct _KTHREAD *)PfLogEvent(29LL, v7, v10);
    }
  }
  return result;
}
