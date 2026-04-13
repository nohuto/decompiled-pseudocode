/*
 * XREFs of ??1RegisterTaskHandlerMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18002F080
 * Callers:
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$1 @ 0x1800CFAB5 (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$1.c)
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$3 @ 0x1800CFAC7 (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$1 @ 0x1800D26EC (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransitio.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$3 @ 0x1800D26FE (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800D26FE.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$5 @ 0x1800D2714 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800D2714.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$1 @ 0x1800D2F65 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindM.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$3 @ 0x1800D2F77 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800D2F77.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$5 @ 0x1800D2F8D (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800D2F8D.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$1 @ 0x1800D2FEB (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerM.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$3 @ 0x1800D2FFD (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800D2FFD.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$5 @ 0x1800D3013 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800D3013.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap___::_1_::dtor$1 @ 0x1800D3224 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping::~RegisterTaskHandlerMapping(
        Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping *this,
        __int64 a2)
{
  char *v2; // rbx
  char *v3; // rcx

  v2 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
}
