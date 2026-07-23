/*
 * XREFs of MiQueuePageAccessLog @ 0x1402A50BC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x140318B04 (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A00F4 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406D8ADC (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CEC0D0;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_140CEC0C0.Alignment);
  if ( LOWORD(stru_140CEC0C0.Alignment) >= (unsigned int)dword_140CEC0A8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FE10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140CEC0C0, P);
    if ( Alignment_low >= 8 && !stru_140CEC090.Header.SignalState )
      KeSetEvent(&stru_140CEC090, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
