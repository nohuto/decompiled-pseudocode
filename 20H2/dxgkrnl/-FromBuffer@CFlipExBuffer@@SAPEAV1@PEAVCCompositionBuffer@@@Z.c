/*
 * XREFs of ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00652E0
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000E9BC (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011BD8 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00123EC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C0065318 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C0065428 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00656C4 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0065748 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

struct CFlipExBuffer *__fastcall CFlipExBuffer::FromBuffer(struct CCompositionBuffer *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)a1 + 80LL))(a1) )
    return a1;
  return (struct CFlipExBuffer *)v2;
}
