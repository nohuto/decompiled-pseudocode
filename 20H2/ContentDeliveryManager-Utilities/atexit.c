/*
 * XREFs of atexit @ 0x1800CD704
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800039F0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180003A10 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180003AE0 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003B00 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180003B90 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180003C50 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180003C70 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180003C90 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x180003D50 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x180003D70 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings__ @ 0x180003DA0 (ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings__.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x180003DD0 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping__ @ 0x180003E30 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransition.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap__ @ 0x180003E60 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap__ @ 0x180003E90 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap__ @ 0x180003EC0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMap.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap__ @ 0x180003EF0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerTypeTaskHandler.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180003F20 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     _dynamic_initializer_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x180003F50 (_dynamic_initializer_for__UniqueExtendedExecutionSession--s_weakSharedExtendedExecutionSession__.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180003F70 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x180003FA0 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x180003FC0 (std--_dynamic_initializer_for__classic_locale__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x180003FE0 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180004000 (std--_dynamic_initializer_for__initlocks___0.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000D2AC (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000D3B4 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DC54 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DD54 (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180024FDC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800252B0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18002A788 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18007F6AC (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     _onexit_0 @ 0x1800CD670 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
