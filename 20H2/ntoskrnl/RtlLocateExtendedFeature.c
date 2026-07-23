/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058DB10
 * Callers:
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090CE2C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140380F00 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL, Length);
}
