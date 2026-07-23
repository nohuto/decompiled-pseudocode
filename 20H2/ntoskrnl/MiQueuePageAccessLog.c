/*
 * XREFs of MiQueuePageAccessLog @ 0x14023356C
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x140326F44 (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A2D54 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406CECEC (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1402440A8 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CEC050;
  if ( !ExAcquireRundownProtection_0(&stru_140CEC008) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CEC028 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FD50, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&stru_140CEC008);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
