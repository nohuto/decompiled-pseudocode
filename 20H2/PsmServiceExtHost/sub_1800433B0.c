/*
 * XREFs of sub_1800433B0 @ 0x1800433B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 *     sub_18007DE7C @ 0x18007DE7C (sub_18007DE7C.c)
 */

__int64 __fastcall sub_1800433B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ebx
  DWORD v12; // edi
  _DWORD *v14; // rsi
  _QWORD *i; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rbx
  char v19[4]; // [rsp+30h] [rbp-F8h] BYREF
  int v20; // [rsp+34h] [rbp-F4h] BYREF
  char TlsValue[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+D0h] [rbp-58h] BYREF
  int *v23; // [rsp+F0h] [rbp-38h]
  int v24; // [rsp+F8h] [rbp-30h]
  int v25; // [rsp+FCh] [rbp-2Ch]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0618, 0LL, 0LL, 2u, &v22);
  LOBYTE(v8) = 4;
  v9 = 0LL;
  while ( a1 != qword_1800B34D0[v9] )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_9;
  }
  LOBYTE(v8) = v9;
LABEL_9:
  v10 = (unsigned __int8)v8 | 0x1000;
  if ( !a5 || a6 < 4 || (a6 & 3) != 0 )
  {
    v11 = -1073741584;
    goto LABEL_12;
  }
  v14 = a5 + 1;
  if ( *a5 )
  {
    if ( *a5 == -1 )
    {
      for ( i = sub_18003CF94(a4 + 128, 0, 0LL); ; i = (_QWORD *)sub_18007BE20(v17) )
      {
        v17 = i;
        if ( !i )
          break;
        sub_18007DE7C(i, v16, v10, v19);
      }
    }
    else
    {
      v18 = (unsigned int)*a5;
      if ( v18 > ((unsigned __int64)a6 >> 2) - 1 )
      {
        v11 = -1073741583;
        goto LABEL_12;
      }
      if ( *a5 )
      {
        do
        {
          sub_18007C128(a4, *v14++, v8, v10, 0LL);
          --v18;
        }
        while ( v18 );
      }
    }
  }
  v11 = 0;
LABEL_12:
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v25 = 0;
    v23 = &v20;
    v20 = v11;
    v24 = 4;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A06A4, 0LL, 0LL, 3u, &v22);
  }
  return 0LL;
}
