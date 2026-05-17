/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F5D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F6428 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 __fastcall RtlGetExtendedFeaturesMask(__int64 a1)
{
  return *(_QWORD *)RtlpLocateXStateChunk(a1) & 0xFFFFFFFFFFFFFFFCuLL;
}
