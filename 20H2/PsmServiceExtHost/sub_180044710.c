/*
 * XREFs of sub_180044710 @ 0x180044710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063E7C @ 0x180063E7C (sub_180063E7C.c)
 *     sub_18007268C @ 0x18007268C (sub_18007268C.c)
 */

void __fastcall sub_180044710(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 i; // rax
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  DWORD v14; // ebx
  unsigned __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[5]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE TlsValue[144]; // [rsp+B0h] [rbp-50h] BYREF

  if ( a2 == 2 )
  {
    sub_18000B7F8(TlsValue);
    sub_18001E380();
    sub_1800410C4(a7 + 16, v17);
    for ( i = sub_180041058(v17); ; i = sub_180041058(v17) )
    {
      v13 = i;
      if ( !i )
        break;
      if ( (*(_BYTE *)(i + 836) & 1) == 0 )
      {
        v8 = sub_180021E08(i, 0LL, 0LL, &v15);
        v9 = v15;
        if ( v8 < 0 )
          v9 = 0LL;
        v15 = v9;
        if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
        {
          v16[3] = *(_QWORD *)(v13 + 32);
          v16[4] = v13 + 88;
          v16[2] = v11;
          sub_180063E7C(v10, &unk_18009AC3A);
        }
        v16[1] = 3LL;
        v16[0] = sub_180007E58(v13, 3, 0);
        while ( 1 )
        {
          v12 = sub_180007DE4(v16);
          if ( !v12 )
            break;
          sub_18007268C(v12);
        }
      }
      sub_1800265B0((char *)v13);
    }
    RtlReleaseSRWLockShared(v17[0] + 16LL);
    sub_18000F390();
    v14 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v14, 0LL);
    }
  }
}
