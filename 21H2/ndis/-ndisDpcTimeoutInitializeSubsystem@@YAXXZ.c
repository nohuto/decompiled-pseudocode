/*
 * XREFs of ?ndisDpcTimeoutInitializeSubsystem@@YAXXZ @ 0x1C0146B3C
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void ndisDpcTimeoutInitializeSubsystem(void)
{
  struct _KEVENT Event; // [rsp+20h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-48h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  qword_1C00E43D8 = 0LL;
  qword_1C00E43B0 = 0LL;
  xmmword_1C00E43B8 = 0LL;
  xmmword_1C00E43C8 = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.Reserved = 0LL;
  KeInitializeDpc(&Dpc, ndisGetDpcWatchdogInfo, &Event);
  KeSetImportanceDpc(&Dpc, HighImportance);
  KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  ndisWaitForKernelObject(&Event);
}
