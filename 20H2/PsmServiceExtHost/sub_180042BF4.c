/*
 * XREFs of sub_180042BF4 @ 0x180042BF4
 * Callers:
 *     sub_180042BE0 @ 0x180042BE0 (sub_180042BE0.c)
 * Callees:
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180042CF4 @ 0x180042CF4 (sub_180042CF4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 */

__int64 __fastcall sub_180042BF4(__int64 a1, void *a2, _QWORD *a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  PVOID v10; // rcx
  DWORD v11; // edi
  PVOID P; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-110h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-B8h] BYREF

  sub_18000B7F8(TlsValue);
  P = 0LL;
  v7 = sub_1800089F0(a2, DestinationSid, 0LL, &v14, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    sub_18001E380();
    v9 = sub_180042CF4(v8, DestinationSid, v14, &P);
    v10 = P;
    v7 = v9;
    if ( v9 >= 0 )
    {
      *a4 = *((_QWORD *)P + 3);
      *a3 = v10;
      v10 = 0LL;
      P = 0LL;
      v7 = 0;
    }
    if ( v10 )
    {
      sub_18006A214();
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    sub_18000F390();
  }
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  return v7 | 0x10000000u;
}
