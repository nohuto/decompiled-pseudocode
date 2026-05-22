/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD41C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180013E80 (std--_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy__std::allocator_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IAttachableInputObjectSampleProxy__const_&__::_1_::catch$33 @ 0x1800CD57A (_std--vector_Microsoft--WRL--ComPtr_IAttachableInputObjectSampleProxy__std--allocator_Microsoft-.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD7D8 (--$_Uninitialized_move@PEAV-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@In.c)
 *     ??1?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800CE04C (--1-$vector@V-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800CE144 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@_K1@Z @ 0x1800D3674 (-_Change_array@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Win.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__const_&__::_1_::catch$33 @ 0x180151478 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Holographic--ISpatialGraphNodePropertiesU.c)
 *     _lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator() @ 0x180158878 (_lambda_fa6b829d8739de4b5d4653aa8baa7884_--operator().c)
 *     ?InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x18015FC98 (-InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAE.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x180170C20 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
