/*
 * XREFs of ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F38EC
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x18004926C (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800496C0 (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180049840 (-erase@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@_ea_180049840.c)
 *     ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x1800F3810 (--_EInputObserverClientProxy@@UEAAPEAXI@Z.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x1800F3920 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x1800FF660 (--_GEdgyControllerClientProxy@@UEAAPEAXI@Z.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1800FF6D4 (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFA20 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180176F60 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV-$allocator@VEdge@@@0@@Z.c)
 *     ??1?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180176FB0 (--1-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1Edge@@QEAA@XZ @ 0x180176FBC (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x180176FEC (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x180177290 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180178764 (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180178924 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178A10 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179560 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179774 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180179AA0 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(v1 + 16))(v1 + 16);
  }
  return result;
}
