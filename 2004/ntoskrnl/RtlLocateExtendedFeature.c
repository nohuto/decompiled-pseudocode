/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058A0E0
 * Callers:
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090720C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037F1D0 (RtlLocateExtendedFeature2.c)
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
