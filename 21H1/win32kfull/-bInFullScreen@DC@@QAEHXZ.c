/*
 * XREFs of ?bInFullScreen@DC@@QAEHXZ @ 0x79454
 * Callers:
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     ?GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x21B794 (-GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z @ 0x21B852 (-GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DC::bInFullScreen(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 6);
  return (v1 & 0x1000) != 0 && (v1 & 0x4000) == 0;
}
