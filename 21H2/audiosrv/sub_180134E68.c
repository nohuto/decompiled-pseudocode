/*
 * XREFs of sub_180134E68 @ 0x180134E68
 * Callers:
 *     sub_18013698C @ 0x18013698C (sub_18013698C.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 *     sub_1800DD7A0 @ 0x1800DD7A0 (sub_1800DD7A0.c)
 */

__int64 __fastcall sub_180134E68(_WORD *a1, char **a2)
{
  int v3; // eax
  char *v4; // r11
  unsigned int v5; // ebx
  unsigned __int64 v7; // rbx
  _WORD *v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 i; // rax
  unsigned __int64 v11; // rsi
  char *v12; // rax
  char *v13; // r14
  char *v14; // rbx
  int v15; // edx
  int v16; // r9d
  int v17; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  v3 = sub_1800DD7A0(a1, 65LL, &pv);
  v5 = v3;
  if ( v3 < 0 )
  {
    sub_18004BD84((int)retaddr, 168, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v3);
    return v5;
  }
  v7 = (unsigned __int64)pv;
  if ( (unsigned __int64)pv > 0x1E )
    v7 = 30LL;
  sub_18005FD7C(&pv, v4, v7);
  v8 = pv;
  if ( pv )
  {
    for ( i = 0LL; i < v7; ++i )
    {
      if ( v8[i] == 95 )
        v8[i] = 46;
    }
    v11 = v7 + 7;
    if ( v7 == -8LL )
    {
      sub_1800D8E60((int)retaddr, 3244, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
      __debugbreak();
    }
    v12 = (char *)CoTaskMemAlloc(2 * v11 + 2);
    v13 = v12;
    if ( v12 )
    {
      *(_WORD *)v12 = 0;
      *(_WORD *)&v12[2 * v11] = 0;
    }
    v14 = v12;
    if ( v12 )
    {
      v17 = sub_18000E660(v12, v11 + 1, (const char *)L"com.%s", v8);
      v9 = v17;
      if ( v17 >= 0 )
      {
        v14 = 0LL;
        *a2 = v13;
        v9 = 0;
        goto LABEL_21;
      }
      v16 = v17;
      v15 = 197;
    }
    else
    {
      v9 = -2147024882;
      v15 = 195;
      v16 = -2147024882;
    }
    sub_18004BD84((int)retaddr, v15, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v16);
LABEL_21:
    if ( v14 )
      CoTaskMemFree(v14);
    CoTaskMemFree(v8);
    return v9;
  }
  v9 = -2147024882;
  sub_18004BD84(
    (int)retaddr,
    177,
    (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
    -2147024882);
  return v9;
}
