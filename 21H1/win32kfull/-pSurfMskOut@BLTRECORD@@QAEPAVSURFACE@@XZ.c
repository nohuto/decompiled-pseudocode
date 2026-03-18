/*
 * XREFs of ?pSurfMskOut@BLTRECORD@@QAEPAVSURFACE@@XZ @ 0x1ECA59
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__thiscall BLTRECORD::pSurfMskOut(BLTRECORD *this)
{
  if ( (*((_DWORD *)this + 42) & 0x10000) != 0 )
    return (struct SURFACE *)*((_DWORD *)this + 12);
  else
    return 0;
}
