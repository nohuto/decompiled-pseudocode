/*
 * XREFs of ??0JointResizeAcc@@QEAA@XZ @ 0x18041EBCC
 * Callers:
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x18041EB08 (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIJointResizeAcc@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18041EB8C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawEleme_ea_18041EB8C.c)
 */

JointResizeAcc *__fastcall JointResizeAcc::JointResizeAcc(JointResizeAcc *this)
{
  JointResizeAcc *result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>::`vftable'{for `IDragProvider'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IJointResizeAcc>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &JointResizeAcc::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>'};
  *((_QWORD *)this + 1) = &JointResizeAcc::`vftable'{for `IDragProvider'};
  *((_QWORD *)this + 2) = &JointResizeAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IJointResizeAcc>'};
  *((_QWORD *)this + 4) = &JointResizeAcc::`vftable'{for `CWRLImpWndProc<JointResizeAcc>'};
  result = this;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
