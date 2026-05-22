/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3a442cab04009f9e67bb404f87249554__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x1800D3D30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069708 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D24D8 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_3a442cab04009f9e67bb404f87249554__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call(
        __int64 a1,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks **a2)
{
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v2; // rdi
  __int64 *v3; // rbx
  __int64 result; // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 472LL);
  result = *v3;
  v8 = *v3;
  while ( (__int64 *)result != v3 )
  {
    v5 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)*(unsigned __int8 *)(*(_QWORD *)(result + 40) + 105LL);
    *(_BYTE *)(*(_QWORD *)(result + 40) + 105LL) = 0;
    if ( (_BYTE)v5 )
    {
      v6 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
             v5,
             *(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **)(result + 40),
             v2);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          676LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v6);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v8);
    result = v8;
  }
  return result;
}
