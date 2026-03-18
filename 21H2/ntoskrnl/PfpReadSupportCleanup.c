/*
 * XREFs of PfpReadSupportCleanup @ 0x1407E08A0
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1407E0408 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1409870AC (PfpPrefetchFiles.c)
 * Callees:
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     PfpOpenHandleClose @ 0x1407DFFD8 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( _bittest64((const signed __int64 *)(a2 + 32), 0x22u) )
    PfpOpenHandleClose((_QWORD *)(a2 + 8), a1);
}
