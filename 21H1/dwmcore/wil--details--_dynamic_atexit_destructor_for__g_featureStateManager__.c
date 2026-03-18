/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180086AD0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::`scalar deleting destructor'((wil *)&qword_1803494E8);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
