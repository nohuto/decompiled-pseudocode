/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004CB1C
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004F640 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140018DE4 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        __int64 a4)
{
  unsigned int v8; // esi
  HRESULT v9; // edi
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  char v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  int v17; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+48h] BYREF

  v8 = 0;
  v22 = 0;
  v20 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      v10 = 0LL;
      v20 = 0LL;
      v9 = 0;
      v19 = 0LL;
      v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v11
        && (v14 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                    (__int64)v11,
                    v12,
                    v13),
            (v19 = v14) != 0) )
      {
        v19 = 0LL;
        v10 = v14;
        v20 = v14;
      }
      else
      {
        v9 = -2147024882;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      if ( v9 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(*(_QWORD *)(a1 + 104), &v22);
        if ( v22 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            result = 0;
            v17 = 0;
            v15 = *(_QWORD *)(a1 + 104);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, v8, &v19);
            if ( v9 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL))(v19, &string1);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 64LL))(v19, &v17);
            if ( v17 == a3 )
            {
              v9 = WindowsCompareStringOrdinal(string1, a2, &result);
              if ( v9 < 0 )
                break;
              if ( !result )
              {
                v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 104LL))(v10, v19);
                if ( v9 < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            if ( ++v8 >= v22 )
              goto LABEL_17;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        }
        else
        {
LABEL_17:
          v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, a4);
        }
      }
    }
    else
    {
      v9 = -2147024809;
    }
  }
  else
  {
    v9 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v9;
}
