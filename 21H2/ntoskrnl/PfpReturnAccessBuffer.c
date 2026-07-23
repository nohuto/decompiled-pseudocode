/*
 * XREFs of PfpReturnAccessBuffer @ 0x140272DA8
 * Callers:
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x140273308 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_140CEC380.Alignment);
  if ( LOWORD(stru_140CEC380.Alignment) >= (unsigned int)dword_140CEC368 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FF10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140CEC380, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P);
}
