/*
 * XREFs of MiGetSubsectionCharges @ 0x1405533F8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x140303B98 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140708F38 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x140560958 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1405610C0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((unsigned __int64)v5, a2, 0) )
    {
      v7 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v7;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
