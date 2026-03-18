/*
 * XREFs of ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18000C284
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18000BE80 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x1802ABA58 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802ABB00 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveBuffer::Iterator::Step(CPrimitiveBuffer::Iterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 == *((_QWORD *)this + 2) )
    return 0;
  *((_QWORD *)this + 1) = v1 + *((unsigned int *)this + 6);
  return 1;
}
