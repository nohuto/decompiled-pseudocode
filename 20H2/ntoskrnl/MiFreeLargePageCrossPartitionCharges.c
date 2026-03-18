/*
 * XREFs of MiFreeLargePageCrossPartitionCharges @ 0x1403F633C
 * Callers:
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x1405610C0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeLargePageCrossPartitionCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C4E4C8;
  if ( a1 != *(_QWORD *)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]) )
    return MiReturnCrossPartitionCharges(a1, 4LL, 1LL, a2);
  return result;
}
