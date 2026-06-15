/*
 * XREFs of ?get_NotificationData@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x14005A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UIAudioDeviceModule@Devices@Media@Windows@@@?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x14002031C (--$query_to@UIAudioDeviceModule@Devices@Media@Windows@@@-$com_ptr_t@UIAudioDeviceModule@Devices@.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::get_NotificationData(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Storage::Streams::IBuffer **a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v2 = -2147467261;
    v3 = 197LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::query_to<Windows::Media::Devices::IAudioDeviceModule>(
         (__int64 *)this + 9,
         a2);
  if ( v2 < 0 )
  {
    v3 = 198LL;
    goto LABEL_3;
  }
  return 0LL;
}
