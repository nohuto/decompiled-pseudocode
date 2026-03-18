/*
 * XREFs of RtlInitializeCompression @ 0x140580074
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403787D0 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 RtlInitializeCompression()
{
  return ExInitializeNPagedLookasideListInternal(
           (__int64)&RtlLznt1DecompressChunkLookaside,
           0LL,
           0LL,
           512,
           88,
           1667529324,
           0,
           0);
}
