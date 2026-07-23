/*
 * XREFs of MiFreeLargePageCrossPartitionCharges @ 0x1403F7AD8
 * Callers:
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeLargePageCrossPartitionCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C4E688;
  if ( a1 != *(_QWORD *)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]) )
    return MiReturnCrossPartitionCharges(a1, 4LL, 1LL, a2);
  return result;
}
