/*
 * XREFs of _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x180145CCA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualTouchpadContextProvider::Broadcast_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>(a2 + 96);
}
