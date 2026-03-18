/*
 * XREFs of SdbpCheckVersion @ 0x1409640B4
 * Callers:
 *     SdbpMatchOsVersion @ 0x14073F118 (SdbpMatchOsVersion.c)
 *     SdbpCheckAttribute @ 0x14079E77C (SdbpCheckAttribute.c)
 *     SdbpCheckPackageAttributes @ 0x140961F70 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // ecx

  v3 = 48;
  while ( (unsigned __int16)(a1 >> v3) == (unsigned __int16)(a2 >> v3) || (unsigned __int16)(a1 >> v3) == 0xFFFF )
  {
    v3 -= 16;
    if ( v3 < 0 )
      return 1LL;
  }
  return 0LL;
}
