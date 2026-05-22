/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x18004DAF2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B440C (--1-$vector@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>(*(_QWORD *)(a2 + 88));
  }
  return result;
}
