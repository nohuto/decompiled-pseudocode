/*
 * XREFs of MiQueuePageAccessLog @ 0x14027D59C
 * Callers:
 *     MiReturnCcAccessLog @ 0x14024697C (MiReturnCcAccessLog.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A3764 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x14060B8FC (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x140273308 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CEC390;
  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_140CEC380.Alignment);
  if ( LOWORD(stru_140CEC380.Alignment) >= (unsigned int)dword_140CEC368 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FF10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140CEC380, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P, 1);
}
