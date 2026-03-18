/*
 * XREFs of ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1801A16EC
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A173C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateVertex(Mesh::MeshGraph *this, __int64 a2, struct Mesh::MeshVertex **a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = *((int *)this + 8);
  if ( (int)v3 + (int)a2 > *((_QWORD *)this + 2) )
    return 2147942414LL;
  if ( v3 >= *((_QWORD *)this + 2) )
  {
    ((void (__fastcall *)(Mesh::MeshGraph *, __int64, struct Mesh::MeshVertex **))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3);
    __debugbreak();
  }
  *a3 = (struct Mesh::MeshVertex *)(*((_QWORD *)this + 3) + (v3 << 6));
  result = 0LL;
  *((_DWORD *)this + 8) = v3 + a2;
  return result;
}
