/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x180074854
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::SetTriggerState_::_1_::dtor$7 @ 0x1800D5A93 (_Windows--Services--TargetedContent--Internal--SetTriggerState_--_1_--dtor$7.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$8 @ 0x1800D5B59 (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$8.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$1 @ 0x1800D6291 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D6291.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
