/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005E64
 * Callers:
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch$2 @ 0x1800CC84A (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--catch$2.c)
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::catch$4 @ 0x1800CE707 (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--catch$4.c)
 *     __lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator()_::_1_::catch$4 @ 0x1800D18B9 (__lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator()_--_1_--catch$4.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$15 @ 0x1800D1CA0 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$15.c)
 *     __lambda_2a53bdf349f1cabe85dc2bb8886a879d_::operator()_::_1_::catch$1 @ 0x1800D20D2 (__lambda_2a53bdf349f1cabe85dc2bb8886a879d_--operator()_--_1_--catch$1.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$20 @ 0x1800D2321 (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$20.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$12 @ 0x1800D2A81 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$20 @ 0x1800D3BBE (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$20.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch$15 @ 0x1800D47A9 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--catch$15.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$8 @ 0x1800D4B1E (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$29 @ 0x1800D4E2D (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D4E2D.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180005C5C (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
