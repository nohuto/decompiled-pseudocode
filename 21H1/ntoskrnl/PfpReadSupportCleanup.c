/*
 * XREFs of PfpReadSupportCleanup @ 0x1406409F4
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14063FD60 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DAEF0 (PfpPrefetchFiles.c)
 * Callees:
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     PfpOpenHandleClose @ 0x14063AA54 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
