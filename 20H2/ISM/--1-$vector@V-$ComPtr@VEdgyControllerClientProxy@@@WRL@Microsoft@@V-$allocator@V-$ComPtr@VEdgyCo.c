/*
 * XREFs of ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800492A4
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180176F60 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV-$allocator@VEdge@@@0@@Z.c)
 *     ??1Edge@@QEAA@XZ @ 0x180176FBC (--1Edge@@QEAA@XZ.c)
 *     _Edge::Edge_::_1_::dtor$2 @ 0x1801786B9 (_Edge--Edge_--_1_--dtor$2.c)
 *     _Edge::Edge_::_1_::dtor$2_0 @ 0x18017874D (_Edge--Edge_--_1_--dtor$2_0.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180178924 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178A10 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180179AA0 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::~vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>()
{
  return std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy();
}
