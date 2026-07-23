/*
 * XREFs of PfpReadSupportCleanup @ 0x1406786A4
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140678220 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DF9C0 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( (*(_QWORD *)(a2 + 32) & 0x400000000LL) != 0 )
    PfpOpenHandleClose((_QWORD *)(a2 + 8), a1);
}
