/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C013A940
 * Callers:
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013A8E4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02745BC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreScaleRgn @ 0x1C029F6F4 (GreScaleRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
