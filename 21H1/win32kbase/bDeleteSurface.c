/*
 * XREFs of bDeleteSurface @ 0x1C009AEA0
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00303E0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00513D0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C009AE80 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C7D08 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C014B550 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00063B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CE7FC (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
