/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x1403F20D0
 * Callers:
 *     MiCreatePfnTemplate @ 0x1403A8B34 (MiCreatePfnTemplate.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiEnableNewPfns @ 0x140528B90 (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140A3E10C (MxCreateFreePfns.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x1403F20A8 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // ecx

  v2 = 0;
  if ( !a1 )
  {
    if ( (unsigned int)MiColdPageSizeSupported(a2) )
    {
      return 1;
    }
    else
    {
      v4 = v3;
      if ( (HvlEnlightenments & 0x200000) != 0 )
        return 1;
      return v4;
    }
  }
  return v2;
}
