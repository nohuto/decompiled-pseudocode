/*
 * XREFs of MiFreeLargePageCrossPartitionCharges @ 0x1403F0AC8
 * Callers:
 *     MiFreeLargePages @ 0x1405589A8 (MiFreeLargePages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14055D0A0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeLargePageCrossPartitionCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C4E588;
  if ( a1 != *(_QWORD *)(qword_140C4E588 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]) )
    return MiReturnCrossPartitionCharges(a1, 4LL, 1LL, a2);
  return result;
}
