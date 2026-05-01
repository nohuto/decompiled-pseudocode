/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803C7728
 * Callers:
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800C873C (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800C8838 (-StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1803C2C1C (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180147068 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1803C7958 (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgR_ea_1803C7958.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
