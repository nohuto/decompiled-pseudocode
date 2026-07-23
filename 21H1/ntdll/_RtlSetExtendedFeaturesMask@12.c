/*
 * XREFs of _RtlSetExtendedFeaturesMask@12 @ 0x4B35BC40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpLocateXStateChunk@4 @ 0x4B35C522 (_RtlpLocateXStateChunk@4.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  _DWORD *XStateChunk; // eax
  int v3; // ecx

  XStateChunk = (_DWORD *)RtlpLocateXStateChunk(ContextEx);
  v3 = HIDWORD(FeatureMask) & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]);
  *XStateChunk = FeatureMask & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFC;
  XStateChunk[1] = v3;
}
