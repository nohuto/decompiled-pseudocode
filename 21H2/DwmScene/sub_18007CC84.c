/*
 * XREFs of sub_18007CC84 @ 0x18007CC84
 * Callers:
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18007CC84(__int64 a1)
{
  int v2; // eax
  unsigned int i; // r15d
  __int64 v4; // r12
  const char *v5; // r14
  const char *v6; // rbx
  const char *v7; // rdi
  const char *v8; // rax
  const char *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 result; // rax
  __int128 v20; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-51h]
  _QWORD v23[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp-31h]
  _QWORD v25[3]; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-11h]
  _QWORD v27[3]; // [rsp+C8h] [rbp-9h] BYREF
  unsigned __int64 v28; // [rsp+E0h] [rbp+Fh]
  __int128 v29; // [rsp+E8h] [rbp+17h] BYREF

  sub_18011BCAC(&unk_18020F648, 3LL, byte_18013FCFA);
  v2 = sub_18007AD60(a1);
  sub_18011BCAC(&unk_18020F648, 3LL, "Engine has %u device(s) attached:", v2);
  v29 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v29);
  for ( i = 0; i < (unsigned int)sub_18007AD60(a1); ++i )
  {
    v20 = 0LL;
    sub_18007AC9C(a1, &v20, i);
    v4 = v20;
    v5 = (const char *)sub_180024850(v27);
    v6 = (const char *)sub_180024850(v25);
    v7 = (const char *)sub_180024850(v23);
    v8 = (const char *)sub_180024850(v21);
    v9 = v8;
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    if ( *((_QWORD *)v6 + 3) >= 0x10uLL )
      v6 = *(const char **)v6;
    if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
      v7 = *(const char **)v7;
    if ( *((_QWORD *)v8 + 3) >= 0x10uLL )
      v9 = *(const char **)v8;
    v10 = sub_18007040C(v4);
    sub_18011BCAC(
      &unk_18020F648,
      3LL,
      "    index %u      id %-3u    %-20s     %-30s   level=%-10s   profile=%-8s",
      i,
      v10,
      v9,
      v7,
      v6,
      v5);
    if ( v22 >= 0x10 )
    {
      v11 = v21[0];
      if ( v22 + 1 >= 0x1000 )
      {
        v11 = *(_QWORD *)(v21[0] - 8LL);
        if ( (unsigned __int64)(v21[0] - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, v22 + 40);
LABEL_35:
          o__invalid_parameter_noinfo_noreturn(v12, v13);
LABEL_36:
          o__invalid_parameter_noinfo_noreturn(v14, v15);
LABEL_37:
          o__invalid_parameter_noinfo_noreturn(v16, v17);
          JUMPOUT(0x18007CFBDLL);
        }
      }
      j_j__o_free(v11);
    }
    v21[2] = 0LL;
    v22 = 15LL;
    LOBYTE(v21[0]) = 0;
    if ( v24 >= 0x10 )
    {
      v12 = v23[0];
      if ( v24 + 1 >= 0x1000 )
      {
        v13 = v24 + 40;
        v12 = *(_QWORD *)(v23[0] - 8LL);
        if ( (unsigned __int64)(v23[0] - v12 - 8) > 0x1F )
          goto LABEL_35;
      }
      j_j__o_free(v12);
    }
    v23[2] = 0LL;
    v24 = 15LL;
    LOBYTE(v23[0]) = 0;
    if ( v26 >= 0x10 )
    {
      v14 = v25[0];
      if ( v26 + 1 >= 0x1000 )
      {
        v15 = v26 + 40;
        v14 = *(_QWORD *)(v25[0] - 8LL);
        if ( (unsigned __int64)(v25[0] - v14 - 8) > 0x1F )
          goto LABEL_36;
      }
      j_j__o_free(v14);
    }
    v25[2] = 0LL;
    v26 = 15LL;
    LOBYTE(v25[0]) = 0;
    if ( v28 >= 0x10 )
    {
      v16 = v27[0];
      if ( v28 + 1 >= 0x1000 )
      {
        v17 = v28 + 40;
        v16 = *(_QWORD *)(v27[0] - 8LL);
        if ( (unsigned __int64)(v27[0] - v16 - 8) > 0x1F )
          goto LABEL_37;
      }
      j_j__o_free(v16);
    }
    if ( *((_QWORD *)&v20 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v18 = *((_QWORD *)&v20 + 1);
        (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
      }
    }
  }
  result = sub_18011BCAC(
             &unk_18020F648,
             3LL,
             "-----------------------------------------------------------------------------------");
  if ( BYTE8(v29) )
    return sub_18006730C(v29);
  return result;
}
