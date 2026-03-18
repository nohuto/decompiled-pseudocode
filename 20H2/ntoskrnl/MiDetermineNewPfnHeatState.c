/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x1403F65E4
 * Callers:
 *     MiCreatePfnTemplate @ 0x1403AB524 (MiCreatePfnTemplate.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiEnableNewPfns @ 0x14052C560 (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140A443AC (MxCreateFreePfns.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
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
