/*
 * XREFs of PfpReturnAccessBuffer @ 0x1402009E4
 * Callers:
 *     PfpFlushBuffers @ 0x1407D9F00 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x14035FA80 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(struct _SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_6;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CF5E28 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4EC70, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_6:
    MmFreeAccessPfnBuffer(P);
}
