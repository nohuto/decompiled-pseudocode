/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800F5A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800F6088 (RtlpLocateXStateChunk.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  unsigned __int64 *XStateChunk; // rax
  __int64 v3; // r10

  XStateChunk = (unsigned __int64 *)RtlpLocateXStateChunk(ContextEx);
  *XStateChunk = v3 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
}
