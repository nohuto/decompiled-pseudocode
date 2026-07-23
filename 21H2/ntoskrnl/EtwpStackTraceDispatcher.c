/*
 * XREFs of EtwpStackTraceDispatcher @ 0x1405A7130
 * Callers:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEC8C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEF80 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     MmCanThreadFault @ 0x140281228 (MmCanThreadFault.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 */

void __fastcall EtwpStackTraceDispatcher(unsigned int *a1, unsigned int *a2, struct _KTHREAD *a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r14
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
    v10 = 2;
    v11 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      if ( ((a1[208] & 0x1000000) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0)
        && MmCanThreadFault()
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
    v10 = v11;
LABEL_28:
    EtwpQueueStackWalkApc((__int64)CurrentThread, v10, a1, a2);
LABEL_29:
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, v6, a2);
  }
}
