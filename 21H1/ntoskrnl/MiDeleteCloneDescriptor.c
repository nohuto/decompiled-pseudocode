/*
 * XREFs of MiDeleteCloneDescriptor @ 0x140554504
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     MiDecrementCloneHeaderCount @ 0x1405544D0 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) + 32LL;
    v7 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v7 + 24) = (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1840), (PSLIST_ENTRY)v7);
    KeSetEvent((PRKEVENT)(v5 + 1808), 0, 0);
    MiDecrementCloneHeaderCount(v5);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(a1, *(_QWORD *)(a2 + 64));
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1680) + 368LL), (PSLIST_ENTRY)(a2 + 80));
}
