/*
 * XREFs of ??0MeshLine@Mesh@@QEAA@XZ @ 0x1800DE3F4
 * Callers:
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18006E570 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshLine *__fastcall Mesh::MeshLine::MeshLine(Mesh::MeshLine *this)
{
  *((_QWORD *)this + 5) = &Mesh::LinearEdgeList::`vftable';
  return this;
}
