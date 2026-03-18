/*
 * XREFs of EtwpStackTraceDispatcher @ 0x1405A1A30
 * Callers:
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403A6BB0 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402C8EE8 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 */

void __fastcall EtwpStackTraceDispatcher(unsigned int *a1, unsigned int *a2, struct _KTHREAD *a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // r14
  unsigned __int8 NestingLevel; // cl

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  v6 = a3;
  if ( (a4 & 0x4000) == 0 || KeGetCurrentPrcb()->IdleThread != CurrentThread )
  {
    if ( !a3 )
      v6 = CurrentThread;
    if ( (a4 & 0x3000) != 0x1000 )
      goto LABEL_29;
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread != v6
      || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 && (a4 & 0x4000000) == 0 )
    {
      v5 = a4 & 0xFFFFEFFF;
      goto LABEL_29;
    }
    CurrentIrql = ObGetCurrentIrql();
    LOBYTE(v11) = 2;
    v12 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      if ( ((a1[208] & 0x1000000) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0)
        && MmCanThreadFault(v10, v11)
        && !BYTE6(CurrentThread[1].Queue)
        && KeGetCurrentThread()->ApcStateIndex != 1
        && (v5 & 0x1000000) == 0
        && !_bittest((const signed __int32 *)&CurrentThread->116, 5u) )
      {
        goto LABEL_29;
      }
      v5 &= ~0x1000u;
    }
    else
    {
      v5 &= ~0x1000u;
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( CurrentIrql == 2 )
      {
        if ( !NestingLevel )
          goto LABEL_28;
        goto LABEL_16;
      }
      if ( NestingLevel )
      {
LABEL_16:
        if ( (v5 & 0x8000) == 0 || NestingLevel != 1 )
          goto LABEL_29;
      }
    }
    LOBYTE(v11) = v12;
LABEL_28:
    EtwpQueueStackWalkApc((__int64)CurrentThread, v11, a1, a2);
LABEL_29:
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, v6, a2);
  }
}
