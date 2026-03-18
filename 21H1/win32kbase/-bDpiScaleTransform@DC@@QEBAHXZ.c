/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0017948
 * Callers:
 *     GreSetDCOrg @ 0x1C00178A0 (GreSetDCOrg.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0076DB0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0079320 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0146F78 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
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
