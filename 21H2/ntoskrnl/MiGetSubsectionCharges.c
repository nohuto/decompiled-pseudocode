/*
 * XREFs of MiGetSubsectionCharges @ 0x140554EC8
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x1402A1728 (MiUpdateLastSubsectionSize.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140315D00 (MiReferenceActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x140562428 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140562B90 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
    {
      v8 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v8;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL, v7) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v8 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
