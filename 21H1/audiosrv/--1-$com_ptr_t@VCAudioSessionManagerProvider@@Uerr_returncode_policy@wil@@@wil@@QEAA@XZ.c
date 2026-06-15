/*
 * XREFs of ??1?$com_ptr_t@VCAudioSessionManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180069B4C
 * Callers:
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x18007A919 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18007A977 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__ @ 0x18007D700 (_dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800BA686 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x1800EB661 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x1800ECB66 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$18.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  return result;
}
