/*
 * XREFs of sub_180028ECC @ 0x180028ECC
 * Callers:
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026FA4 @ 0x180026FA4 (sub_180026FA4.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18007C624 @ 0x18007C624 (sub_18007C624.c)
 */

unsigned __int8 __fastcall sub_180028ECC(__int64 a1)
{
  int v2; // esi
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int8 result; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v10; // [rsp+44h] [rbp-3Ch] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+58h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0DD1, 0, 0, 2u, &v12);
  v2 = 0;
  LODWORD(v11[0]) = 0;
  sub_1800093A0(a1, 0);
  if ( (*(_QWORD *)(a1 + 648) & 0x800000000LL) != 0 )
  {
    v3 = 1;
    v5 = a1 + 680;
  }
  else
  {
    v3 = 0;
    sub_180026FA4(a1);
    if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
    {
      sub_18000A110(a1);
      v4 = *(_QWORD *)(a1 - 16);
      v10 = 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)(v4 + 40) + 72LL))(
        a1 + 488,
        *(unsigned int *)(a1 + 556),
        a1 + 24,
        *(unsigned int *)(a1 + 560),
        *(_QWORD *)(a1 - 32),
        0LL,
        &v10);
      if ( v10 )
      {
        sub_1800093A0(a1, 0);
      }
      else
      {
        sub_180029BA8(a1, 0, 0, 0, (__int64)v11);
        v2 = v11[0];
      }
    }
    v5 = a1 + 680;
    *(_QWORD *)(a1 + 648) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable(a1 + 680);
  }
  result = sub_18000A110(a1);
  if ( v3 )
    result = RtlWakeAllConditionVariable(v5);
  if ( v2 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(a1 + 592))-- == 1LL )
      sub_18000A1AC(a1 - 64, v8);
    result = (unsigned __int8)sub_18000F390();
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
    {
      v11[0] = *(_QWORD *)(a1 - 32);
      v11[1] = a1 + 24;
      return sub_18007C624(v7, &unk_1800A0D90);
    }
  }
  return result;
}
