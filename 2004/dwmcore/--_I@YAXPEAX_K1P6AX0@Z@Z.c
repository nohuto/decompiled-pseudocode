/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009B05C
 * Callers:
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x180048AA4 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180048EFC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180097A9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18009A90C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800AFE88 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800B00F0 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800B1FA0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1800B4190 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180155244 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019E16C (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801AC6EC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801C8C7C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801D53F8 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1801F1AF0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180257AB4 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
