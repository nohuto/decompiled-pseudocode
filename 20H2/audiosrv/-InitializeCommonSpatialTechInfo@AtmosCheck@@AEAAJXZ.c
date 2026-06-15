/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005F824
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F038 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 */

__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(AtmosCheck *this)
{
  LPOLESTR *v2; // rbx
  HRESULT v3; // ebx
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  size_t v6; // rsi
  size_t v7; // rbp
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // eax
  _BYTE *v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 96) )
    goto LABEL_20;
  v2 = (LPOLESTR *)((char *)this + 312);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 39,
    0LL);
  v3 = StringFromCLSID(&DOLBY_ATMOS_MAT_SPATIAL_ENCODER, v2);
  if ( v3 < 0 )
  {
    v13 = 2589LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 47,
    0LL);
  v3 = StringFromCLSID(&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER, (LPOLESTR *)this + 47);
  if ( v3 < 0 )
  {
    v13 = 2597LL;
    goto LABEL_25;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 43,
    0LL);
  v3 = StringFromCLSID(&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER, (LPOLESTR *)this + 43);
  if ( v3 < 0 )
  {
    v13 = 2605LL;
    goto LABEL_25;
  }
  v4 = 0x7FFFFFFFLL;
  v5 = L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = 2 * (v5 - L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}");
  v7 = v6 + 2;
  v8 = (char *)CoTaskMemAlloc(v6 + 2);
  v9 = v8;
  if ( v8 )
  {
    if ( v6 )
    {
      if ( v7 < v6 )
      {
        memset_0(v8, 0, v7);
        *(_DWORD *)_o__errno(v14) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v8, L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}", v6);
      }
    }
    *(_WORD *)&v9[v6] = 0;
  }
  if ( (char *)this + 280 != &v15 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)this + 35,
      v9);
    v9 = 0LL;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( !*((_QWORD *)this + 35) )
  {
    v3 = -2147024882;
    v13 = 2610LL;
    goto LABEL_25;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 51,
    0LL);
  v3 = StringFromCLSID(&DTSX_HEADPHONES_SPATIAL_ENCODER, (LPOLESTR *)this + 51);
  if ( v3 < 0 )
  {
    v13 = 2618LL;
    goto LABEL_25;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 55,
    0LL);
  v3 = StringFromCLSID(&DTSX_TWOSPEAKER_SPATIAL_ENCODER, (LPOLESTR *)this + 55);
  if ( v3 < 0 )
  {
    v13 = 2626LL;
    goto LABEL_25;
  }
LABEL_20:
  v10 = 0;
  v11 = (char *)this + 272;
  do
  {
    ++v10;
    *v11 = 0;
    v11 += 32;
  }
  while ( v10 < 6 );
  return 0LL;
}
