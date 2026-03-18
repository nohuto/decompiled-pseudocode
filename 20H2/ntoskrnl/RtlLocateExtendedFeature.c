/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058DB10
 * Callers:
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090CE2C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140380F00 (RtlLocateExtendedFeature2.c)
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
