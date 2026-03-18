/*
 * XREFs of MiFinalizeImageRetpolineState @ 0x1407471F4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsRetpolineEnabled @ 0x140329398 (MiIsRetpolineEnabled.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiLogRetpolineImageLoadEvents @ 0x14074722C (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408CD668 (MiMarkKernelImageRetpolineBits.c)
 */

__int64 __fastcall MiFinalizeImageRetpolineState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rdi

  if ( !MiIsRetpolineEnabled() )
    goto LABEL_2;
  v4 = *(_QWORD *)(v2 + 48);
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    MiMapRetpolineStubs(v4, (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12);
  result = MiMarkKernelImageRetpolineBits(a1, 1LL);
  if ( (int)result >= 0 )
  {
LABEL_2:
    MiLogRetpolineImageLoadEvents(a1);
    return 0LL;
  }
  return result;
}
