/*
 * XREFs of ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18018EA64
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18009DE78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009E650 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18018F0D8 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipPlaneIterator::HasMoreClipPlanes(ClipPlaneIterator *this)
{
  return *((_DWORD *)this + 2) < *((_DWORD *)this + 12) || *((_DWORD *)this + 3) < *((_DWORD *)this + 28);
}
