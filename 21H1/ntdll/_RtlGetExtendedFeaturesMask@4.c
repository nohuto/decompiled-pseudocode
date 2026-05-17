/*
 * XREFs of _RtlGetExtendedFeaturesMask@4 @ 0x4B35B880
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpLocateXStateChunk@4 @ 0x4B35C522 (_RtlpLocateXStateChunk@4.c)
 */

unsigned int __stdcall RtlGetExtendedFeaturesMask(int a1)
{
  return *(_DWORD *)RtlpLocateXStateChunk(a1) & 0xFFFFFFFC;
}
