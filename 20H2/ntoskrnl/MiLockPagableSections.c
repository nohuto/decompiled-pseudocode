/*
 * XREFs of MiLockPagableSections @ 0x140A52FB4
 * Callers:
 *     MiCancelPhase0Locking @ 0x1406B9644 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140A52ED8 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A52F64 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x1406B93DC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406B943C (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1406B9550 (MmLockPagableDataSection.c)
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
