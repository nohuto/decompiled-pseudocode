/*
 * XREFs of MiGetSubsectionCharges @ 0x14054FA28
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x140359034 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14055CF88 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D6F0 (MiReturnCrossPartitionCharges.c)
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
  v5 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
