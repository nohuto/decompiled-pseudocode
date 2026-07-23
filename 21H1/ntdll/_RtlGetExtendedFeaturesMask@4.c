/*
 * XREFs of _RtlGetExtendedFeaturesMask@4 @ 0x4B35B880
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpLocateXStateChunk@4 @ 0x4B35C522 (_RtlpLocateXStateChunk@4.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  _DWORD *XStateChunk; // eax
  ULONG64 result; // rax

  XStateChunk = (_DWORD *)RtlpLocateXStateChunk(ContextEx);
  HIDWORD(result) = XStateChunk[1];
  LODWORD(result) = *XStateChunk & 0xFFFFFFFC;
  return result;
}
