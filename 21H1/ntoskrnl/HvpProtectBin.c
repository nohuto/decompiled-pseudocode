/*
 * XREFs of HvpProtectBin @ 0x1406857A0
 * Callers:
 *     HvpAddBin @ 0x140685BBC (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140698568 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x14086EF68 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x1402DF9A4 (ExProtectPool.c)
 */

__int64 __fastcall HvpProtectBin(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 )
  {
    if ( !(unsigned int)ExProtectPool(a3, a2, 4u) )
      return (unsigned int)-1073741670;
  }
  else
  {
    ExProtectPool(a3, a2, 2u);
  }
  return v4;
}
