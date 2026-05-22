/*
 * XREFs of ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x1800E5F40 (-GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnGestureDirectionChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *ContainerId; // rax

  v1 = *((_QWORD *)this + 15);
  ContainerId = (const struct D2D_VECTOR_2F *)BamoContainerInfoInputObjectProxy::GetContainerId((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerGestureDirectionChanged((Edges *)(v1 + 72), this, ContainerId);
}
