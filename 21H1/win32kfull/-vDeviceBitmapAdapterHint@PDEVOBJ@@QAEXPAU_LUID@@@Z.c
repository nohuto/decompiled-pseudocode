/*
 * XREFs of ?vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z @ 0x1E9A26
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     ?MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z @ 0x2029FA (-MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z.c)
 *     ?MulSurfaceComplete@@YGHPAUDHPDEV__@@PAX@Z @ 0x204B61 (-MulSurfaceComplete@@YGHPAUDHPDEV__@@PAX@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PDEVOBJ::vDeviceBitmapAdapterHint(PDEVOBJ *this, struct _LUID *a2)
{
  struct _LUID *v2; // edx

  v2 = *(struct _LUID **)(*(_DWORD *)this + 1108);
  if ( v2 )
    v2[8] = *a2;
}
