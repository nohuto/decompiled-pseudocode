/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x1400561F4
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058870 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140018DC4 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x14002124C (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        _QWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  char v13; // r8
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  unsigned int v17; // esi
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 *v20; // rax
  HRESULT v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v25; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h] BYREF
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v31; // [rsp+88h] [rbp+48h] BYREF

  v31 = 0;
  v28 = 0LL;
  if ( !a4 )
  {
    v8 = -2147467261;
    v9 = 717LL;
LABEL_30:
    v16 = v8;
    goto LABEL_31;
  }
  if ( !a2 )
  {
    v8 = -2147024809;
    v9 = 718LL;
    goto LABEL_30;
  }
  v10 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v28);
  *v10 = 0LL;
  v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v11
    || (v14 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v11,
                v12,
                v13)) == 0 )
  {
    v8 = -2147024882;
    v9 = 720LL;
    goto LABEL_30;
  }
  *v10 = v14;
  v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(
          *(_QWORD *)(a1 + 104),
          &v31);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v9 = 722LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v16);
    goto LABEL_32;
  }
  v17 = 0;
  if ( v31 )
  {
    while ( 1 )
    {
      v27 = 0LL;
      result = 0;
      v25 = 0;
      v18 = *(__int64 **)(a1 + 104);
      v19 = *v18;
      v20 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v27);
      v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v19 + 48))(v18, v17, v20);
      v8 = v21;
      if ( v21 < 0 )
        break;
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL))(v27, &string1);
      v8 = v21;
      if ( v21 < 0 )
      {
        v23 = 734LL;
        goto LABEL_25;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 64LL))(v27, &v25);
      v8 = v21;
      if ( v21 < 0 )
      {
        v23 = 735LL;
        goto LABEL_25;
      }
      if ( v25 == a3 )
      {
        v21 = WindowsCompareStringOrdinal(string1, a2, &result);
        v8 = v21;
        if ( v21 < 0 )
        {
          v23 = 739LL;
          goto LABEL_25;
        }
        if ( !result )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 104LL))(v28, v27);
          v8 = v21;
          if ( v21 < 0 )
          {
            v23 = 743LL;
            goto LABEL_25;
          }
        }
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v27);
      if ( ++v17 >= v31 )
        goto LABEL_18;
    }
    v23 = 733LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v27);
  }
  else
  {
LABEL_18:
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 64LL))(v28, a4);
    v8 = v22;
    if ( v22 < 0 )
    {
      v16 = (unsigned int)v22;
      v9 = 748LL;
      goto LABEL_31;
    }
    if ( !*a4 )
    {
      v8 = -2147467259;
      v9 = 749LL;
      goto LABEL_30;
    }
    v8 = 0;
  }
LABEL_32:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v28);
  return v8;
}
