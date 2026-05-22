/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x18017095B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800CE0DC (--1-$vector@V-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows.c)
 */

void __fastcall InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>(*(_QWORD *)(a2 + 72));
  }
}
