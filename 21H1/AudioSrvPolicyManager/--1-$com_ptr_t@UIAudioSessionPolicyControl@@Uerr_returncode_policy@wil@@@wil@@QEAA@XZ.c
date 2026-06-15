/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000D35C
 * Callers:
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$0 @ 0x180040C1F (_GetPolicyVolumeForAudioStream_--_1_--dtor$0.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$1 @ 0x180040C31 (_GetPolicyVolumeForAudioStream_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$6 @ 0x180040E86 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$6.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$4 @ 0x180041018 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$4.c)
 *     _std::_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___::_Do_call_::_1_::dtor$0 @ 0x18004102A (_std--_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___--_.c)
 *     _CApplication::DelinkProcess_::_1_::dtor$1 @ 0x1800412F7 (_CApplication--DelinkProcess_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x180041C46 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$5.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x180041D9F (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180041DD5 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CStreamStoppedWorkItem::Invoke_::_1_::dtor$0 @ 0x18004211F (_CStreamStoppedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x18004226F (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x180042596 (_ApplicationSpecificEndpointInfo--GetPersistentId_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
