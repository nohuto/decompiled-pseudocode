/*
 * XREFs of ??1?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B8528
 * Callers:
 *     _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::dtor$1 @ 0x180077710 (_CAudioSessionManagerProvider--GetAudioSessionManagerInternal_--_1_--dtor$1.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x18007A989 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x1800BA692 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$10.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$1 @ 0x1800EB66D (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$19 @ 0x1800ECB72 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$19.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

unsigned int __fastcall wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v1);
  return result;
}
