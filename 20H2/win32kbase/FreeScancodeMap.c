/*
 * XREFs of FreeScancodeMap @ 0x1C00BFC10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void FreeScancodeMap()
{
  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
}
