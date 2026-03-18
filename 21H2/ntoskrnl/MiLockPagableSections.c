/*
 * XREFs of MiLockPagableSections @ 0x140B0872C
 * Callers:
 *     MiCancelPhase0Locking @ 0x1407610B4 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140B0856C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B085F8 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     MmImageSectionPagable @ 0x140760F98 (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x140761128 (MiImagePagable.c)
 */

void __fastcall MiLockPagableSections(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  v2 = a1[6];
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
          if ( a2 )
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
