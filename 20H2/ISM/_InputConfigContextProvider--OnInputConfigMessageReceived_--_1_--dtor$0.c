/*
 * XREFs of _InputConfigContextProvider::OnInputConfigMessageReceived_::_1_::dtor$0 @ 0x1800511A1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputConfigContextProvider::OnInputConfigMessageReceived_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>(a2 + 64);
}
