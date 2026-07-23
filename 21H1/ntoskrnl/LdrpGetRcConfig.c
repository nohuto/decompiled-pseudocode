/*
 * XREFs of LdrpGetRcConfig @ 0x14033C1FC
 * Callers:
 *     LdrIsResItemExist @ 0x14033BF68 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14037ED3C (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x14033A4C0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037C27C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406F9574 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = -1;
  v12 = 0LL;
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
    v13[1] = 1LL;
    v13[0] = L"MUI";
    v13[2] = 0LL;
    v10 = LdrpSearchResourceSection_U((_DWORD)BaseOfImage, (unsigned int)v13, 3, 33554480, (__int64)&v12);
    if ( v10 >= 0 )
    {
      v10 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
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
        v4 = (int)v8;
      LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}
