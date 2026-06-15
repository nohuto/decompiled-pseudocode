/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180031784
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800133CC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009CF0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000CD64 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180031A54 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180031C0C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180032160 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800322B0 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180032DB4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(
        ApplicationSpecificEndpointInfo *this)
{
  SIZE_T v2; // rbx
  _WORD *v3; // rax
  _WORD *v4; // rsi
  _WORD *i; // rcx
  unsigned int v6; // r14d
  DWORD v7; // r15d
  unsigned int v8; // eax
  int Key; // eax
  void *v10; // rbx
  __int64 v12; // rdx
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-21h] BYREF
  DWORD cchValueName; // [rsp+70h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v17; // [rsp+74h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+78h] [rbp-11h] BYREF
  LPVOID pv[2]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v20[4]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, &hKey) < 0 )
    goto LABEL_20;
  cValues = 0;
  cbMaxValueNameLen = 0;
  if ( RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL) )
    goto LABEL_20;
  v2 = ++cbMaxValueNameLen;
  v3 = CoTaskMemAlloc(v2 * 2);
  v4 = v3;
  pv[1] = v3;
  if ( v3 )
  {
    for ( i = &v3[v2]; v3 != i; ++v3 )
      *v3 = 0;
  }
  if ( !v4 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_30;
  }
  v7 = 0;
  if ( !cValues )
  {
LABEL_19:
    CoTaskMemFree(v4);
LABEL_20:
    v6 = 0;
    goto LABEL_21;
  }
  while ( 1 )
  {
    cchValueName = cbMaxValueNameLen;
    v8 = RegEnumValueW(hKey, v7, v4, &cchValueName, 0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1B2,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             (const char *)v8);
      goto LABEL_30;
    }
    if ( cchValueName )
      break;
LABEL_18:
    if ( ++v7 >= cValues )
      goto LABEL_19;
  }
  std::wstring::wstring(v20, v4);
  if ( std::wstring::find(v20) != -1 )
  {
LABEL_17:
    std::wstring::~wstring((__int64)v20);
    goto LABEL_18;
  }
  pv[0] = 0LL;
  Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, v4, (unsigned __int16 **)pv);
  v6 = Key;
  v10 = pv[0];
  if ( Key >= 0 )
  {
    if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                v4,
                &v17,
                (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v18) >= 0 )
    {
      Key = ApplicationSpecificEndpointInfo::UpdateState(this, v18, (unsigned int)v17, v10);
      v6 = Key;
      if ( Key < 0 )
      {
        v12 = 461LL;
        goto LABEL_26;
      }
    }
    if ( v10 )
      CoTaskMemFree(v10);
    goto LABEL_17;
  }
  v12 = 451LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)Key);
  if ( v10 )
    CoTaskMemFree(v10);
  std::wstring::~wstring((__int64)v20);
LABEL_30:
  if ( v4 )
    CoTaskMemFree(v4);
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
