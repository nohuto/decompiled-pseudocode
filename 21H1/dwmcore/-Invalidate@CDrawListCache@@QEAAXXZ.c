/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A8544
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1800A8394 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800A8460 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18004D38C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx

  if ( *((_QWORD *)this + 3) )
  {
    v5 = *((_DWORD *)this + 4) - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        ++dword_18034937C;
    }
    else
    {
      ++dword_180349370;
    }
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    CDrawListCache::ReleaseDrawListEntries(this, a2, a3, a4);
    *((_BYTE *)this + 100) = 0;
    *((_BYTE *)this + 102) = 0;
  }
}
