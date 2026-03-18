/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QAEHI@Z @ 0x21113A
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __thiscall UMPDOBJ::bAllocFontLinks(PATHOBJ **this, unsigned int a2)
{
  size_t v3; // ebx
  PATHOBJ *v4; // ecx

  if ( a2 <= (unsigned int)this[56] )
  {
    v3 = 4 * a2;
  }
  else
  {
    if ( this[51] )
    {
      Win32FreePool(this[51]);
      this[56] = 0;
    }
    v3 = 4 * a2;
    this[51] = (PATHOBJ *)PALLOCMEM2(4 * a2, 1886221639, 0);
  }
  v4 = this[51];
  if ( v4 )
  {
    this[56] = (PATHOBJ *)a2;
    memset(v4, 0, v3);
    v4 = this[51];
  }
  return v4 != 0;
}
