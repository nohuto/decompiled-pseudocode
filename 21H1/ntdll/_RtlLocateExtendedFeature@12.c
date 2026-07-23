/*
 * XREFs of _RtlLocateExtendedFeature@12 @ 0x4B35BBD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLocateExtendedFeature2@16 @ 0x4B35BA70 (_RtlLocateExtendedFeature2@16.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlLocateExtendedFeature2((int)ContextEx, FeatureId, 2147353560, Length);
}
