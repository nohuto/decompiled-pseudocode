/*
 * XREFs of sub_18000F200 @ 0x18000F200
 * Callers:
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 * Callees:
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180028ECC @ 0x180028ECC (sub_180028ECC.c)
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035780 @ 0x180035780 (sub_180035780.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067034 @ 0x180067034 (sub_180067034.c)
 */

__int64 __fastcall sub_18000F200(__int64 a1, __int64 a2)
{
  char *v4; // rsi
  __int64 v5; // r13
  int v6; // eax
  int v7; // edx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID v11; // r12
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  int v20; // [rsp+48h] [rbp-21h]
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-9h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009AE1D, 0, 0, 2u, &v23);
  P = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 544);
  sub_18001E380(a1);
  v6 = sub_180008D30(*(_QWORD *)(a1 + 128), v5, (__int64 *)&P);
  v8 = P;
  if ( v6 >= 0 )
  {
    if ( (*((_BYTE *)P + 836) & 1) != 0 )
    {
      v4 = (char *)P + 64;
      sub_18000EE4C((__int64)P + 64);
      sub_18000F390(v9);
      sub_180028ECC(v8 + 8);
      sub_18001E380(v10);
    }
    sub_18000806C(v8);
  }
  P = 0LL;
  v11 = (PVOID)(a1 + 168);
  sub_18002D660((_DWORD)v11, v7, a2, (unsigned int)&P, (__int64)&v22, (__int64)&v21);
  v13 = P;
  if ( P != v11 )
  {
    NtDeleteWnfStateName((char *)P + 576);
    NtDeleteWnfStateName(v13 + 73);
    sub_180035780(v11, &v21, v13, *v13);
  }
  result = sub_18000F390(v12);
  if ( v8 )
    result = sub_1800265B0(v8);
  if ( v4 )
  {
    sub_18001E380(v15);
    if ( (*((_QWORD *)v4 + 74))-- == 1LL )
      sub_18000A1AC((__int64)(v4 - 64), v16);
    result = sub_18000F390(v17);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 )
  {
    result = qword_1800B31F8 & 9;
    if ( result == qword_1800B31F8 )
    {
      v20 = *(_DWORD *)(a2 + 532);
      LODWORD(P) = *(_DWORD *)(a2 + 536);
      v22 = v5;
      v21 = a2;
      return sub_180067034(v15, &unk_18009AEF0);
    }
  }
  return result;
}
