/*
 * XREFs of MiFreeReservationRun @ 0x14069BFF8
 * Callers:
 *     MiFreeReservationRuns @ 0x1406D056C (MiFreeReservationRuns.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406D05FC (MiFreeWorkingSetSwapContext.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiGetPageFileHigh @ 0x1403203C4 (MiGetPageFileHigh.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
