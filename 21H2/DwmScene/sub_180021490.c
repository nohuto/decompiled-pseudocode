/*
 * XREFs of sub_180021490 @ 0x180021490
 * Callers:
 *     sub_180021364 @ 0x180021364 (sub_180021364.c)
 * Callees:
 *     sub_180021E64 @ 0x180021E64 (sub_180021E64.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021490(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v5; // ebx
  unsigned int v7; // ebp
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v11 = 0LL;
  v12 = 0;
  v7 = 0;
  v8 = ((__int64 (__fastcall *)(_QWORD, bool, _BYTE *, __int64 *))sub_180021E64)(a2, a3 == 0, v13, &v11);
  if ( v8 )
  {
    if ( v8 != 279 )
      goto LABEL_6;
    v9 = HIDWORD(v11);
  }
  else
  {
    v9 = HIDWORD(v11);
    v7 = 1;
    *(_DWORD *)a1 = (HIDWORD(v11) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v9) & 0x3F;
    *(_DWORD *)(a1 + 12) = v12;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v9 >> 14;
    *(_DWORD *)(a1 + 20) = (v9 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v9 >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v5) = v8 != -2147483614;
    *a4 = v5;
  }
  return v7;
}
