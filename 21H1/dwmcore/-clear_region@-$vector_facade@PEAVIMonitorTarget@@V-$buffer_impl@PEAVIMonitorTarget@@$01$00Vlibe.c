/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180168250
 * Callers:
 *     ?SyncLockForParallelMode@CRenderTargetManager@@QEAAXXZ @ 0x18003AFA4 (-SyncLockForParallelMode@CRenderTargetManager@@QEAAXXZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180050C90 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801A09B8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A42DC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180240ED8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180158D2C (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 */

__int64 __fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = (v3 - v5) >> 3;
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 8 * a3;
  if ( a3 != v6 )
  {
    v10 = 0LL;
    *(_QWORD *)&v9 = v5;
    *((_QWORD *)&v9 + 1) = v6;
    v12 = 0LL;
    v11 = v9;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      (__int64)&v9,
      (const void *)(v7 + v5),
      v5 + 8 * v6,
      (__int64 *)&v11);
    v3 = a1[1];
  }
  result = v3 - v7;
  a1[1] = result;
  return result;
}
