/*
 * XREFs of PfpReturnAccessBuffer @ 0x1402D40D0
 * Callers:
 *     PfpFlushBuffers @ 0x1406CA6C0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x1402D4628 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(struct _SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_8;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CEC328 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FED0, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P);
}
