/*
 * XREFs of sub_180036BA0 @ 0x180036BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180036CD0 @ 0x180036CD0 (sub_180036CD0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 */

__int64 __fastcall sub_180036BA0(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v5; // rsi
  int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  DWORD v13; // edi
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[144]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  sub_18000B63C(&v17, v22);
  if ( (_DWORD)v5 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v8 = -805306129;
    }
    else
    {
      LODWORD(v18) = a2;
      *((_QWORD *)&v18 + 1) = v5;
      WORD2(v19) = a4 ^ 1;
      LODWORD(v19) = 101;
      v20 = v18;
      v21 = v19;
      sub_18001E380();
      v8 = sub_180036CD0(*(_QWORD *)(a1 + 24), &v20);
      if ( v8 >= 0 )
        v8 = 0;
      sub_18000F390();
    }
  }
  else
  {
    v8 = -805306128;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v14 = v5;
    v15 = a2;
    v16 = v8;
    sub_18006253C(v9, (unsigned int)&unk_18009AF45, v10, v11, (__int64)&v16, (__int64)&v15, (__int64)&v14);
  }
  if ( v17 )
  {
    v13 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v8;
}
