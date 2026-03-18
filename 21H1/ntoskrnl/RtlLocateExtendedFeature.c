/*
 * XREFs of RtlLocateExtendedFeature @ 0x1405899F0
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x140905F5C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037E7E0 (RtlLocateExtendedFeature2.c)
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
