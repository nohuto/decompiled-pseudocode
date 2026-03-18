/*
 * XREFs of PfpReadSupportCleanup @ 0x1406334AC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140657C04 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408E20A0 (PfpPrefetchFiles.c)
 * Callees:
 *     NtClose @ 0x140611680 (NtClose.c)
 *     PfpOpenHandleClose @ 0x140634820 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
    PfpOpenHandleClose(a2 + 8, a1);
}
