/*
 * XREFs of sub_180009518 @ 0x180009518
 * Callers:
 *     sub_180008BD0 @ 0x180008BD0 (sub_180008BD0.c)
 *     sub_180036A90 @ 0x180036A90 (sub_180036A90.c)
 *     sub_18003DD30 @ 0x18003DD30 (sub_18003DD30.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_18003DF90 @ 0x18003DF90 (sub_18003DF90.c)
 *     sub_18003E090 @ 0x18003E090 (sub_18003E090.c)
 *     sub_1800801E0 @ 0x1800801E0 (sub_1800801E0.c)
 * Callees:
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180009518(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int *a10,
        __int64 a11)
{
  int *v11; // rbx
  int v14; // edi
  DWORD v15; // ebx
  int v17; // eax
  char v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  char TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+100h] [rbp+0h] BYREF
  int *v24; // [rsp+120h] [rbp+20h]
  __int64 v25; // [rsp+128h] [rbp+28h]
  char *v26; // [rsp+130h] [rbp+30h]
  __int64 v27; // [rsp+138h] [rbp+38h]
  int *v28; // [rsp+140h] [rbp+40h]
  __int64 v29; // [rsp+148h] [rbp+48h]
  int *v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+160h] [rbp+60h] BYREF

  v11 = a10;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0538, 0, 0, 2u, &v32);
  sub_18000B7F8(TlsValue);
  if ( a10 && ((unsigned int)*a10 >= 0x10 || a6 != 6) )
    goto LABEL_17;
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( a6 == 6 && !a10 )
      {
        v19 = -1;
        MEMORY[0] = MEMORY[0] & 0xF;
        v11 = &v19;
      }
      goto LABEL_7;
    }
LABEL_17:
    v14 = -1073741583;
    goto LABEL_9;
  }
  if ( (a7 & 1) != a7 )
    goto LABEL_17;
LABEL_7:
  v14 = sub_1800096AC(a1, a2, a5, a6, a7, 0LL, 0LL, (__int64)v11, a11);
  if ( v14 >= 0 )
    v14 = 0;
LABEL_9:
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    if ( *(_QWORD *)a11 )
      v17 = *(_DWORD *)(*(_QWORD *)a11 + 148LL);
    else
      v17 = 0;
    v20 = v17;
    v31 = 4LL;
    v30 = &v19;
    v29 = 4LL;
    v28 = &v20;
    v25 = 4LL;
    v26 = &v18;
    v19 = v14;
    v24 = &v21;
    v18 = a6;
    v21 = a2;
    v27 = 1LL;
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009FEA0, 0, 0, 6u, &v23);
  }
  return (unsigned int)v14;
}
