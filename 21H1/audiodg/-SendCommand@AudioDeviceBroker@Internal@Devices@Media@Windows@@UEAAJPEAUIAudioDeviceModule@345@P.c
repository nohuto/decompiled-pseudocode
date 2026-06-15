/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x1400510A0
 * Callers:
 *     <none>
 * Callees:
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140011AA0 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140048ECC (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1400490C0 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140049B34 (--$GetActivationFactory@V-$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004C7CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  void *v7; // rsi
  int v8; // ebx
  DWORD v10; // r12d
  struct KSIDENTIFIER *v11; // rdi
  const unsigned __int16 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rbx
  const OLECHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v16; // r14
  int v17; // eax
  void *v18; // rax
  SIZE_T cb; // [rsp+30h] [rbp-49h] BYREF
  ULONG v20; // [rsp+38h] [rbp-41h] BYREF
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+48h] [rbp-31h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBroker *v25; // [rsp+60h] [rbp-19h]
  HSTRING_HEADER v26; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+80h] [rbp+7h]

  v25 = this;
  cb = 0LL;
  v20 = 0;
  v24 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  string = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    v8 = -2147467261;
    goto LABEL_3;
  }
  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
         a3,
         (char *)&cb + 4);
  if ( v8 < 0 )
    goto LABEL_3;
  v10 = HIDWORD(cb) + 48;
  v11 = (struct KSIDENTIFIER *)CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
  if ( !v11 )
  {
    v8 = -2147024882;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v20);
  if ( v8 >= 0 )
  {
    WindowsDeleteString(string);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &string);
    if ( v8 >= 0 )
    {
      v13 = (__int64 *)Windows::Internal::StringReference::StringReference(
                         (HSTRING *)&v26,
                         (const unsigned __int16 (*)[35])v12);
      v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReaderStatics>>(
             *v13,
             &v24);
      if ( v8 >= 0 )
      {
        v14 = v24;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v14 + 48LL))(
               v14,
               a3,
               &v22);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v22 + 112LL))(
                 v22,
                 HIDWORD(cb),
                 v11 + 2);
          if ( v8 >= 0 )
          {
            v11->Id = 2;
            v11->Flags = 1;
            v11->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v8 = CLSIDFromString(StringRawBuffer, &v11[1].Set);
            if ( v8 >= 0 )
            {
              v16 = (RTL_SRWLOCK *)v25;
              v11[1].Id = v20;
              v17 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                      v16,
                      v11,
                      v10,
                      0LL,
                      0,
                      (unsigned int *)&cb);
              v8 = v17;
              if ( v17 && v17 != -2147024662 )
                goto LABEL_28;
              if ( (_DWORD)cb )
              {
                v18 = CoTaskMemAlloc((unsigned int)cb);
                v7 = v18;
                if ( !v18 )
                {
                  v8 = -2147024882;
                  goto LABEL_29;
                }
                v8 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                       v16,
                       v11,
                       v10,
                       v18,
                       cb,
                       (unsigned int *)&cb);
              }
              if ( v8 != -2147024662 )
              {
LABEL_28:
                if ( v8 >= 0 )
                {
                  v27 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &v26,
                    L"Windows.Storage.Streams.DataWriter",
                    0x23u,
                    0x22u);
                  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
                         v27,
                         &v23);
                  if ( v8 >= 0 )
                  {
                    if ( !v7
                      || (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v23 + 96LL))(
                                 v23,
                                 (unsigned int)cb,
                                 v7),
                          v8 >= 0) )
                    {
                      v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v23 + 248LL))(
                             v23,
                             a4);
                      if ( v8 >= 0 )
                        v8 = 0;
                    }
                  }
                }
                goto LABEL_29;
              }
              v8 = -2147418113;
            }
          }
        }
      }
    }
  }
LABEL_29:
  CoTaskMemFree(v11);
  if ( v7 )
    CoTaskMemFree(v7);
LABEL_3:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  return (unsigned int)v8;
}
