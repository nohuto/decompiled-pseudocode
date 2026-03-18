/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801A4214
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A42DC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, __int64 a2, struct Mesh::MeshLine **a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = *((int *)this + 14);
  if ( (int)v3 + (int)a2 > *((_QWORD *)this + 5) )
    return 2147942414LL;
  if ( v3 >= *((_QWORD *)this + 5) )
  {
    ((void (__fastcall *)(Mesh::MeshGraph *, __int64, struct Mesh::MeshLine **))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3);
    __debugbreak();
  }
  *a3 = (struct Mesh::MeshLine *)(*((_QWORD *)this + 6) + 88 * v3);
  result = 0LL;
  *((_DWORD *)this + 14) = v3 + a2;
  return result;
}
