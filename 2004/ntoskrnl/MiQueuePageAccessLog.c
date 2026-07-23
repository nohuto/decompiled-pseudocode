/*
 * XREFs of MiQueuePageAccessLog @ 0x14024C08C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403566F4 (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A0884 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406FC68C (MiGetCcAccessLog.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x1403050AC (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CEBF90;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CEBF68 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FCD0, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
