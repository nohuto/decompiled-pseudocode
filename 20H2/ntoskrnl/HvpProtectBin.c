/*
 * XREFs of HvpProtectBin @ 0x1405DA7D0
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140706998 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x1408765B0 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x140203C94 (ExProtectPool.c)
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
