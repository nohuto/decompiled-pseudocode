/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x14064117C
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x14063D4E4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140645FA8 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventRelease(char *P)
{
  unsigned int *v2; // rcx
  void *v3; // rcx
  unsigned int i; // edi
  void *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    v2 = (unsigned int *)*((_QWORD *)P + 1);
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 2);
    if ( v3 )
      ZwClose(v3);
    if ( (*((_DWORD *)P + 1) & 4) != 0 )
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 24));
    for ( i = 0; i < *((_DWORD *)P + 19); ++i )
    {
      v5 = *(void **)&P[32 * i + 104];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41706E50u);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
