/*
 * XREFs of MiFinalizeImageRetpolineState @ 0x14075CE48
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1402A3834 (MiIsRetpolineEnabled.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiLogRetpolineImageLoadEvents @ 0x14075CE80 (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0DC8 (MiMarkKernelImageRetpolineBits.c)
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
