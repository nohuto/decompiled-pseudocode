/*
 * XREFs of sub_1C005C2E8 @ 0x1C005C2E8
 * Callers:
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 *     sub_1C001C46C @ 0x1C001C46C (sub_1C001C46C.c)
 *     sub_1C005C7EC @ 0x1C005C7EC (sub_1C005C7EC.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     sub_1C001BAFC @ 0x1C001BAFC (sub_1C001BAFC.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C005C2E8(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4, int a5)
{
  NTSTATUS result; // eax
  _DWORD *v8; // rax
  int v9; // [rsp+60h] [rbp-11h] BYREF
  int v10; // [rsp+68h] [rbp-9h] BYREF
  __int16 v11; // [rsp+6Ch] [rbp-5h]
  __int16 v12; // [rsp+6Eh] [rbp-3h]
  __int16 v13; // [rsp+70h] [rbp-1h]
  __int16 v14; // [rsp+72h] [rbp+1h]
  _OWORD v15[2]; // [rsp+78h] [rbp+7h] BYREF
  int v16; // [rsp+98h] [rbp+27h]

  result = 0;
  v9 = a3;
  v16 = 0;
  memset(v15, 0, sizeof(v15));
  if ( dword_1C006B650 )
  {
    v8 = sub_1C000F050(a1);
    v10 = v8[1298];
    v11 = *((_WORD *)v8 + 2598);
    v12 = v8[1300];
    v13 = *((_WORD *)v8 + 2614);
    v14 = *((_WORD *)v8 + 2615);
    sub_1C001BAFC((__int64)v8, (__int64)v15);
    return sub_1C00125E0(a2, 0LL, &v10, 12LL, v15, 36LL, &v9, 4LL, a4, a5, 0LL);
  }
  return result;
}
