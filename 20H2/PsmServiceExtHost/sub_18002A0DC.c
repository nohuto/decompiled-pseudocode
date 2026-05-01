/*
 * XREFs of sub_18002A0DC @ 0x18002A0DC
 * Callers:
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002A350 @ 0x18002A350 (sub_18002A350.c)
 *     sub_18002A804 @ 0x18002A804 (sub_18002A804.c)
 *     sub_18002A85C @ 0x18002A85C (sub_18002A85C.c)
 *     sub_18002A918 @ 0x18002A918 (sub_18002A918.c)
 *     sub_18002A9B4 @ 0x18002A9B4 (sub_18002A9B4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 */

char __fastcall sub_18002A0DC(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v6; // r13d
  int v7; // eax
  int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  int v13; // esi
  int v14; // r15d
  int v15; // r14d
  char result; // al
  __int64 v17; // rcx
  __int64 v18; // [rsp+68h] [rbp-41h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+88h] [rbp-21h]
  __int64 v23; // [rsp+90h] [rbp-19h]
  _BYTE v24[8]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  _QWORD v27[3]; // [rsp+B0h] [rbp+7h] BYREF

  sub_18000A110(a1);
  sub_18000F390();
  if ( *a2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 - 16) + 40LL) + 200LL))(*(_QWORD *)(a1 + 792));
  else
    v6 = 0;
  sub_18002A918(&v20, &v19);
  v7 = sub_18002A350(a1, &v18);
  v8 = v18;
  if ( v7 < 0 )
    v8 = 0;
  LODWORD(v18) = v8;
  sub_18001E380();
  sub_1800093A0(a1, 0);
  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 648);
  v27[0] = 0LL;
  v23 = v9;
  v11 = v10 >> 29;
  LOBYTE(v11) = (v10 >> 29) & 7;
  v27[1] = v9;
  v12 = *a3;
  v13 = v8 & 1;
  v21 = v11;
  v27[0] = (unsigned int)v10 >> 29;
  v14 = v19;
  v22 = v12;
  v27[2] = v12;
  do
  {
    v15 = (v10 >> 41) & 1 | (2 * ((v10 >> 42) & 1 | (2 * (v13 | (2 * ((v10 >> 46) & 1))))));
    LODWORD(v19) = v15;
    sub_18000A110(a1);
    sub_18000F390();
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 - 16) + 40LL) + 192LL))(
      *(_QWORD *)(a1 + 792),
      1LL);
    sub_18002A85C((unsigned int)v27, (unsigned int)&v19, v6, v20, v14, (__int64)v24);
    if ( v25 )
      sub_18002A9B4(a1, v25, *(_QWORD *)(a1 + 792));
    sub_18002A350(a1, &v18);
    sub_18001E380();
    sub_1800093A0(a1, 0);
    v10 = *(_QWORD *)(a1 + 648);
    v13 = v18 & 1;
  }
  while ( v15 != ((v10 >> 41) & 1 | (2 * ((v10 >> 42) & 1 | (2 * (v13 | (2 * ((v10 >> 46) & 1))))))) );
  LOBYTE(v10) = v24[0];
  sub_18002A804(a1, v10);
  *a2 = v25;
  *a3 = v26;
  *(_DWORD *)(a1 + 672) = *(_DWORD *)a2;
  RtlQueryUnbiasedInterruptTime(&v20);
  result = 75 * v20;
  *(_DWORD *)(a1 + 668) = v20 / 0x2710;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
    {
      v21 = *a3;
      v20 = *a2;
      v19 = *(_QWORD *)(a1 - 32);
      v18 = a1 + 24;
      return sub_18007C6F4(v17, &unk_1800A0E38);
    }
  }
  return result;
}
