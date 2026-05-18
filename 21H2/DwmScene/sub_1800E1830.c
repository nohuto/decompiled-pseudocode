/*
 * XREFs of sub_1800E1830 @ 0x1800E1830
 * Callers:
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_1800E1990 @ 0x1800E1990 (sub_1800E1990.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1830(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h]
  __int128 v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+48h] [rbp-50h]
  __int128 v15; // [rsp+58h] [rbp-40h]
  __int128 v16; // [rsp+68h] [rbp-30h]
  __int64 v17; // [rsp+78h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 96LL))(v4, &v11);
    v5 = v11;
    *(_DWORD *)(a1 + 36) = v11;
    if ( v5 == 2 )
    {
      v6 = v13;
      *(_OWORD *)(a1 + 56) = v12;
      v7 = v14;
      *(_OWORD *)(a1 + 72) = v6;
      v8 = v15;
      *(_OWORD *)(a1 + 88) = v7;
      v9 = v16;
      *(_OWORD *)(a1 + 104) = v8;
      *(_QWORD *)&v8 = v17;
      *(_OWORD *)(a1 + 120) = v9;
      *(_QWORD *)(a1 + 136) = v8;
LABEL_6:
      sub_1800E1990(a1);
      goto LABEL_7;
    }
    if ( v5 == 5 )
      goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = 4;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 36);
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 56);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 120);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 136);
  return result;
}
