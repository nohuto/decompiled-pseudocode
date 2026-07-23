/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x1402FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1402F9964 (MmOnlySystemCacheViewsPresent.c)
 *     MmTrimSection @ 0x1402FA398 (MmTrimSection.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v5; // r12
  __int64 v6; // rbp
  ULONG v10; // edi
  NTSTATUS v11; // edi
  NTSTATUS Status; // ecx
  BOOLEAN v13; // al

  v5 = 0;
  v6 = Length;
  v10 = (Flags >> 1) & 1 | 2;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 4) != 0 || MmOnlySystemCacheViewsPresent(SectionObjectPointer) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = (Flags >> 1) & 1;
  }
  v11 = MmTrimSection(SectionObjectPointer, FileOffset, v6, v10);
LABEL_5:
  IoStatus->Status = v11;
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, v6, 0LL, 0, (__int128 *)&IoStatus->0);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      v13 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u);
      Status = IoStatus->Status;
      v5 = v13 == 0;
    }
    if ( Status >= 0 && (v11 == 277 || v5) )
      IoStatus->Status = 277;
  }
}
