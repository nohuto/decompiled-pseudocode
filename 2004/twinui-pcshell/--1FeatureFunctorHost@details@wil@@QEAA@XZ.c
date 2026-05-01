/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180094CE8
 * Callers:
 *     _wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&__::_1_::dtor$0 @ 0x180094C39 (_wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$8 @ 0x180102972 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$8.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$2 @ 0x18020C025 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x18044D5FF (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$15 @ 0x18044E437 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
