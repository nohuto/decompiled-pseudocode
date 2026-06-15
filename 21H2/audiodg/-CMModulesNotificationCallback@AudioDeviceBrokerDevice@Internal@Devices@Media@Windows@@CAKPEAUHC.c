/*
 * XREFs of ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140021F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140014338 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014798 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A634 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140020D6C (--1-$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncod.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x140053898 (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140055DDC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  if ( a2 && *(_QWORD *)(a2 + 144) == a1 && a3 > 0 )
  {
    if ( a3 <= 2 )
    {
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a2 + 200), &v13);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(a2 + 112),
        0LL);
      *(_BYTE *)(a2 + 208) = 1;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    }
    else if ( a3 == 6 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 )
      {
        if ( *(_DWORD *)(a4 + 28) )
        {
          if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)&GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data1
            && *(_QWORD *)(a4 + 16) == *(_QWORD *)GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data4
            && *(_DWORD *)(a4 + 28) >= 0x28u
            && *(_QWORD *)(a4 + 32) == *(_QWORD *)(a2 + 120)
            && *(_QWORD *)(a4 + 40) == *(_QWORD *)(a2 + 128) )
          {
            v15 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Storage.Streams.DataWriter",
              0x23u,
              0x22u);
            v11 = 0LL;
            if ( (int)Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v15, &v11) >= 0
              && v11
              && (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 96LL))(
                   v11,
                   *(unsigned int *)(a4 + 28),
                   a4 + 32) >= 0 )
            {
              v7 = v11;
              v8 = v12;
              v12 = 0LL;
              if ( v8 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
              if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 248LL))(v7, &v12) >= 0
                && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 192) + 104LL))(
                     *(_QWORD *)(a2 + 192),
                     v12) >= 0 )
              {
                wil::details::SetEvent(*(wil::details **)(a2 + 184), v9);
              }
            }
          }
        }
      }
      wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>(&v13);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v12);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v11);
    }
  }
  return 0LL;
}
