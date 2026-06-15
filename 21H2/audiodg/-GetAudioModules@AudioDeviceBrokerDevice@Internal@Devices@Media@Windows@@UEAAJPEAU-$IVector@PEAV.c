/*
 * XREFs of ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140022CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001FDE0 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140024C8C (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140028700 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140050A9C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x140057F70 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        __int64 a2)
{
  unsigned int v2; // edi
  int v5; // ecx
  LPVOID v6; // rax
  unsigned int *v7; // rbx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct _GUID *v12; // r15
  const unsigned __int16 *v13; // r14
  struct _GUID v14; // xmm0
  HRESULT v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r9
  HSTRING v20; // [rsp+40h] [rbp-39h] BYREF
  UINT32 length[2]; // [rsp+48h] [rbp-31h] BYREF
  void *v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-19h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp-9h] BYREF
  KSIDENTIFIER v26; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  SIZE_T cb; // [rsp+E8h] [rbp+6Fh] BYREF
  int v29; // [rsp+F0h] [rbp+77h]
  HSTRING string; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  v22 = 0LL;
  LODWORD(cb) = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B1,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80070057LL);
    goto LABEL_31;
  }
  *(&v26.Alignment + 2) = 0x100000001LL;
  v26.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
         this,
         &v26,
         0x20u,
         0LL,
         0,
         (unsigned int *)&cb);
  if ( ((int)(v5 + 0x80000000) < 0 || v5 == -2147024662) && (_DWORD)cb )
  {
    v6 = CoTaskMemAlloc((unsigned int)cb);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v22,
      v6);
    v7 = (unsigned int *)v22;
    if ( v22 )
    {
      memset_0(v22, 0, (unsigned int)cb);
      v8 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
             this,
             &v26,
             0x20u,
             v7,
             cb,
             (unsigned int *)&cb);
      if ( v8 >= 0 )
      {
        if ( (unsigned int)cb >= 8 )
        {
          v11 = v7[1];
          if ( (unsigned int)cb >= (unsigned __int64)(8 * v11 + 8) )
          {
            v29 = 0;
            v12 = (struct _GUID *)(v7 + 2);
            if ( !(_DWORD)v11 )
              goto LABEL_31;
            v13 = (const unsigned __int16 *)(v7 + 9);
            while ( 1 )
            {
              v14 = *v12;
              string = 0LL;
              *(_QWORD *)length = 0LL;
              v25 = v14;
              WindowsDeleteString(0LL);
              v20 = 0LL;
              v15 = GuidToHString(&v25, &v20);
              v8 = v15;
              if ( v15 < 0 )
                break;
              v15 = StringCchLengthW(v13, 0x80uLL, (unsigned __int64 *)length);
              v8 = v15;
              if ( v15 < 0 )
              {
                v17 = 2534LL;
                goto LABEL_28;
              }
              WindowsDeleteString(string);
              string = 0LL;
              v15 = WindowsCreateString(v13, length[0], &string);
              v8 = v15;
              if ( v15 < 0 )
              {
                v17 = 2535LL;
                goto LABEL_28;
              }
              v24 = string;
              *(_QWORD *)&v25.Data1 = v20;
              *(_QWORD *)length = this;
              Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
                &v23,
                (HSTRING *)&v25,
                (unsigned int *)v13 - 3,
                &v24,
                (unsigned int *)v13 - 2,
                (unsigned int *)v13 - 1,
                (struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice **)length);
              v16 = v23;
              if ( !v23 )
              {
                v8 = -2147024882;
                v17 = 2543LL;
                v18 = 2147942414LL;
                goto LABEL_29;
              }
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, v23);
              v23 = 0LL;
              v12 = (struct _GUID *)((char *)v12 + 284);
              v13 += 142;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              WindowsDeleteString(string);
              string = 0LL;
              WindowsDeleteString(v20);
              if ( ++v29 >= v7[1] )
                goto LABEL_31;
            }
            v17 = 2533LL;
LABEL_28:
            v18 = (unsigned int)v15;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
              (const char *)v18);
            WindowsDeleteString(string);
            string = 0LL;
            WindowsDeleteString(v20);
LABEL_30:
            v2 = v8;
            goto LABEL_31;
          }
          v10 = 2523LL;
        }
        else
        {
          v10 = 2521LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
          (const char *)0x8000FFFFLL);
        v2 = -2147418113;
        goto LABEL_31;
      }
      v9 = 2518LL;
    }
    else
    {
      v8 = -2147024882;
      v9 = 2510LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_30;
  }
LABEL_31:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v22,
    0LL);
  return v2;
}
