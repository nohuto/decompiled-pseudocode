/*
 * XREFs of _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x180146B17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DisplayOcclusionContextProvider::Broadcast_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>(a2 + 48);
}
