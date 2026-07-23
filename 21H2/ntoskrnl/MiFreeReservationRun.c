/*
 * XREFs of MiFreeReservationRun @ 0x14063AA94
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1406BEC70 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406BED20 (MiFreeReservationRuns.c)
 * Callees:
 *     MiGetPageFileHigh @ 0x140250F88 (MiGetPageFileHigh.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
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
