/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F5F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F6598 (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
