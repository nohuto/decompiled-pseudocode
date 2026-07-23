/*
 * XREFs of LdrpGetRcConfig @ 0x180034A90
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180058CAC (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x18007E4B0 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x18007E6FC (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  __int64 v4; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+48h] [rbp-50h] BYREF
  ULONG *v13; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = -1LL;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = LdrpGetFromMUIMemCache((unsigned __int64)BaseOfImage, 0, 0LL, 8);
  v11 = v7;
  v8 = v7;
  if ( v7 != (_DWORD *)-1LL )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v14[1] = 1LL;
    v14[0] = L"MUI";
    v14[2] = 0LL;
    v10 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v14, 3u, 0x2000030u, (__int64)&v13);
    if ( v10 >= 0 )
    {
      v10 = LdrpAccessResourceDataNoMultipleLanguage((unsigned __int64)BaseOfImage, v13, (unsigned __int64 *)&v11, &v12);
      if ( v10 >= 0 )
      {
        v8 = v11;
        if ( *v11 == -20054323 )
          goto LABEL_8;
        v10 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    if ( a3 )
    {
      if ( v8 )
        v4 = (__int64)v8;
      LdrpSetAlternateResourceModuleHandle((__int64)BaseOfImage, 0LL, 0LL, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}
