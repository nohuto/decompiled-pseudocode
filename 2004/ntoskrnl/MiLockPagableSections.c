/*
 * XREFs of MiLockPagableSections @ 0x140A52934
 * Callers:
 *     MiCancelPhase0Locking @ 0x1406A9678 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140A52858 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A528E4 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x1406A87EC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406A884C (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 48);
  if ( MiImagePagable(a1, v2) )
  {
    v4 = RtlImageNtHeader(v2);
    v5 = *(unsigned __int16 *)(v4 + 6);
    v6 = *(unsigned __int16 *)(v4 + 20) + v4 + 24;
    if ( *(_WORD *)(v4 + 6) )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 == 1 )
            MmLockPagableDataSection((PVOID)(v2 + *(unsigned int *)(v6 + 12)));
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --v5;
      }
      while ( v5 );
    }
  }
}
