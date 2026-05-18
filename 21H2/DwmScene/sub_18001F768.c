/*
 * XREFs of sub_18001F768 @ 0x18001F768
 * Callers:
 *     sub_18001C5F4 @ 0x18001C5F4 (sub_18001C5F4.c)
 * Callees:
 *     sub_18001A0B4 @ 0x18001A0B4 (sub_18001A0B4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

bool __fastcall sub_18001F768(__int64 a1, unsigned __int64 *a2, _BYTE *a3, unsigned __int64 a4)
{
  char *v5; // r14
  unsigned __int8 *v7; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE *v10; // [rsp+48h] [rbp-31h] BYREF
  _BYTE *v11; // [rsp+50h] [rbp-29h] BYREF
  _BYTE *v12; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-19h] BYREF
  char v14; // [rsp+68h] [rbp-11h] BYREF

  v13 = a4;
  v11 = a3;
  v10 = a3;
  *a2 = 36LL;
  v5 = &v14;
  v12 = &a3[a4];
  if ( a4 >= 0x24 )
    v5 = a3;
  if ( a4 >= 0x24 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    *(_DWORD *)v5 = *(_DWORD *)a1;
    *((_WORD *)v5 + 2) = *(_WORD *)(a1 + 4);
    *((_DWORD *)v5 + 3) = *(_DWORD *)(a1 + 32);
    *((_WORD *)v5 + 9) = *(_WORD *)(a1 + 56);
    *((_DWORD *)v5 + 6) = *(_DWORD *)(a1 + 80);
    v10 += 36;
  }
  v7 = *(unsigned __int8 **)(a1 + 8);
  v9[0] = &v11;
  v9[1] = a2;
  v9[2] = &v13;
  v9[3] = &v10;
  v9[4] = &v12;
  sub_18001A0B4((__int64)v9, v7, (unsigned __int16 *)v5 + 3, 0);
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 16), (unsigned __int16 *)v5 + 16, 0);
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 24), (unsigned __int16 *)v5 + 4, *((_WORD *)v5 + 16));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 40), (unsigned __int16 *)v5 + 5, *((_WORD *)v5 + 4));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 48), (unsigned __int16 *)v5 + 8, 0);
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 64), (unsigned __int16 *)v5 + 10, *((_WORD *)v5 + 3));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 40), (unsigned __int16 *)v5 + 5, *((_WORD *)v5 + 4));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 72), (unsigned __int16 *)v5 + 11, *((_WORD *)v5 + 4));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 88), (unsigned __int16 *)v5 + 14, *((_WORD *)v5 + 11));
  sub_18001A0B4((__int64)v9, *(unsigned __int8 **)(a1 + 96), (unsigned __int16 *)v5 + 15, 0);
  return *a2 <= v13;
}
