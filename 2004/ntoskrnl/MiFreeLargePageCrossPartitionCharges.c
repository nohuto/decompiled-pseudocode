/*
 * XREFs of MiFreeLargePageCrossPartitionCharges @ 0x1403F1E28
 * Callers:
 *     MiFreeLargePages @ 0x140558FF8 (MiFreeLargePages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14055D6F0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeLargePageCrossPartitionCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C4E448;
  if ( a1 != *(_QWORD *)(qword_140C4E448 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]) )
    return MiReturnCrossPartitionCharges(a1, 4LL, 1LL, a2);
  return result;
}
