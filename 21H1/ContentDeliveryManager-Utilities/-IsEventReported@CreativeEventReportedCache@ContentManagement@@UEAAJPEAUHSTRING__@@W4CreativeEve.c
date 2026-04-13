/*
 * XREFs of ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002F110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x1800298B0 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002BFA0 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18002EED4 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002EFA8 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::IsEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        bool *a4,
        bool *a5)
{
  int DoesSettingExist; // eax
  unsigned int v10; // ebx
  WCHAR *StringRawBuffer; // rax
  const WCHAR *v13; // rcx
  const unsigned __int16 *v14; // rdx
  unsigned __int16 **v15; // r9
  int v16; // eax
  const WCHAR *v17; // r8
  int CreativeEventString; // eax
  bool *v19; // r9
  void *v20; // rdi
  __int64 v21; // rdx
  unsigned __int16 v22; // [rsp+30h] [rbp-41h] BYREF
  LPCWCH lpString1[3]; // [rsp+38h] [rbp-39h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-21h] BYREF
  LPCWCH lpString2[3]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  *a5 = 0;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v22,
                       a4);
  v10 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    return v10;
  }
  if ( (_BYTE)v22 )
  {
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
    anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
    v13 = *(const WCHAR **)(a1 + 24);
    lpString1[0] = 0LL;
    v16 = ContentManagement::GetExistingStringSettingRemoveOnFailure(v13, v14, (unsigned __int16 *)lpString1, v15);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v16);
LABEL_17:
      if ( lpString1[0] )
        CoTaskMemFree((LPVOID)lpString1[0]);
      if ( v26 >= 8 )
        operator delete((void *)lpString2[0]);
      return v10;
    }
    if ( lpString1[0] )
    {
      v17 = (const WCHAR *)lpString2;
      if ( v26 >= 8 )
        v17 = lpString2[0];
      if ( CompareStringOrdinal(lpString1[0], -1, v17, -1, 1) == 2 )
      {
        pv[0] = 0LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, (HSTRING)a4, pv);
        v20 = pv[0];
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v21 = 763LL;
          goto LABEL_15;
        }
        CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                *(const WCHAR **)(a1 + 48),
                                (LPCWSTR)pv[0],
                                &v22,
                                v19);
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v21 = 767LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)CreativeEventString);
          if ( v20 )
            CoTaskMemFree(v20);
          goto LABEL_17;
        }
        *a5 = (_BYTE)v22 != 0;
        if ( v20 )
          CoTaskMemFree(v20);
      }
      CoTaskMemFree((LPVOID)lpString1[0]);
    }
    if ( v26 >= 8 )
      operator delete((void *)lpString2[0]);
  }
  return 0LL;
}
