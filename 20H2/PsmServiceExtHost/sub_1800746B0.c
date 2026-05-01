/*
 * XREFs of sub_1800746B0 @ 0x1800746B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 *     sub_18007455C @ 0x18007455C (sub_18007455C.c)
 */

unsigned __int8 __fastcall sub_1800746B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  BOOL v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 result; // al
  __int64 v12; // rcx
  DWORD v13; // ebx
  __int64 v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+38h] [rbp-91h]
  int v16; // [rsp+3Ch] [rbp-8Dh]
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+D0h] [rbp+7h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278(v3, (unsigned __int8 *)dword_18009DC8E, 0LL, 0LL, 2u, &v18);
  v4 = a2 + 48;
  sub_18001E380();
  v5 = *(_DWORD *)(a2 + 92);
  if ( (v5 & 1) == 0 )
    goto LABEL_15;
  v6 = sub_18007455C(a2 + 48);
  sub_1800410C4(a2 + 16, &v18);
  while ( 1 )
  {
    v8 = sub_180041058(&v18);
    v9 = (char *)v8;
    if ( !v8 )
      break;
    v16 = 0;
    v15 = 2;
    v14 = sub_180007E58(v8, 2, 0);
    while ( 1 )
    {
      v7 = sub_180007DE4(&v14);
      if ( !v7 )
        break;
      if ( (*(_BYTE *)(v7 + 1380) & 8) != 0 )
      {
        sub_180074024((__int64)v9, v6);
        break;
      }
    }
    sub_1800265B0(v9);
  }
  RtlReleaseSRWLockShared(v18.Ptr + 16);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v4, v4 + 8, 0LL, *(unsigned int *)(v4 + 40));
  }
  else
  {
LABEL_15:
    *(_DWORD *)(v4 + 44) = v5 & 0xFFFFFFFD;
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278(v10, (unsigned __int8 *)dword_18009DBE9, 0LL, 0LL, 2u, &v18);
  }
  result = (unsigned __int8)sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 5 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
      result = sub_18002E278(v12, (unsigned __int8 *)dword_18009DADB, 0LL, 0LL, 2u, &v18);
  }
  v13 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v13, 0LL);
  }
  return result;
}
