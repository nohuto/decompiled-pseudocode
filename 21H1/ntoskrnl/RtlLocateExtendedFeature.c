/*
 * XREFs of RtlLocateExtendedFeature @ 0x1405899F0
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x140905F5C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037E7E0 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL, Length);
}
