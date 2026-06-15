/*
 * XREFs of sub_18011BB84 @ 0x18011BB84
 * Callers:
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011BB84(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r9d
  unsigned int v10; // r14d
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-11h]
  PROPVARIANT *v15; // [rsp+50h] [rbp-9h]
  char v16; // [rsp+58h] [rbp-1h]
  _DWORD v17[6]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v18[6]; // [rsp+78h] [rbp+1Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]

  v5 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v5 + 24LL))(v5, &unk_180173700, 1LL) < 0 )
  {
    *a3 = 1;
    goto LABEL_16;
  }
  v17[0] = -1702713381;
  v17[1] = 1102331579;
  v17[2] = -1223116157;
  v17[3] = -65530063;
  v17[4] = 1;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  v15 = pvar;
  v16 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         v17,
         pvar);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 7583;
LABEL_12:
    v9 = v6;
    goto LABEL_13;
  }
  if ( LOWORD(pvar[0]) == 19 )
  {
    v10 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v18[0] = 590439624;
    v18[1] = 1283267372;
    v18[2] = 1907779772;
    v18[3] = 1730509416;
    v18[4] = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           v18,
           pvar);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7589;
      goto LABEL_12;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      v7 = -2147418113;
      v9 = -2147418113;
      v8 = 7590;
      goto LABEL_13;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, PROPVARIANT, _QWORD, _DWORD *))(*(_QWORD *)v12 + 24LL))(
           v12,
           pvar[1],
           v10,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7593;
      goto LABEL_12;
    }
    PropVariantClear(pvar);
LABEL_16:
    v7 = 0;
    goto LABEL_17;
  }
  v7 = -2147418113;
  v9 = -2147418113;
  v8 = 7584;
LABEL_13:
  sub_18004BD84(
    (int)retaddr,
    v8,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v9);
  PropVariantClear(pvar);
LABEL_17:
  sub_18000F708(&v12);
  return v7;
}
