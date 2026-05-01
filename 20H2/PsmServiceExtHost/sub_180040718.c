/*
 * XREFs of sub_180040718 @ 0x180040718
 * Callers:
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800407B8 @ 0x1800407B8 (sub_1800407B8.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180040718(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  _DWORD v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 (__fastcall *v10)(); // [rsp+48h] [rbp-8h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  sub_1800407B8(a1 + 24);
  v12 = 0LL;
  v7[1] = 0;
  v9 = 0LL;
  v8 = sub_180082200;
  v7[0] = 1;
  v10 = sub_1800820A0;
  v2 = PdcNotificationClientRegister(1LL, v7, a1, &v12);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v13 = v12;
    v11 = v2;
    sub_180063424(v3, (unsigned int)&unk_18009ECC4, v4, v5, (__int64)&v11, (__int64)&v13);
  }
  if ( v2 >= 0 )
  {
    v2 = 0;
    *(_QWORD *)(a1 + 8) = v12;
  }
  return (unsigned int)v2;
}
