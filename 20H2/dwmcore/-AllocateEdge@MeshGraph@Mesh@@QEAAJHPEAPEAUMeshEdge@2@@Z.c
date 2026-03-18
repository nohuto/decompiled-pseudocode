/*
 * XREFs of ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x18019F834
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18019F94C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateEdge(Mesh::MeshGraph *this, __int64 a2, struct Mesh::MeshEdge **a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = *((int *)this + 22);
  if ( (int)v3 + (int)a2 > *((_QWORD *)this + 9) )
    return 2147942414LL;
  if ( v3 >= *((_QWORD *)this + 9) )
  {
    ((void (__fastcall *)(Mesh::MeshGraph *, __int64, struct Mesh::MeshEdge **))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3);
    __debugbreak();
  }
  *a3 = (struct Mesh::MeshEdge *)(*((_QWORD *)this + 10) + 88 * v3);
  result = 0LL;
  *((_DWORD *)this + 22) = v3 + a2;
  return result;
}
