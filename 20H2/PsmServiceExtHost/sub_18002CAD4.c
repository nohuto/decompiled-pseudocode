/*
 * XREFs of sub_18002CAD4 @ 0x18002CAD4
 * Callers:
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002C7DC @ 0x18002C7DC (sub_18002C7DC.c)
 *     sub_18002CA14 @ 0x18002CA14 (sub_18002CA14.c)
 *     sub_18002CC90 @ 0x18002CC90 (sub_18002CC90.c)
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002DE3C @ 0x18002DE3C (sub_18002DE3C.c)
 *     sub_18002E618 @ 0x18002E618 (sub_18002E618.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002CAD4(_QWORD *a1, unsigned int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  int v10; // edx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 *Block; // rax
  __int64 v14; // r8
  _QWORD *v15; // rsi
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  _OWORD v24[35]; // [rsp+80h] [rbp-80h] BYREF

  v21 = 0LL;
  memset(v24, 0, 0x228uLL);
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _OWORD *))(*a1 + 40LL))(a1, a2, v24);
  if ( (int)result >= 0 )
  {
    P = 0LL;
    sub_18002D660((_DWORD)a1 + 168, v10, (unsigned int)v24, (unsigned int)&P, (__int64)v18, (__int64)v20);
    v11 = P;
    if ( P == a1 + 21 )
    {
      result = sub_18002E618(a3, &v21, (char *)&v21 + 8);
      if ( (int)result < 0 )
        return result;
      Block = (__int64 *)sub_18002CA14(v12, v24, &v21);
      sub_18002C7DC((__int64)(a1 + 21), (__int64)v18, v14, 0, Block);
      if ( !v19 )
      {
        NtDeleteWnfStateName(&v21);
        NtDeleteWnfStateName((char *)&v21 + 8);
        return 2147942414LL;
      }
      v11 = *(_QWORD **)v18;
      if ( (int)sub_18002DE3C(a1[16], v24, &P) < 0 )
      {
        v23 = 0LL;
        v22 = 0LL;
        RtlPublishWnfStateData(*((_QWORD *)&v21 + 1), 0LL, &v22, 24LL, 0LL);
        v17[0] = 0;
        v17[1] = 1;
        RtlPublishWnfStateData(v21, 0LL, v17, 8LL, 0LL);
      }
      else
      {
        v15 = P;
        sub_1800093A0((__int64)P + 64, 0);
        if ( (*((_BYTE *)v15 + 836) & 1) != 0 )
        {
          sub_18002CC90(v15, v15[171], 1LL);
          (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD))(*a1 + 32LL))(
            a1,
            v15,
            0LL,
            *((unsigned int *)v15 + 344));
        }
        sub_18000A110((__int64)(v15 + 8));
        sub_1800265B0((char *)v15);
      }
    }
    *a4 = v11[72];
    *a5 = v11[73];
    return 0LL;
  }
  return result;
}
