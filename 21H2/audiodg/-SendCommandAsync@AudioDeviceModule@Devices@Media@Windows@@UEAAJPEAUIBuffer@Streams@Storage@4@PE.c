/*
 * XREFs of ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14005A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Z @ 0x1400203C4 (--$query_to@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Window.c)
 *     ??1?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140020DAC (--1-$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x14002124C (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     ??I?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@XZ @ 0x140021280 (--I-$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140054118 (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::SendCommandAsync(
        struct Windows::Media::Devices::AudioDeviceModule *a1,
        struct Windows::Storage::Streams::IBuffer *a2,
        __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 *v7; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Media::Devices::AudioDeviceModule *v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct Windows::Storage::Streams::IBuffer *v15; // [rsp+48h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF

  v15 = a2;
  v12 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v13 = a1;
      v7 = wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::operator&(&v12);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
             (volatile signed __int64 **)v7,
             &v13,
             &v15);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v16);
        v8 = wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::query_to<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
               &v12,
               (__int64)v9);
        v4 = v8;
        if ( v8 >= 0 )
        {
          v10 = v16;
          v16 = 0LL;
          v4 = 0;
          *a3 = v10;
          goto LABEL_12;
        }
        v5 = 453LL;
      }
      else
      {
        v5 = 452LL;
      }
      v6 = (unsigned int)v8;
    }
    else
    {
      v4 = -2147467261;
      v5 = 448LL;
      v6 = 2147500035LL;
    }
  }
  else
  {
    v4 = -2147024809;
    v5 = 447LL;
    v6 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v6);
LABEL_12:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>(&v12);
  return v4;
}
