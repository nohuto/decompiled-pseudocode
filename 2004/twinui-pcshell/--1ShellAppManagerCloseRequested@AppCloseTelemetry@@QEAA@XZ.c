/*
 * XREFs of ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x180174934
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$1 @ 0x180102918 (_CApplicationFrameService--OnCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180174730 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801753C8 (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180178184 (-reset@-$shared_object@V-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this)
{
  *(_QWORD *)this = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::details::shared_object<wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppCloseTelemetry::ShellAppManagerCloseRequested *)((char *)this + 8));
}
