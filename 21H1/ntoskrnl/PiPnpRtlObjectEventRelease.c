/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x1406A6008
 * Callers:
 *     PiDqQueryActionQueueEntryFree @ 0x1406A1728 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406A7234 (PiPnpRtlObjectEventCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventRelease(char *P)
{
  void *v2; // rcx
  void *v3; // rcx
  unsigned int i; // edi
  void *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 1);
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
