/*
 * XREFs of HvpProtectBin @ 0x140637BD0
 * Callers:
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14069E638 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x140870A58 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x14027031C (ExProtectPool.c)
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
