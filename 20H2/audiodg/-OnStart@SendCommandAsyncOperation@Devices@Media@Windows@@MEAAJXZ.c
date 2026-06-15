/*
 * XREFs of ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x140058B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VModuleCommandResult@Devices@Media@Windows@@X@?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@WRL@Microsoft@@@Z @ 0x14001EDD8 (--$-4VModuleCommandResult@Devices@Media@Windows@@X@-$com_ptr_t@UIModuleCommandResult@Devices@Med.c)
 *     ??$?8UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x14001EE10 (--$-8UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$co.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x140021160 (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140053E74 (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1400563B0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::OnStart(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v16; // [rsp+80h] [rbp+38h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+40h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  __int64 v19; // [rsp+98h] [rbp+50h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(
    (__int64 *)&v17,
    *(_QWORD *)(*((_QWORD *)this + 21) + 96LL));
  if ( !wil::operator==<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>(&v17) )
  {
    v5 = *((_QWORD *)this + 22);
    v6 = *((_QWORD *)this + 21);
    v7 = v17;
    v8 = *v17;
    v9 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v18);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64 *))(v8 + 56))(v7, v6, v5, v9);
    v2 = v10;
    if ( v10 >= 0 )
    {
      v14[0] = v18;
      v16 = 0;
      v11 = Microsoft::WRL::Details::Make<Windows::Media::Devices::ModuleCommandResult,enum Windows::Media::Devices::SendCommandStatus,Windows::Storage::Streams::IBuffer *>(
              &v19,
              &v16,
              v14);
      wil::com_ptr_t<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>::operator=<Windows::Media::Devices::ModuleCommandResult,void>(
        (__int64 *)this + 19,
        v11);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( wil::operator==<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>((_QWORD *)this + 19) )
      {
        v2 = -2147024882;
        v3 = 2147942414LL;
        v4 = 1802LL;
        goto LABEL_12;
      }
      v10 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion((__int64)this);
      v2 = v10;
      if ( v10 >= 0 )
      {
        v2 = 0;
        goto LABEL_14;
      }
      v4 = 1805LL;
    }
    else
    {
      v4 = 1797LL;
    }
    v3 = (unsigned int)v10;
    goto LABEL_12;
  }
  v2 = -2147467261;
  v3 = 2147500035LL;
  v4 = 1795LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v3);
LABEL_14:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
  return v2;
}
