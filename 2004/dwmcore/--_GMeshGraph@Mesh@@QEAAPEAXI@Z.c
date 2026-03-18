/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800830F8
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180052A20 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180081270 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18009AC84 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x180058340 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  Mesh::MeshGraph::~MeshGraph(this);
  operator delete(this, 0x88uLL);
  return this;
}
