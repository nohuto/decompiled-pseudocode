/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C013E768
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C005B8F0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C013E718 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C005BAC8 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C009B360 (bFToL.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C013E5B0 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v6 = 1;
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = bFToL(*(float *)(v3 + 524), &v6, 6u);
    v5 = v6;
    if ( !v4 )
      v5 = 1;
    v1 = v5;
  }
  DC::SetCachedDpiScaleValue(this, v1);
}
