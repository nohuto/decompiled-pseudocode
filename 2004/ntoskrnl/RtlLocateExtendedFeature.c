/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058A0E0
 * Callers:
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090720C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037F1D0 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL, Length);
}
