/*
 * XREFs of ?bCreateDefaultBrushes@PDEVOBJ@@QAEHXZ @ 0xAC60C
 * Callers:
 *     _PDEVOBJ_bCreateDefaultBrushesWrap@4 @ 0xAC5FA (_PDEVOBJ_bCreateDefaultBrushesWrap@4.c)
 * Callees:
 *     <none>
 */

int __thiscall PDEVOBJ::bCreateDefaultBrushes(PDEVOBJ *this)
{
  int v2; // esi
  char *i; // edi

  v2 = 908;
  for ( i = (char *)&gaaulPat; ; i += 32 )
  {
    *(_DWORD *)(v2 + *(_DWORD *)this) = EngCreateBitmap((SIZEL)0x800000008LL, 4, 1u, 1u, i);
    if ( !*(_DWORD *)(v2 + *(_DWORD *)this) )
      break;
    v2 += 4;
    if ( v2 >= 932 )
      return 1;
  }
  return 0;
}
