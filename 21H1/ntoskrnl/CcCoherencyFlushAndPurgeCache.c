/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x1402CE170
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     MmTrimSection @ 0x1402CE268 (MmTrimSection.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1402D0098 (MmOnlySystemCacheViewsPresent.c)
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
    if ( (Flags & 4) != 0 || (unsigned __int8)MmOnlySystemCacheViewsPresent(SectionObjectPointer) )
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
  CcFlushCachePriv((__int64)SectionObjectPointer, (__int64 *)FileOffset, v6, 0LL, 0, (unsigned int *)IoStatus);
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
