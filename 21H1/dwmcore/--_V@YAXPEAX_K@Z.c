/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1800E1F44
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x1800356C8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800359A4 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180039BC0 (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180092F2C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18025A524 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1)
{
  operator delete(a1);
}
