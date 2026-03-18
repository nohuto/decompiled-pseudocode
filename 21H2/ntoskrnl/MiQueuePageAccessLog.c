/*
 * XREFs of MiQueuePageAccessLog @ 0x140233AA0
 * Callers:
 *     MiReturnCcAccessLog @ 0x140233A4C (MiReturnCcAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403760B4 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406AC9A4 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x14035FA80 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(struct _SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CF5E50;
  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CF5E28 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4EC70, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
