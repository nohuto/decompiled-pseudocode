/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140019B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140018DF4 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$query_to@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1400202FC (--$query_to@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Wind.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x140021160 (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  void *v7; // rax
  __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v22; // [rsp+58h] [rbp+38h] BYREF
  __int64 v23; // [rsp+60h] [rbp+40h] BYREF
  __int64 v24; // [rsp+68h] [rbp+48h] BYREF

  v24 = 0LL;
  v22 = 0;
  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 1470LL;
LABEL_16:
    v17 = v4;
    goto LABEL_17;
  }
  *a2 = 0LL;
  v6 = (__int64 *)wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v24);
  *v6 = 0LL;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7
    || (v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v7,
                v8,
                v9)) == 0 )
  {
    v4 = -2147024882;
    v5 = 1474LL;
    goto LABEL_16;
  }
  *v6 = v10;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v22);
  v11 = 0;
  if ( v22 )
  {
    while ( 1 )
    {
      v12 = *(__int64 **)(a1 + 64);
      v23 = 0LL;
      v13 = *v12;
      v14 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v23);
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v13 + 48))(v12, v11, v14);
      v4 = v15;
      if ( v15 < 0 )
        break;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL))(v23, v24);
      v4 = v15;
      if ( v15 < 0 )
      {
        v18 = 1488LL;
        goto LABEL_13;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v23);
      if ( ++v11 >= v22 )
        goto LABEL_9;
    }
    v18 = 1484LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v15,
      savedregs);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v23);
  }
  else
  {
LABEL_9:
    v16 = wil::com_ptr_t<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,wil::err_returncode_policy>::query_to<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>>(
            &v24,
            a2);
    v4 = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v5 = 1492LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v17,
        savedregs);
      goto LABEL_18;
    }
    v4 = 0;
  }
LABEL_18:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v24);
  return v4;
}
