/*
 * XREFs of sub_18006770C @ 0x18006770C
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 *     sub_180073544 @ 0x180073544 (sub_180073544.c)
 */

__int64 __fastcall sub_18006770C(__int64 a1, unsigned int a2, unsigned int *a3, int a4, DWORD a5)
{
  _QWORD *v5; // r13
  int v6; // edi
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DWORD v15; // edi
  _BYTE v17[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v18; // [rsp+44h] [rbp-9Dh] BYREF
  unsigned int v19; // [rsp+48h] [rbp-99h] BYREF
  DWORD v20; // [rsp+4Ch] [rbp-95h] BYREF
  int v21[4]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-81h] BYREF

  v5 = (_QWORD *)qword_1800B41A0;
  v6 = a4;
  v18 = a4;
  v17[0] = 0;
  sub_18000B7F8(TlsValue);
  if ( a3 )
  {
    sub_18001E380();
    v10 = 0;
    if ( a2 )
    {
      v11 = a3;
      while ( 1 )
      {
        v9 = sub_180004474(v5, *v11, a5, 1);
        if ( v9 < 0 )
          break;
        ++v10;
        v11 += 6;
        if ( v10 >= a2 )
          goto LABEL_7;
      }
      v6 = v18;
    }
    else
    {
LABEL_7:
      v6 = v18;
      v9 = sub_180073544((_DWORD)v5, v5[3], a2, (_DWORD)a3, v18, a5, (__int64)v17);
      if ( v9 >= 0 && !v17[0] )
        v9 = -2147467259;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v18 = v6;
    v19 = a2;
    v20 = a5;
    v21[0] = v9;
    sub_1800625D0(v12, byte_18009B026, v13, v14, (__int64)v21, (__int64)&v20, (__int64)&v19, (__int64)&v18);
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return (unsigned int)v9;
}
