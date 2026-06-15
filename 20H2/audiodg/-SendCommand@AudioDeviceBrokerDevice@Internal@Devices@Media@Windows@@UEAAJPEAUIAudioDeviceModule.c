/*
 * XREFs of ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x140026E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140024B7C (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140028624 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x14005354C (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x140053708 (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140055C1C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  void *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r9
  int ActivationFactory; // eax
  unsigned int v12; // r12d
  LPVOID v13; // rax
  struct KSIDENTIFIER *v14; // rbx
  const unsigned __int16 *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rsi
  const OLECHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v19; // r14
  int v20; // eax
  LPVOID v21; // rax
  SIZE_T cb; // [rsp+30h] [rbp-59h] BYREF
  ULONG v24; // [rsp+38h] [rbp-51h] BYREF
  HSTRING string; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+58h] [rbp-31h] BYREF
  void *v29; // [rsp+60h] [rbp-29h] BYREF
  struct KSIDENTIFIER *v30; // [rsp+68h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v31; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER v32; // [rsp+78h] [rbp-11h] BYREF
  __int64 v33; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v31 = this;
  cb = 0LL;
  v24 = 0;
  v30 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  string = 0LL;
  if ( a2 )
  {
    if ( !a3 )
    {
      v8 = -2147024809;
      v9 = 2598LL;
      v10 = 2147942487LL;
      goto LABEL_46;
    }
    if ( !a4 )
    {
      v8 = -2147467261;
      v9 = 2599LL;
      v10 = 2147500035LL;
      goto LABEL_46;
    }
    *a4 = 0LL;
    ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
                          a3,
                          (char *)&cb + 4);
    v8 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v12 = HIDWORD(cb) + 48;
      v13 = CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v30,
        v13);
      v14 = v30;
      if ( !v30 )
      {
        v8 = -2147024882;
        v9 = 2607LL;
        v10 = 2147942414LL;
        goto LABEL_46;
      }
      ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
                            a2,
                            &v24);
      v8 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        WindowsDeleteString(string);
        ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(*(_QWORD *)a2 + 48LL))(
                              a2,
                              &string);
        v8 = ActivationFactory;
        if ( ActivationFactory >= 0 )
        {
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          v16 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                            (HSTRING *)&v32,
                            (const unsigned __int16 (*)[35])v15);
          ActivationFactory = RoGetActivationFactory(*v16, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v28);
          v8 = ActivationFactory;
          if ( ActivationFactory >= 0 )
          {
            v17 = v28;
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v17 + 48LL))(
                                  v17,
                                  a3,
                                  &v27);
            v8 = ActivationFactory;
            if ( ActivationFactory >= 0 )
            {
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v27 + 112LL))(
                                    v27,
                                    HIDWORD(cb),
                                    v14 + 2);
              v8 = ActivationFactory;
              if ( ActivationFactory >= 0 )
              {
                v14->Id = 2;
                v14->Flags = 1;
                v14->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
                StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
                ActivationFactory = CLSIDFromString(StringRawBuffer, &v14[1].Set);
                v8 = ActivationFactory;
                if ( ActivationFactory >= 0 )
                {
                  v19 = (RTL_SRWLOCK *)v31;
                  v14[1].Id = v24;
                  v20 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
                          v19,
                          v14,
                          v12,
                          0LL,
                          0,
                          (unsigned int *)&cb);
                  v8 = v20;
                  if ( (!v20 || v20 == -2147024662) && (_DWORD)cb )
                  {
                    v21 = CoTaskMemAlloc((unsigned int)cb);
                    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                      &v29,
                      v21);
                    v7 = v29;
                    if ( !v29 )
                    {
                      v8 = -2147024882;
                      v9 = 2636LL;
                      v10 = 2147942414LL;
                      goto LABEL_46;
                    }
                    ActivationFactory = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
                                          v19,
                                          v14,
                                          v12,
                                          v29,
                                          cb,
                                          (unsigned int *)&cb);
                    v8 = ActivationFactory;
                    if ( ActivationFactory < 0 )
                    {
                      v9 = 2641LL;
                      goto LABEL_45;
                    }
                  }
                  else if ( v20 < 0 )
                  {
                    v10 = (unsigned int)v20;
                    v9 = 2645LL;
                    goto LABEL_46;
                  }
                  if ( v26 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                  v33 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &v32,
                    L"Windows.Storage.Streams.DataWriter",
                    0x23u,
                    0x22u);
                  ActivationFactory = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(
                                        v33,
                                        &v26);
                  v8 = ActivationFactory;
                  if ( ActivationFactory >= 0 )
                  {
                    if ( v7
                      && (ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v26 + 96LL))(
                                                v26,
                                                (unsigned int)cb,
                                                v7),
                          v8 = ActivationFactory,
                          ActivationFactory < 0) )
                    {
                      v9 = 2653LL;
                    }
                    else
                    {
                      ActivationFactory = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v26 + 248LL))(
                                            v26,
                                            a4);
                      v8 = ActivationFactory;
                      if ( ActivationFactory >= 0 )
                      {
                        v8 = 0;
                        goto LABEL_48;
                      }
                      v9 = 2655LL;
                    }
                  }
                  else
                  {
                    v9 = 2649LL;
                  }
                  goto LABEL_45;
                }
                v9 = 2619LL;
              }
              else
              {
                v9 = 2615LL;
              }
            }
            else
            {
              v9 = 2614LL;
            }
          }
          else
          {
            v9 = 2613LL;
          }
        }
        else
        {
          v9 = 2612LL;
        }
      }
      else
      {
        v9 = 2611LL;
      }
    }
    else
    {
      v9 = 2603LL;
    }
LABEL_45:
    v10 = (unsigned int)ActivationFactory;
    goto LABEL_46;
  }
  v8 = -2147024809;
  v9 = 2597LL;
  v10 = 2147942487LL;
LABEL_46:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v10);
LABEL_48:
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v28);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v29,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v30,
    0LL);
  return v8;
}
