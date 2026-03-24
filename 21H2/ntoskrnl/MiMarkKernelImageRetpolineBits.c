/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x1408D0C68
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x14075CC88 (MiFinalizeImageRetpolineState.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14035E904 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0AB4 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x1408D0CB4 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined(v5)) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
