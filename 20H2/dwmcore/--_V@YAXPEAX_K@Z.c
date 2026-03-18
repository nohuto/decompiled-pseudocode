/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1800E36F4
 * Callers:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180024494 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18005C4C4 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18005C878 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18006E07C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180256CA4 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1)
{
  operator delete(a1);
}
