/*
 * XREFs of ?SaveWICBitmapToStreamInternal@CBitmapSaver@@AEAAJPEAUIWICImagingFactory2@@AEBU_GUID@@PEAEPEAUIStream@@PEBG@Z @ 0x180266DB4
 * Callers:
 *     ?SaveBitmap@CBitmapSaver@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180266BCC (-SaveBitmap@CBitmapSaver@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSaver::SaveWICBitmapToStreamInternal(
        CBitmapSaver *this,
        struct IWICImagingFactory2 *a2,
        const struct _GUID *a3,
        unsigned __int8 *a4,
        struct IStream *a5,
        const unsigned __int16 *a6)
{
  GUID v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-69h]
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+58h] [rbp-31h] BYREF
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h] BYREF
  int v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+74h] [rbp-15h]
  GUID v29; // [rsp+78h] [rbp-11h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)_o__wcsicmp(a6, L"png") )
  {
    if ( (unsigned int)_o__wcsicmp(a6, L"jxr") )
    {
      if ( (unsigned int)_o__wcsicmp(a6, L"bmp") )
      {
        v14 = -2147024809;
        v17 = -2147024809;
        v22 = 54;
        goto LABEL_27;
      }
      v10 = GUID_ContainerFormatBmp;
    }
    else
    {
      v10 = GUID_ContainerFormatWmp;
    }
  }
  else
  {
    v10 = GUID_ContainerFormatPng;
  }
  v12 = *(_QWORD *)a2;
  v29 = v10;
  v13 = (*(__int64 (__fastcall **)(struct IWICImagingFactory2 *, GUID *, GUID *, __int64 *))(v12 + 64))(
          a2,
          &v29,
          &GUID_VendorMicrosoftBuiltIn,
          &v24);
  v14 = v13;
  if ( v13 < 0 )
  {
    v22 = 60;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, struct IStream *, __int64))(*(_QWORD *)v24 + 24LL))(v24, a5, 2LL);
    v14 = v13;
    if ( v13 < 0 )
    {
      v22 = 63;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v24 + 80LL))(v24, &v23, 0LL);
      v14 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x42u, 0LL);
        goto LABEL_28;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, 0LL);
      v14 = v13;
      if ( v13 < 0 )
      {
        v22 = 67;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 32LL))(
                v23,
                *(unsigned int *)this,
                *((unsigned int *)this + 1));
        v14 = v13;
        if ( v13 < 0 )
        {
          v22 = 70;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct IWICImagingFactory2 *, _QWORD, _QWORD, const struct _GUID *, _DWORD, int, unsigned __int8 *, __int64 *))(*(_QWORD *)a2 + 160LL))(
                  a2,
                  *(unsigned int *)this,
                  *((unsigned int *)this + 1),
                  a3,
                  *((_DWORD *)this + 3),
                  *((_DWORD *)this + 3) * *((_DWORD *)this + 1),
                  a4,
                  &v25);
          v14 = v13;
          if ( v13 < 0 )
          {
            v22 = 80;
          }
          else
          {
            v27 = *(_DWORD *)this;
            v28 = *((_DWORD *)this + 1);
            v26 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 88LL))(v23, v25, &v26);
            v14 = v13;
            if ( v13 < 0 )
            {
              v22 = 86;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23);
              v14 = v13;
              if ( v13 < 0 )
              {
                v22 = 90;
              }
              else
              {
                v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
                v14 = v13;
                if ( v13 >= 0 )
                  goto LABEL_28;
                v22 = 91;
              }
            }
          }
        }
      }
    }
  }
  v17 = v13;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v17, v22, 0LL);
LABEL_28:
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v14;
}
