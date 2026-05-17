/*
 * XREFs of _RtlpFcBufferManagerReferenceBuffers@12 @ 0x4B2E5302
 * Callers:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 * Callees:
 *     _RtlAcquireSwapReference@4 @ 0x4B2E5334 (_RtlAcquireSwapReference@4.c)
 */

int *__fastcall RtlpFcBufferManagerReferenceBuffers(int a1, _DWORD *a2, int *a3)
{
  int v5; // eax
  int v6; // ecx
  int *result; // eax

  v5 = RtlAcquireSwapReference();
  *a2 = *(_DWORD *)(a1 + 8 * v5 + 112);
  a2[1] = *(_DWORD *)(a1 + 8 * v5 + 116);
  v6 = 48 * v5 + a1 + 16;
  result = a3;
  *a3 = v6;
  return result;
}
