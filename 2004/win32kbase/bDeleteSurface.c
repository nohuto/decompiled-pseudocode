/*
 * XREFs of bDeleteSurface @ 0x1C00C0E40
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C003EDC0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C00C0270 (EngDeleteSurface.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C1DC0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C8428 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0145200 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001BDC0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CF18C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = HmgShareLockCheckIgnoreStockBit(a1, 5);
  if ( v3 )
  {
    v1 = SURFREF::bDeleteSurface(&v3, 0LL, 0LL);
    if ( v3 )
      HmgDecrementShareReferenceCountEx(v3, 0LL);
  }
  else
  {
    return 0;
  }
  return v1;
}
