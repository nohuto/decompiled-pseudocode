/*
 * XREFs of sub_18001BCA0 @ 0x18001BCA0
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 */

__int64 *__fastcall sub_18001BCA0(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r10d
  int v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-78h] BYREF
  int *v16; // [rsp+70h] [rbp-58h]
  __int64 v17; // [rsp+78h] [rbp-50h]
  __int64 *v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]
  __int64 *v20; // [rsp+90h] [rbp-38h]
  __int64 v21; // [rsp+98h] [rbp-30h]
  __int64 *v22; // [rsp+A0h] [rbp-28h]
  __int64 v23; // [rsp+A8h] [rbp-20h]

  result = (__int64 *)a1[87];
  if ( result )
  {
    v3 = *result;
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_QWORD *)(v3 + 456);
    v6 = *(_QWORD *)(v4 + 1000);
    if ( v6 && *(_QWORD *)(v6 + 456) > v5 )
      v5 = *(_QWORD *)(v6 + 456);
    v7 = *(_QWORD *)(v4 + 944);
    if ( v7 )
    {
      if ( v7 > v5 && (int)sub_18007D30C(a1) < 0 )
      {
        *(_QWORD *)(v4 + 944) = 0LL;
        if ( (unsigned int)dword_1800B3218 > 4 )
        {
          if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
          {
            v12 = a1[139];
            v13 = *(a1 - 4);
            v14 = *(_QWORD *)(v4 - 32);
            v22 = &v12;
            v20 = &v13;
            v18 = &v14;
            v16 = &v11;
            v23 = v8;
            v21 = v8;
            v19 = v8;
            v11 = v10;
            v17 = 4LL;
            sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0F4A, 0, v9, 6u, &v15);
          }
        }
      }
    }
    result = *(__int64 **)(v4 + 944);
    if ( v5 <= (unsigned __int64)result )
      v5 = *(_QWORD *)(v4 + 944);
    a1[119] = v5;
  }
  else
  {
    a1[119] = 0LL;
  }
  return result;
}
