/*
 * XREFs of ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002F330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DEC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18000D160 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800297FC (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x1800298B0 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002BFA0 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18002EED4 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002EFA8 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::CreativeEventReportedCache::SetEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        struct _FILETIME a4)
{
  char v6; // r12
  WCHAR *v7; // rsi
  WCHAR *StringRawBuffer; // rdx
  bool *v9; // r9
  int DoesSettingExist; // eax
  const unsigned __int16 *v11; // rdx
  unsigned __int16 **v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdi
  const WCHAR *v16; // r8
  LPCWCH *v17; // r8
  const WCHAR *v18; // rdi
  LSTATUS v19; // eax
  int CreativeEventString; // eax
  bool *v21; // r9
  WCHAR *v22; // rdi
  __int64 v23; // rdx
  struct _FILETIME v24; // r9
  unsigned __int16 v26; // [rsp+30h] [rbp-39h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-29h]
  LPCWCH lpString1[4]; // [rsp+48h] [rbp-21h] BYREF
  LPCWCH lpString2[3]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  lpString1[3] = (LPCWCH)-2LL;
  SystemTimeAsFileTime = a4;
  v28 = a3;
  v6 = 0;
  v7 = 0LL;
  memset(lpString1, 0, 24);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v26,
                       v9);
  v13 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    v14 = 782LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    goto LABEL_38;
  }
  v15 = -1LL;
  if ( !(_BYTE)v26 )
    goto LABEL_10;
  v13 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
          *(const WCHAR **)(a1 + 24),
          v11,
          (unsigned __int16 *)lpString1,
          v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x312,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
    v7 = (WCHAR *)lpString1[0];
    goto LABEL_38;
  }
  v6 = 1;
  v7 = (WCHAR *)lpString1[0];
  if ( !lpString1[0] )
    goto LABEL_10;
  v16 = (const WCHAR *)lpString2;
  if ( v31 >= 8 )
    v16 = lpString2[0];
  if ( CompareStringOrdinal(lpString1[0], -1, v16, -1, 1) != 2 )
  {
LABEL_10:
    v17 = lpString2;
    if ( v31 >= 8 )
      v17 = (LPCWCH *)lpString2[0];
    do
      ++v15;
    while ( *((_WORD *)v17 + v15) );
    DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                         *(const WCHAR **)(a1 + 24),
                         L"LastCreativeBatchId",
                         v17,
                         (const unsigned __int16 *)v15);
    v13 = DoesSettingExist;
    if ( DoesSettingExist < 0 )
    {
      v14 = 793LL;
      goto LABEL_15;
    }
    if ( v6 && (_BYTE)v26 )
    {
      v18 = *(const WCHAR **)(a1 + 48);
      v19 = RegDeleteKeyW(HKEY_CURRENT_USER, v18);
      v13 = (unsigned __int16)v19 | 0x80070000;
      if ( v19 <= 0 )
        v13 = v19;
      if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147024894 )
        v13 = 0;
      else
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
          (const char *)(unsigned int)v13,
          (__int64)"RegKey: %ws",
          (const char *)v18);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_38;
      }
    }
  }
  lpString1[0] = 0LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, v28, *(HSTRING *)&SystemTimeAsFileTime, lpString1);
  v13 = CreativeEventString;
  v22 = (WCHAR *)lpString1[0];
  if ( CreativeEventString < 0 )
  {
    v23 = 804LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_36;
  }
  CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                          *(const WCHAR **)(a1 + 48),
                          lpString1[0],
                          &v26,
                          v21);
  v13 = CreativeEventString;
  if ( CreativeEventString < 0 )
  {
    v23 = 808LL;
    goto LABEL_34;
  }
  if ( !(_BYTE)v26 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
                            *(const WCHAR **)(a1 + 48),
                            v22,
                            *(const unsigned __int16 **)&SystemTimeAsFileTime,
                            v24);
    v13 = CreativeEventString;
    if ( CreativeEventString < 0 )
    {
      v23 = 813LL;
      goto LABEL_34;
    }
  }
  v13 = 0;
LABEL_36:
  if ( v22 )
    CoTaskMemFree(v22);
LABEL_38:
  if ( v31 >= 8 )
    operator delete((void *)lpString2[0]);
  v31 = 7LL;
  lpString2[2] = 0LL;
  LOWORD(lpString2[0]) = 0;
  if ( v7 )
    CoTaskMemFree(v7);
  return (unsigned int)v13;
}
