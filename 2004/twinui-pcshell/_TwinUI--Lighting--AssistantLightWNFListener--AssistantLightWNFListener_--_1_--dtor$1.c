/*
 * XREFs of _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$1 @ 0x18044D5EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>::~unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>(*(_QWORD *)(a2 + 144) + 8LL);
}
