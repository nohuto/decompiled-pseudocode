/*
 * XREFs of sub_18007483C @ 0x18007483C
 * Callers:
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 * Callees:
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18006C4C0 @ 0x18006C4C0 (sub_18006C4C0.c)
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
unsigned __int64 __fastcall sub_18007483C(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // r15d
  const char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 *v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 result; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rdx
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-B8h]
  _QWORD v19[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h]
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v26[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v27; // [rsp+108h] [rbp+8h]

  v18 = a2;
  v25 = 0LL;
  sub_1800615B4((__int64)(a1 + 1), (__int64)&v25);
  v24 = 0LL;
  sub_1800615B4((__int64)(a1 + 138), (__int64)&v24);
  v23 = 0LL;
  sub_1800615B4(*a2 + 24, (__int64)&v23);
  v4 = sub_18006AB3C(*a2);
  v5 = (const char *)sub_18001EF80(v19);
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v5 = *(const char **)v5;
  sub_1801163DC(&unk_1802085C8, 3LL, "Engine::DetachDevice() -- detaching device id %u -- %s", v4, v5);
  if ( v20 >= 0x10 )
  {
    v6 = v19[0];
    if ( v20 + 1 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v19[0] - 8LL);
      if ( (unsigned __int64)(v19[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v20 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v17 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a2[1];
  }
  *(_QWORD *)&v17 = *a2;
  *((_QWORD *)&v17 + 1) = v7;
  (*(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 152LL))(a1, &v17);
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  v26[0] = &std::_Func_impl_no_alloc<_lambda_282fed377bbce3f6fdb465d5ebb3ef93_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v26[1] = *a2;
  v26[2] = v8;
  v9 = v26;
  v27 = v26;
  v10 = (__int64 *)a1[88];
  v11 = (__int64 *)a1[89];
  if ( v10 != v11 )
  {
    do
    {
      v22 = 0LL;
      sub_1800615B4(*v10 + 16, (__int64)&v22);
      sub_18006C4C0(*v10, (__int64)v26);
      if ( BYTE8(v22) )
        sub_180061A34(v22);
      v10 += 2;
    }
    while ( v10 != v11 );
    v9 = v27;
  }
  v12 = 0LL;
  result = (__int64)(a1[112] - a1[111]) >> 4;
  if ( result )
  {
    do
    {
      v21 = 0LL;
      sub_180075918(a1, &v21, v12);
      if ( (_QWORD)v21 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(v21, v4);
      if ( *((_QWORD *)&v21 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v14 = *((_QWORD *)&v21 + 1);
          (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
        }
      }
      ++v12;
      result = (__int64)(a1[112] - a1[111]) >> 4;
    }
    while ( v12 < result );
    v9 = v27;
  }
  if ( v9 )
  {
    v15 = v26;
    LOBYTE(v15) = v9 != v26;
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v15);
    v27 = 0LL;
  }
  if ( BYTE8(v23) )
    result = sub_180061A34(v23);
  if ( BYTE8(v24) )
    result = sub_180061A34(v24);
  if ( BYTE8(v25) )
    result = sub_180061A34(v25);
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
