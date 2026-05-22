/*
 * XREFs of ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180177CCC
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1801009E0 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1800E63D0 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x1800E6400 (-GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800E6460 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800E6650 (-GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800FFEF0 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800FFF30 (-GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180178E74 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180179780 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x180179870 (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801798B8 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x180179930 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180179998 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180179A24 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyConnection::RegisterControllerClient(
        EdgyConnection *this,
        const unsigned __int16 *a2,
        struct EdgyControllerClientProxy *a3)
{
  Edges *v3; // rbp
  int v5; // eax
  unsigned int v6; // edi
  const struct D2D_VECTOR_2F *ContainerId; // rax
  unsigned int Routing; // eax
  unsigned int RunState; // eax
  const struct D2D_VECTOR_2F *Type; // rax
  const struct D2D_VECTOR_2F *Bounds; // rax
  unsigned int GestureDistance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (EdgyConnection *)((char *)this + 72);
  v5 = Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      193LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  ContainerId = (const struct D2D_VECTOR_2F *)BamoContainerInfoInputObjectProxy::GetContainerId((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDirectionChanged(v3, a3, ContainerId);
  Routing = BamoEdgyControllerClientProxy::GetRouting((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRoutingChanged(v3, a3, Routing);
  RunState = BamoEdgyControllerClientProxy::GetRunState((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRunStateChanged(v3, a3, RunState);
  Type = (const struct D2D_VECTOR_2F *)BamoDragSourceClientProxy::GetType((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex0Changed(v3, a3, Type);
  Bounds = (const struct D2D_VECTOR_2F *)BamoControllerNavigationClientProxy::GetBounds((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex1Changed(v3, a3, Bounds);
  GestureDistance = BamoEdgyControllerClientProxy::GetGestureDistance((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDistanceChanged(v3, a3, GestureDistance);
  return v6;
}
