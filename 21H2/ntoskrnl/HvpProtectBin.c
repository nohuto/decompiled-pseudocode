/*
 * XREFs of HvpProtectBin @ 0x140724980
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14070999C (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140722A58 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x140873E94 (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x140362BC8 (ExProtectPool.c)
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
