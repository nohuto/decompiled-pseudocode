/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140970C20
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x140970A74 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
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
