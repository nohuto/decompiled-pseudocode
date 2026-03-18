/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1800E33E4
 * Callers:
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x180048AA4 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180048EFC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180097A9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18009A90C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180257AB4 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1)
{
  operator delete(a1);
}
