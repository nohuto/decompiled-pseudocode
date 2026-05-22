/*
 * XREFs of ??1?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180157A28
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$4 @ 0x18015AD8D (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_18015AD8D.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

HRESULT __fastcall std::pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>::~pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  HRESULT result; // eax

  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  result = WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  return result;
}
