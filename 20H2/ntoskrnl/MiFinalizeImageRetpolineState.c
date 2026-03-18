/*
 * XREFs of MiFinalizeImageRetpolineState @ 0x140755DD4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsRetpolineEnabled @ 0x140357968 (MiIsRetpolineEnabled.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140755E0C (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D34A8 (MiMarkKernelImageRetpolineBits.c)
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
