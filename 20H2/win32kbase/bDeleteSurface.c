/*
 * XREFs of bDeleteSurface @ 0x1C001A650
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C001A630 (EngDeleteSurface.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00ADBC0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00BF430 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C7698 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0142D70 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0078140 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheckIgnoreStockBit(a1, a2);
  if ( v4 )
  {
    v2 = SURFREF::bDeleteSurface(&v4, 0LL);
    if ( v4 )
      HmgDecrementShareReferenceCountEx(v4, 0LL);
  }
  else
  {
    return 0;
  }
  return v2;
}
