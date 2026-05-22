/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor$0 @ 0x18004F920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800CE59C (--1-$vector@V-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows.c)
 */

__int64 __fastcall InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
