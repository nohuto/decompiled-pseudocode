/*
 * XREFs of ?vHalve@@YGXAAVEVECTORFX@@@Z @ 0x236C93
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895 (-bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vHalve(int *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *this;
  if ( *this >= 0 )
    ++v2;
  v3 = this[1];
  if ( v3 >= 0 )
    ++v3;
  *this = v2 >> 1;
  this[1] = v3 >> 1;
}
