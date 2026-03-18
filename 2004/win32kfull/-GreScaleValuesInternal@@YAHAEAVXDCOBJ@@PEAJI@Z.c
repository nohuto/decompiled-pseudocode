/*
 * XREFs of ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013A8E4
 * Callers:
 *     NtGdiFrameRgn @ 0x1C0131750 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139480 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013B8A8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GreScaleValues @ 0x1C029F830 (GreScaleValues.c)
 * Callees:
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C013A940 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleValuesInternal(DC **a1, int *a2, unsigned int a3)
{
  __int64 v7; // rbx
  int *i; // rdi

  if ( !(unsigned int)DC::bDpiScaleTransform(*a1) )
    return 1LL;
  v7 = 0LL;
  if ( !a3 )
    return 1LL;
  for ( i = a2; (unsigned int)bFToL((float)*i * *((float *)*a1 + 131), &a2[v7], 6u); ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= a3 )
      return 1LL;
  }
  return 0LL;
}
