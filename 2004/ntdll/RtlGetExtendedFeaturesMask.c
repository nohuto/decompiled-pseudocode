/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F59F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F6088 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 __fastcall RtlGetExtendedFeaturesMask(__int64 a1)
{
  return *(_QWORD *)RtlpLocateXStateChunk(a1) & 0xFFFFFFFFFFFFFFFCuLL;
}
