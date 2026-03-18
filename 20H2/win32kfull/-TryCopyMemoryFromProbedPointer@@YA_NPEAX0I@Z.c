/*
 * XREFs of ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00E41A4
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00E3CAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

char __fastcall TryCopyMemoryFromProbedPointer(void *a1, void *a2, unsigned int a3)
{
  memmove(a1, a2, a3);
  return 1;
}
