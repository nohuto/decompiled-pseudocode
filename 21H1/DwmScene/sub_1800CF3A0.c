/*
 * XREFs of sub_1800CF3A0 @ 0x1800CF3A0
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800CEE00 @ 0x1800CEE00 (sub_1800CEE00.c)
 *     sub_1800CF05C @ 0x1800CF05C (sub_1800CF05C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800CF3A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  size_t *v15; // [rsp+30h] [rbp-50h]
  size_t v16[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-30h]
  _QWORD v18[3]; // [rsp+58h] [rbp-28h] BYREF

  v18[2] = a1;
  v14 = 0LL;
  sub_1800CF05C(&v14, *(_DWORD *)(a2 + 20));
  v16[2] = 0LL;
  v17 = 0LL;
  sub_18001CDF8(v16, (__int64)a1);
  v15 = v16;
  sub_1800CEE00((__int64 *)(v14 + 16), (__int64)v18, v16);
  v4 = v18[0];
  *(_OWORD *)(v18[0] + 64LL) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  if ( v17 >= 0x10 )
  {
    v5 = v16[0];
    if ( v17 + 1 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v16[0] - 8);
      if ( v16[0] - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v17 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  v7 = a1[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a1;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800CF51DLL);
      }
      v9 = v11;
    }
    j_j__o_free(v9);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return 1;
}
