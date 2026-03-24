/*
 * XREFs of MiFreeReservationRun @ 0x140645CA8
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x140710620 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1407106D0 (MiFreeReservationRuns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetPageFileHigh @ 0x1402D2A3C (MiGetPageFileHigh.c)
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
