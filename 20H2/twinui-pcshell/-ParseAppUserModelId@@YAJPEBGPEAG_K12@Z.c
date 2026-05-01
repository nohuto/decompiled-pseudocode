/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x180040410
 * Callers:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180040164 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800402C4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x1802C9224 (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1802D9FA4 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  unsigned __int16 *v5; // rdi
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  signed __int64 v9; // r8
  wchar_t *v10; // rax
  int v11; // r9d
  wchar_t v12; // cx
  wchar_t *v13; // rax
  wchar_t *v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  char *v17; // rdx
  unsigned __int16 v18; // ax
  int v19; // edx
  signed __int64 v20; // r8
  unsigned __int16 v21; // ax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  v5 = a4;
  v6 = a2;
  if ( a2 )
    *a2 = 0;
  v7 = a5;
  if ( a4 && a5 )
    *a4 = 0;
  v8 = 130LL;
  v9 = a1 - (char *)Str;
  v10 = Str;
  v11 = 0;
  while ( v8 != -2147483516 )
  {
    v12 = *(wchar_t *)((char *)v10 + v9);
    if ( !v12 )
      break;
    *v10++ = v12;
    if ( !--v8 )
    {
      --v10;
      v11 = -2147024774;
      break;
    }
  }
  *v10 = 0;
  if ( v11 < 0 )
    return (unsigned int)-2147024809;
  v13 = wcsrchr(Str, 0x21u);
  v14 = v13;
  if ( Str[0] != 33 && v13 && v13[1] )
  {
    *v13 = 0;
    v15 = 1;
    if ( !v6 )
      goto LABEL_22;
    v16 = 65LL;
    v17 = (char *)((char *)Str - (char *)v6);
    v15 = 0;
    while ( v16 != -2147483581 )
    {
      v18 = *(unsigned __int16 *)((char *)v6 + (_QWORD)v17);
      if ( !v18 )
        break;
      *v6++ = v18;
      if ( !--v16 )
      {
        --v6;
        v15 = -2147024774;
        break;
      }
    }
    *v6 = 0;
    if ( v15 >= 0 )
    {
LABEL_22:
      if ( v5 )
      {
        v19 = 0;
        if ( a5 - 1 > 0x7FFFFFFE )
          v19 = -2147024809;
        if ( v19 < 0 )
        {
          if ( !a5 )
            return (unsigned int)v19;
        }
        else
        {
          v19 = 0;
          if ( a5 )
          {
            v20 = (char *)v14 - (char *)v5;
            while ( 2147483646 - a5 + v7 )
            {
              v21 = *(unsigned __int16 *)((char *)v5 + v20 + 2);
              if ( !v21 )
                break;
              *v5++ = v21;
              if ( !--v7 )
                goto LABEL_31;
            }
          }
          else
          {
LABEL_31:
            --v5;
            v19 = -2147024774;
          }
        }
        *v5 = 0;
        return (unsigned int)v19;
      }
    }
    return (unsigned int)v15;
  }
  return 2147942487LL;
}
