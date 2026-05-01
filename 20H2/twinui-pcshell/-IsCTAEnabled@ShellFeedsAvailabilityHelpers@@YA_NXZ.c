/*
 * XREFs of ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800E2884
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E15FC (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008C1D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x1800EE22C (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 */

bool __fastcall ShellFeedsAvailabilityHelpers::IsCTAEnabled(ShellFeedsAvailabilityHelpers *this)
{
  bool v1; // bl
  HKEY v2; // rcx
  int v3; // r9d
  unsigned int *v5; // [rsp+28h] [rbp-71h]
  LPCWCH lpString1; // [rsp+30h] [rbp-69h] BYREF
  WCHAR String2[4]; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int16 v8[8]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v9; // [rsp+50h] [rbp-49h]
  wchar_t v10; // [rsp+60h] [rbp-39h]
  unsigned __int16 v11[8]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v12; // [rsp+80h] [rbp-19h]
  __int128 v13; // [rsp+90h] [rbp-9h]
  __int128 v14; // [rsp+A0h] [rbp+7h]
  __int128 v15; // [rsp+B0h] [rbp+17h]
  __int128 v16; // [rsp+C0h] [rbp+27h]
  __int64 v17; // [rsp+D0h] [rbp+37h]
  int v18; // [rsp+D8h] [rbp+3Fh]
  wchar_t v19; // [rsp+DCh] [rbp+43h]

  v1 = 0;
  *(_OWORD *)v11 = *(_OWORD *)L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess";
  v13 = *(_OWORD *)L"ft\\Windows\\CurrentVersion\\DeviceAccess";
  v12 = *(_OWORD *)L"\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess";
  v15 = *(_OWORD *)L"ntVersion\\DeviceAccess";
  v14 = *(_OWORD *)L"ws\\CurrentVersion\\DeviceAccess";
  v18 = *(_DWORD *)L"ss";
  v17 = *(_QWORD *)L"Access";
  v19 = aSoftwareMicros_16[54];
  v16 = *(_OWORD *)L"n\\DeviceAccess";
  v10 = aActivepolicyco[16];
  *(_OWORD *)v8 = *(_OWORD *)L"ActivePolicyCode";
  lpString1 = 0LL;
  v9 = *(_OWORD *)L"licyCode";
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  if ( SHRegAllocData(v2, v11, v8, v3, (void **)&lpString1, v5) >= 0 )
  {
    wcscpy(String2, L"zh");
    v1 = CompareStringOrdinal(lpString1, -1, String2, -1, 1) == 2;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
  return v1;
}
