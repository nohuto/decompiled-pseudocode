/*
 * XREFs of sub_18007DE7C @ 0x18007DE7C
 * Callers:
 *     sub_1800433B0 @ 0x1800433B0 (sub_1800433B0.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18007C280 @ 0x18007C280 (sub_18007C280.c)
 */

char __fastcall sub_18007DE7C(__int64 a1, int a2, int a3, unsigned __int8 *a4)
{
  int v7; // esi
  unsigned __int8 v8; // di
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v15 = a2;
  v7 = 0;
  v8 = 0;
  sub_1800093A0(a1, 0);
  if ( *(char *)(a1 + 1180) < 0 || *(char *)(a1 + 1184) < 0 )
  {
    v7 = sub_18000506C(a1, 1u, a3, 0LL, 1, 0);
    v8 = 1;
  }
  result = sub_18000A110(a1);
  *a4 = v8;
  if ( v7 )
    result = sub_180017F60(*(char **)(a1 + 688));
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 64LL);
    if ( result )
    {
      v16 = v8;
      v13 = (void *)(a1 + 24);
      v15 = a3;
      v14 = 1;
      return sub_18007C280(v10, byte_1800A11E0, v11, v12, &v13, (__int64)&v16, (__int64)&v14, (__int64)&v15);
    }
  }
  return result;
}
