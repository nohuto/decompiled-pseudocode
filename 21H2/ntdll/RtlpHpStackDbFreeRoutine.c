/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x180108850
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x180108AA8 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpStackDbFreeRoutine(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataFree(a1, &v2);
}
