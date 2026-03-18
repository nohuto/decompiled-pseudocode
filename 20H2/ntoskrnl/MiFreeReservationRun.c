/*
 * XREFs of MiFreeReservationRun @ 0x1406F0C14
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1406F0B5C (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406F0BC8 (MiFreeReservationRuns.c)
 * Callees:
 *     MiGetPageFileHigh @ 0x14033A134 (MiGetPageFileHigh.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
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
