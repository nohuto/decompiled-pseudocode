/*
 * XREFs of sub_1800E1F38 @ 0x1800E1F38
 * Callers:
 *     sub_1800E21F0 @ 0x1800E21F0 (sub_1800E21F0.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E1F38(__int64 a1, char **a2, _DWORD *a3)
{
  char *v5; // rdi
  int ObjectProperties; // ebx
  __int64 Property; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+28h] [rbp-71h]
  __int64 v19; // [rsp+28h] [rbp-71h]
  __int64 v20; // [rsp+30h] [rbp-69h]
  __int64 v21; // [rsp+30h] [rbp-69h]
  unsigned int v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  __int128 v24; // [rsp+50h] [rbp-49h]
  int v25; // [rsp+60h] [rbp-39h]
  int v26; // [rsp+64h] [rbp-35h]
  __int64 v27; // [rsp+68h] [rbp-31h]
  __int128 v28; // [rsp+70h] [rbp-29h]
  int v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+84h] [rbp-15h]
  __int64 v31; // [rsp+88h] [rbp-11h]
  __int128 v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+A0h] [rbp+7h]
  int v34; // [rsp+A4h] [rbp+Bh]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  v25 = 4;
  v29 = 1;
  v33 = 2;
  v24 = xmmword_18016D4C0;
  v22 = 0;
  v5 = 0LL;
  v28 = xmmword_180172D60;
  v23 = 0LL;
  v32 = xmmword_180172D78;
  v26 = 0;
  v27 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v34 = 0;
  v35 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    Property = DevFindProperty(&xmmword_18016D4C0, 0LL, 0LL, v22, v23, &v22, &v23);
    if ( Property && *(_DWORD *)(Property + 32) == 13 )
    {
      v8 = *(_QWORD **)(Property + 40);
      v9 = *v8 - 0x4CE4AB336DC23320LL;
      if ( *v8 == 0x4CE4AB336DC23320LL )
        v9 = v8[1] - 0x1428BFEBB3BBD480LL;
      if ( v9 )
      {
        v10 = *v8 - 0x4D2CCCF6504BE32CLL;
        if ( *v8 == 0x4D2CCCF6504BE32CLL )
          v10 = v8[1] - 0x2BE247378B6F3FB7LL;
        if ( v10 )
        {
          ObjectProperties = -2147024809;
          goto LABEL_27;
        }
      }
      v11 = DevFindProperty(&xmmword_180172D60, 0LL, 0LL, v22, v23, v18, v20);
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 32) == 18 )
        {
          v12 = *(char **)(v11 + 40);
          v13 = -1LL;
          do
            ++v13;
          while ( *(_WORD *)&v12[2 * v13] );
          v14 = v13 + 1;
          if ( v13 + 1 < v13 )
          {
            ObjectProperties = -2147024362;
            goto LABEL_27;
          }
          if ( is_mul_ok(v14, 2uLL) )
          {
            v15 = (char *)CoTaskMemAlloc(2 * v14);
            v5 = v15;
            if ( !v15 )
            {
              ObjectProperties = -2147024882;
              goto LABEL_27;
            }
            ObjectProperties = 0;
            sub_18002A0F0(v15, v13 + 1, v12, v13);
          }
          else
          {
            ObjectProperties = -2147024362;
          }
          if ( ObjectProperties < 0 )
            goto LABEL_27;
          v16 = DevFindProperty(&xmmword_180172D78, 0LL, 0LL, v22, v23, v19, v21);
          if ( v16 && *(_DWORD *)(v16 + 32) == 7 )
          {
            ObjectProperties = 0;
            *a3 = **(_DWORD **)(v16 + 40);
            *a2 = v5;
            v5 = 0LL;
            goto LABEL_27;
          }
        }
      }
    }
    ObjectProperties = -2147023728;
  }
LABEL_27:
  CoTaskMemFree(v5);
  DevFreeObjectProperties(v22);
  if ( ObjectProperties < 0 )
    sub_18005E8F8((__int64)"GetKsMidiDeviceInfo", 92, ObjectProperties);
  return (unsigned int)ObjectProperties;
}
