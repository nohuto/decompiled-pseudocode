/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 */

int __thiscall ERECTL::bOffsetSubtract(ERECTL *this, const struct _POINTL *a2, int a3)
{
  __int64 x; // kr00_8
  LONG y; // ebx
  LONG *v7; // [esp+0h] [ebp-Ch]
  LONG *v8; // [esp+0h] [ebp-Ch]
  LONG *v9; // [esp+0h] [ebp-Ch]
  LONG *v10; // [esp+0h] [ebp-Ch]

  if ( a3 )
  {
    x = a2->x;
    if ( LongLongToLong(*(int *)this - x, v7) < 0 )
      return 0;
    if ( LongLongToLong(*((int *)this + 2) - x, v8) < 0 )
      return 0;
    y = a2->y;
    if ( LongLongToLong(*((int *)this + 1) - (__int64)y, v9) < 0
      || LongLongToLong(*((int *)this + 3) - (__int64)y, v10) < 0 )
    {
      return 0;
    }
  }
  *(_DWORD *)this -= a2->x;
  *((_DWORD *)this + 2) -= a2->x;
  *((_DWORD *)this + 1) -= a2->y;
  *((_DWORD *)this + 3) -= a2->y;
  return 1;
}
