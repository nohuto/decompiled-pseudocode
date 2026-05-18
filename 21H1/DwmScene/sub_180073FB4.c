/*
 * XREFs of sub_180073FB4 @ 0x180073FB4
 * Callers:
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_18006A89C @ 0x18006A89C (sub_18006A89C.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_18006ABFC @ 0x18006ABFC (sub_18006ABFC.c)
 *     sub_18006B2A8 @ 0x18006B2A8 (sub_18006B2A8.c)
 *     sub_18006B72C @ 0x18006B72C (sub_18006B72C.c)
 *     sub_18006BBDC @ 0x18006BBDC (sub_18006BBDC.c)
 *     sub_18007079C @ 0x18007079C (sub_18007079C.c)
 *     sub_1800747B8 @ 0x1800747B8 (sub_1800747B8.c)
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_1800778B0 @ 0x1800778B0 (sub_1800778B0.c)
 *     sub_1800789DC @ 0x1800789DC (sub_1800789DC.c)
 *     sub_18007BA9C @ 0x18007BA9C (sub_18007BA9C.c)
 *     sub_18007BD6C @ 0x18007BD6C (sub_18007BD6C.c)
 *     sub_1800A0174 @ 0x1800A0174 (sub_1800A0174.c)
 *     sub_1800A0318 @ 0x1800A0318 (sub_1800A0318.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180073FB4(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  const char *v5; // rax
  const char *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *i; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned int v13; // edi
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r14
  signed __int32 v17; // ecx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rcx
  bool v21; // zf
  volatile signed __int32 *v22; // rbx
  unsigned int j; // edi
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 result; // rax
  __int64 v29; // rbx
  __int128 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v32; // [rsp+50h] [rbp-B0h]
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v45; // [rsp+118h] [rbp+18h]
  __int128 v46; // [rsp+120h] [rbp+20h] BYREF
  __int128 v47; // [rsp+130h] [rbp+30h] BYREF
  _Mtx_t v48[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v49; // [rsp+150h] [rbp+50h] BYREF
  __int128 v50; // [rsp+160h] [rbp+60h] BYREF
  __int128 v51; // [rsp+170h] [rbp+70h] BYREF
  __int128 v52; // [rsp+180h] [rbp+80h] BYREF
  __int128 v53; // [rsp+190h] [rbp+90h] BYREF
  __int128 v54; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v55; // [rsp+1B0h] [rbp+B0h] BYREF

  v30 = 0LL;
  *(_QWORD *)&v30 = *a2;
  v3 = a2[1];
  v4 = v3;
  *((_QWORD *)&v30 + 1) = v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v4 = *((_QWORD *)&v30 + 1);
  }
  v34 = v30;
  sub_1800762B0(a1, 8LL, &v34, &v38);
  v55 = 0LL;
  sub_1800615B4(a1 + 8, (__int64)&v55);
  v54 = 0LL;
  sub_18006156C(a1 + 1104, (__int64)&v54);
  v35 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v4 = *((_QWORD *)&v30 + 1);
  }
  v35 = v30;
  sub_1800789DC(a1, &v35);
  sub_1801163DC(
    &unk_1802085C8,
    3LL,
    "-----------------------------------------------------------------------------------");
  v5 = (const char *)sub_18001EF80(v44);
  v6 = v5;
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v6 = *(const char **)v5;
  v7 = sub_18006AB3C(v30);
  sub_1801163DC(&unk_1802085C8, 3LL, "Engine::DeleteDevice() -- removing device id %u -- %s", v7, v6);
  if ( v45 >= 0x10 )
  {
    v8 = v44[0];
    if ( v45 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v44[0] - 8);
      if ( (unsigned __int64)(v44[0] - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v45 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  v47 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v47);
  if ( sub_18006AB04(v30) != a1 )
    goto LABEL_82;
  v9 = *(_QWORD **)(a1 + 96);
  v39 = v9;
  for ( i = *(_QWORD **)(a1 + 88); i != v9 && *i != (_QWORD)v30; i += 2 )
    ;
  if ( i == v9 )
  {
LABEL_82:
    result = sub_1801163DC(&unk_1802085C8, 3LL, "Engine::DeleteDevice() -- device is not attached to this engine");
    if ( BYTE8(v47) )
      result = sub_180061A3C(v47);
  }
  else
  {
    if ( BYTE8(v47) )
      sub_180061A3C(v47);
    v52 = 0LL;
    sub_1800615B4(v30 + 24, (__int64)&v52);
    v11 = sub_18006AB3C(v30);
    v12 = sub_18006ABFC(v30);
    v13 = 0;
    if ( v12 )
    {
      do
      {
        v46 = 0LL;
        sub_18006AB7C(v30, &v46, v13);
        v49 = 0LL;
        sub_18006156C(v46 + 8, (__int64)&v49);
        *(_OWORD *)v48 = 0LL;
        (*(void (__fastcall **)(_QWORD, _Mtx_t *))(*(_QWORD *)v46 + 320LL))(v46, v48);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v46 + 360LL))(v46, 0LL);
        if ( LOBYTE(v48[1]) )
        {
          v14 = Mtx_unlock(v48[0]);
          if ( v14 )
          {
            std::_Throw_C_error(v14);
            __debugbreak();
          }
        }
        if ( BYTE8(v49) )
          sub_180061A34(v49);
        v15 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
        if ( *((_QWORD *)&v46 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        ++v13;
      }
      while ( v13 < v12 );
      v4 = *((_QWORD *)&v30 + 1);
    }
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
      v4 = *((_QWORD *)&v30 + 1);
    }
    v41 = v30;
    v16 = sub_18007BA9C(a1 + 184, &v41);
    if ( v4 )
    {
      v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF);
      v4 = *((_QWORD *)&v30 + 1);
      if ( v17 == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
    if ( v16 )
    {
      v36 = 0LL;
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
        v4 = *((_QWORD *)&v30 + 1);
      }
      v36 = v30;
      sub_18007079C((__int64 **)(a1 + 184), (__int64)&v42, (__int64)&v36);
      v18 = v42;
      v19 = *(volatile signed __int32 **)(v42 + 56);
      if ( v19 )
      {
        _InterlockedIncrement(v19 + 2);
        v19 = *(volatile signed __int32 **)(v18 + 56);
        v4 = *((_QWORD *)&v30 + 1);
      }
      v31 = *(_QWORD *)(v18 + 48);
      v32 = v19;
      v20 = *((_QWORD *)&v36 + 1);
      if ( *((_QWORD *)&v36 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 12LL)) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v4 = *((_QWORD *)&v30 + 1);
      }
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
        v4 = *((_QWORD *)&v30 + 1);
      }
      v43 = v30;
      sub_18007BD6C(a1 + 184, &v43);
      if ( v4 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1;
        v4 = *((_QWORD *)&v30 + 1);
        if ( v21 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
      sub_1800747B8(a1, &v31);
      if ( v32 )
      {
        if ( !_InterlockedDecrement(v32 + 2) )
        {
          v22 = v32;
          (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
          if ( !_InterlockedDecrement(v22 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        }
        v4 = *((_QWORD *)&v30 + 1);
      }
    }
    v37 = 0LL;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v37 = v30;
    sub_18007483C(a1, &v37);
    if ( sub_18006B2A8(v30) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(v30);
    for ( j = 0; j < v12; ++j )
    {
      v50 = 0LL;
      sub_18006AB7C(v30, &v50, j);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 176LL))(v50);
      v24 = (volatile signed __int32 *)*((_QWORD *)&v50 + 1);
      if ( *((_QWORD *)&v50 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( !_InterlockedDecrement(v24 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
    }
    sub_1800A0318(*(_QWORD *)(a1 + 512));
    sub_1800A0174(*(_QWORD *)(a1 + 512), v11);
    while ( (unsigned int)sub_18006ABFC(v30) )
    {
      v51 = 0LL;
      sub_18006AB7C(v30, &v51, 0);
      sub_18006A89C(v30, (__int64 *)&v51);
      v25 = (volatile signed __int32 *)*((_QWORD *)&v51 + 1);
      if ( *((_QWORD *)&v51 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( sub_18006B2A8(v30) )
      sub_18006B72C((_BYTE *)v30);
    if ( BYTE8(v52) )
      sub_180061A34(v52);
    v53 = 0LL;
    sub_1800615B4(a1 + 112, (__int64)&v53);
    v26 = sub_1800755BC(a1, &v30);
    sub_18006BBDC(a1 + 88, &v40, *(_QWORD *)(a1 + 88) + 16LL * v26);
    if ( BYTE8(v53) )
      sub_180061A34(v53);
    v33 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(&v30, (__int64 *)&v33);
    if ( *((_QWORD *)&v33 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL)) )
      {
        v27 = *((_QWORD *)&v33 + 1);
        (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v27 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
      }
    }
    sub_1801163DC(&unk_1802085C8, 3LL, "Engine::DeleteDevice() -- completed");
    sub_1801163DC(
      &unk_1802085C8,
      3LL,
      "-----------------------------------------------------------------------------------");
    sub_1800773B4(a1);
    sub_1800778B0(a1);
    result = sub_18007643C(a1);
    v4 = *((_QWORD *)&v30 + 1);
  }
  if ( BYTE8(v54) )
    result = sub_180061A34(v54);
  if ( BYTE8(v55) )
    result = sub_180061A34(v55);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    if ( !(_DWORD)result )
    {
      v29 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  return result;
}
