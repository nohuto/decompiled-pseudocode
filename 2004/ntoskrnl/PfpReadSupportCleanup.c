/*
 * XREFs of PfpReadSupportCleanup @ 0x14060B8A4
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14060AC10 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DC260 (PfpPrefetchFiles.c)
 * Callees:
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     PfpOpenHandleClose @ 0x140605A14 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
