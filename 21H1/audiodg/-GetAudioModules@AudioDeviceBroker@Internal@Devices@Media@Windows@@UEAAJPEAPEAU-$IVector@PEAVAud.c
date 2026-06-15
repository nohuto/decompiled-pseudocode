/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140010B40
 * Callers:
 *     <none>
 * Callees:
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140011AA0 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140018DE4 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14004628C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x140049EF8 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAud.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004E900 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        _QWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBroker *v5; // r14
  HRESULT v6; // esi
  void *v7; // rax
  __int64 v8; // rax
  int v9; // eax
  void *v11; // rax
  __int64 v12; // rdx
  struct _GUID *v13; // r13
  const unsigned __int16 *v14; // r15
  __int64 v15; // r14
  HRESULT v16; // eax
  HRESULT v17; // eax
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  __int64 v20; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 length; // [rsp+58h] [rbp-21h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-19h] BYREF
  KSIDENTIFIER v23; // [rsp+70h] [rbp-9h] BYREF
  SIZE_T cb; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+F0h] [rbp+77h] BYREF
  HSTRING v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v3 = 0LL;
  LODWORD(cb) = 0;
  v27 = 0LL;
  v5 = this;
  string = 0LL;
  v20 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v26 = 0LL;
    v6 = 0;
    v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7
      && (v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(v7),
          (v26 = v8) != 0) )
    {
      v26 = 0LL;
      v2 = v8;
      v20 = v8;
    }
    else
    {
      v6 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)v5 + 208)
        && ((*(&v23.Alignment + 2) = 0x100000001LL,
             v23.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6,
             v9 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                    v5,
                    &v23,
                    0x20u,
                    0LL,
                    0,
                    (unsigned int *)&cb),
             (int)(v9 + 0x80000000) < 0)
         || v9 == -2147024662)
        && (_DWORD)cb )
      {
        if ( (unsigned int)cb <= 0x7FFFFFFFuLL && (v11 = CoTaskMemAlloc((unsigned int)cb), (v3 = v11) != 0LL) )
        {
          v6 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                 v5,
                 &v23,
                 0x20u,
                 v11,
                 cb,
                 (unsigned int *)&cb);
          if ( v6 >= 0 )
          {
            if ( (unsigned int)cb < 8 || (v12 = (unsigned int)v3[1], (unsigned int)cb < (unsigned __int64)(8 * v12 + 8)) )
            {
              v6 = -2147418113;
            }
            else
            {
              LODWORD(v26) = 0;
              v13 = (struct _GUID *)(v3 + 2);
              if ( (_DWORD)v12 )
              {
                v14 = (const unsigned __int16 *)(v3 + 9);
                while ( 1 )
                {
                  v22 = *v13;
                  v6 = GuidToHString(&v22, &v27);
                  if ( v6 < 0 )
                    goto LABEL_10;
                  v6 = StringCchLengthW(v14, 0x80uLL, &length);
                  if ( v6 < 0 )
                    goto LABEL_10;
                  v6 = WindowsCreateString(v14, length, &string);
                  if ( v6 < 0 )
                    goto LABEL_10;
                  *(_QWORD *)&v22.Data1 = v5;
                  Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ * &,unsigned long &,HSTRING__ * &,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBroker *>(
                    (unsigned int)&v19,
                    (unsigned int)&v27,
                    (_DWORD)v14 - 12,
                    (unsigned int)&string,
                    (__int64)(v14 - 4),
                    (__int64)(v14 - 2),
                    (__int64)&v22);
                  v15 = v19;
                  if ( !v19 )
                    break;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 104LL))(v2, v19);
                  v16 = WindowsDeleteString(v27);
                  v27 = 0LL;
                  v6 = v16;
                  if ( v16 < 0 )
                  {
                    if ( !v15 )
                      goto LABEL_12;
                    goto LABEL_37;
                  }
                  v17 = WindowsDeleteString(string);
                  string = 0LL;
                  v6 = v17;
                  if ( v17 < 0 )
                  {
                    if ( !v15 )
                      goto LABEL_10;
LABEL_37:
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                    goto LABEL_10;
                  }
                  v19 = 0LL;
                  v13 = (struct _GUID *)((char *)v13 + 284);
                  v14 += 142;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                  LODWORD(v26) = v26 + 1;
                  if ( (unsigned int)v26 >= v3[1] )
                    goto LABEL_39;
                  v5 = this;
                }
                v6 = -2147024882;
              }
              else
              {
LABEL_39:
                v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v2)(
                       v2,
                       &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                       a2);
                if ( v6 >= 0 )
                  v6 = 0;
              }
            }
          }
        }
        else
        {
          v6 = -2147024882;
        }
      }
      else
      {
        v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v2)(
               v2,
               &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
               a2);
      }
    }
LABEL_10:
    if ( v27 )
    {
      WindowsDeleteString(v27);
      v27 = 0LL;
    }
LABEL_12:
    if ( string )
    {
      WindowsDeleteString(string);
      string = 0LL;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  CoTaskMemFree(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v6;
}
