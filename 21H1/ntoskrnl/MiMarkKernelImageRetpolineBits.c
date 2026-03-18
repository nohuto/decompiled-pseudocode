/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x1408CC318
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x140745674 (MiFinalizeImageRetpolineState.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x140324278 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x1408CC164 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
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
