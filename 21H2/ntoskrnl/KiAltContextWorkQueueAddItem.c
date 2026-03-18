/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x14057C248
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057C2F0 (WheaFlushETWEventsSelectProcessor.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &qword_140C2A750) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2A798, CriticalWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C2A758, &ProcNumber);
      BYTE1(stru_140C2A758) = 2;
      KiInsertQueueDpc((ULONG_PTR)&stru_140C2A758, 0LL, 0LL, 0LL, 0);
    }
  }
}
