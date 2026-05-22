/*
 * XREFs of ?OnGestureDistanceChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFB60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800E6190 (-GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnGestureDistanceChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  unsigned int GestureDistance; // eax

  v1 = *((_QWORD *)this + 15);
  GestureDistance = BamoEdgyControllerClientProxy::GetGestureDistance((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerGestureDistanceChanged((Edges *)(v1 + 72), this, GestureDistance);
}
