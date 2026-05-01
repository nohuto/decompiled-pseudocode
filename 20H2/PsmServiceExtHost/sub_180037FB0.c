/*
 * XREFs of sub_180037FB0 @ 0x180037FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 */

__int64 __fastcall sub_180037FB0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int *a5, int a6)
{
  int v7; // esi
  int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  DWORD v12; // ebx
  int v14; // [rsp+30h] [rbp-B8h] BYREF
  int v15[3]; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  v7 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  sub_18001E380();
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 2712LL) & 1) == 0 )
  {
    v7 = a4[228];
    if ( v8 != v7 )
    {
      a4[228] = v8;
      sub_180040C14(a4);
    }
  }
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v14 = v7;
    v15[0] = v8;
    sub_1800624C0(v9, (unsigned int)&unk_18009C67B, v10, v11, (__int64)v15, (__int64)&v14);
  }
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return 0LL;
}
