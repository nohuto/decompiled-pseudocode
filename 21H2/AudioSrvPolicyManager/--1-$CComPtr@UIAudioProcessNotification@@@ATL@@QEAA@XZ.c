/*
 * XREFs of ??1?$CComPtr@UIAudioProcessNotification@@@ATL@@QEAA@XZ @ 0x180013E1C
 * Callers:
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x18003BA01 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$11 @ 0x18003BD4D (_CProcess--CProcess_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$12 @ 0x18003BD66 (_CProcess--CProcess_--_1_--dtor$12.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x18003BED0 (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x18003BEE2 (_CProcess--RegisterProcessNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x18003C374 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x18003C8B9 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x18003C8CB (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
