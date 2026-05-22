/*
 * XREFs of ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x1801001A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800E6460 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnVertex1Changed(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *Bounds; // rax

  v1 = *((_QWORD *)this + 15);
  Bounds = (const struct D2D_VECTOR_2F *)BamoControllerNavigationClientProxy::GetBounds((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerVertex1Changed((Edges *)(v1 + 72), this, Bounds);
}
