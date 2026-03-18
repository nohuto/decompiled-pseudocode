/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1801012A0
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18000B76C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18000C9B4 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18029BF08 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall operator delete[](void *a1)
{
  MIDL_user_free(a1);
}
