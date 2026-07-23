/*
 * XREFs of HvpProtectBin @ 0x1406FC97C
 * Callers:
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x140873FF4 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x1402F7EF8 (ExProtectPool.c)
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
