/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140026E00
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FE90 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014798 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14002432C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140027CA4 (-TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003C084 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(
        RTL_SRWLOCK *pv,
        HANDLE hSourceHandle)
{
  int NotificationDeviceId; // ebx
  __int64 v5; // rdx
  HANDLE CurrentProcess; // rbx
  HANDLE v8; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !hSourceHandle )
  {
    NotificationDeviceId = -2147467261;
    v5 = 2094LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)NotificationDeviceId);
    return (unsigned int)NotificationDeviceId;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &pv[14].Ptr,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v8 = GetCurrentProcess();
  if ( !DuplicateHandle(v8, hSourceHandle, CurrentProcess, &pv[14].Ptr, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x83B,
             (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
             v9);
  NotificationDeviceId = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::TryRetrieveNotificationDeviceId((Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)pv);
  if ( NotificationDeviceId < 0 )
  {
    v5 = 2113LL;
    goto LABEL_3;
  }
  if ( LOBYTE(pv[17].Ptr) )
  {
    NotificationDeviceId = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(pv);
    if ( NotificationDeviceId < 0 )
    {
      v5 = 2119LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
