/*
 * XREFs of MiGetSubsectionCharges @ 0x140555108
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x14021ECA8 (MiUpdateLastSubsectionSize.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x140562668 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
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
  v5 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
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
