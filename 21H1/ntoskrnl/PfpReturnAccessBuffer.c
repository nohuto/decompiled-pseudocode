/*
 * XREFs of PfpReturnAccessBuffer @ 0x1402C2F78
 * Callers:
 *     PfpFlushBuffers @ 0x1406541D0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_140CEC0C0.Alignment);
  if ( LOWORD(stru_140CEC0C0.Alignment) >= (unsigned int)dword_140CEC0A8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FE10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140CEC0C0, P);
    if ( !stru_140CEC090.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140CEC090, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P, 0);
}
